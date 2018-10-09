# -*- coding: utf-8 -*-
"""
    The YAML domain.

    :copyright: Copyright 2007-2011 by the Sphinx team, see AUTHORS.
    :license: BSD, see LICENSE for details.
"""

import re

from sphinx import addnodes
from sphinx.domains import Domain, ObjType
from sphinx.locale import l_, _
from sphinx.directives import ObjectDescription
from sphinx.roles import XRefRole
from sphinx.util.nodes import make_refnode
from sphinx.util.docfields import TypedField

item_sig_re = re.compile(r'(.+?):(.*)$')


class YAMLMarkup(ObjectDescription):
    """
    Description of generic YAML markup.
    """

    def add_target_and_index(self, name, sig, signode):
        targetname = self.objtype + '-' + name
        if targetname not in self.state.document.ids:
            signode['names'].append(targetname)
            signode['ids'].append(targetname)
            signode['first'] = (not self.names)
            self.state.document.note_explicit_target(signode)

            objects = self.env.domaindata['yml']['objects']
            key = (self.objtype, name)
            if key in objects:
                self.env.warn(self.env.docname,
                              'duplicate description of %s %s, ' %
                              (self.objtype, name) +
                              'other instance in ' +
                              self.env.doc2path(objects[key]),
                              self.lineno)
            objects[key] = self.env.docname
        indextext = self.get_index_text(self.objtype, name)
        if indextext:
            self.indexnode['entries'].append(('single', indextext,
                                              targetname, '', None))

    def get_index_text(self, objectname, name):
        if self.objtype == 'item':
            return _('%s (keyword)') % name
        elif self.objtype == 'section':
            return _('%s (section)') % name
        return ''


def parse_item(d):
    """Parse an item signature.

    Returns (item, arguments) string tuple.
    """
    dir = d.strip()
    m = item_sig_re.match(dir)
    if not m:
        return (dir, '')
    parsed_dir, parsed_args = m.groups()
    return (parsed_dir.strip(), ': ' + parsed_args.strip())


def parse_section(d):
    """Parse an section signature.

    Returns (section, arguments) string tuple.
    """
    dir = d.strip()
    m = item_sig_re.match(dir)
    if not m:
        return (dir, '')
    parsed_dir, parsed_args = m.groups()
    return (parsed_dir.strip(), ': ' + parsed_args.strip())


class YAMLItem(YAMLMarkup):
    """
    Description of a YAML item.
    """

#    doc_field_types = [
#        TypedField('parameter', label=l_('Parameters'),
#                   names=('param', 'parameter', 'arg', 'argument',
#                          'keyword', 'kwarg', 'kwparam'),
#                   typerolename='obj', typenames=('paramtype', 'type'),
#                   can_collapse=True),
#        TypedField('variable', label=l_('Variables'), rolename='obj',
#                   names=('var', 'ivar', 'cvar'),
#                   typerolename='obj', typenames=('vartype',),
#                   can_collapse=True),
#    ]

    def handle_signature(self, sig, signode):
        name, args = parse_item(sig)
        desc_name = name
        signode += addnodes.desc_name(desc_name, desc_name)
        if len(args) > 0:
            signode += addnodes.desc_addname(args, args)
        return name


class YAMLSection(YAMLMarkup):
    """
    Description of a YAML section.
    """

#    doc_field_types = [
#        TypedField('parameter', label=l_('Parameters'),
#                   names=('param', 'parameter', 'arg', 'argument',
#                          'keyword', 'kwarg', 'kwparam'),
#                   typerolename='obj', typenames=('paramtype', 'type'),
#                   can_collapse=True),
#        TypedField('variable', label=l_('Variables'), rolename='obj',
#                   names=('var', 'ivar', 'cvar'),
#                   typerolename='obj', typenames=('vartype',),
#                   can_collapse=True),
#    ]

    def handle_signature(self, sig, signode):
        name, args = parse_section(sig)
        desc_name = name
        signode += addnodes.desc_name(desc_name, desc_name)
        if len(args) > 0:
            signode += addnodes.desc_addname(args, args)
        return name

# class YAMLRole(YAMLMarkup):
#     """
#     Description of a reST role.
#     """
#     def handle_signature(self, sig, signode):
#         signode += addnodes.desc_name(':%s:' % sig, ':%s:' % sig)
#         return sig


class YAMLDomain(Domain):
    """YAML domain."""
    name = 'yml'
    label = 'YAML'

    object_types = {
        'item': ObjType(l_('item'), 'item'),
        'section': ObjType(l_('section'), 'section'),
    }
    directives = {
        'item': YAMLItem,
        'section': YAMLSection,
    }
    roles = {
        'item':  XRefRole(),
        'section':  XRefRole(),
    }
    initial_data = {
        'objects': {},  # fullname -> docname, objtype
    }

    def clear_doc(self, docname):
        for (typ, name), doc in self.data['objects'].items():
            if doc == docname:
                del self.data['objects'][typ, name]

    def resolve_xref(self, env, fromdocname, builder, typ, target, node,
                     contnode):
        objects = self.data['objects']
        objtypes = self.objtypes_for_role(typ)
        for objtype in objtypes:
            if (objtype, target) in objects:
                return make_refnode(builder, fromdocname,
                                    objects[objtype, target],
                                    objtype + '-' + target,
                                    contnode, target + ' ' + objtype)

    def get_objects(self):
        for (typ, name), docname in self.data['objects'].iteritems():
            yield name, name, typ, docname, typ + '-' + name, 1


def setup(sphinx):
    sphinx.add_domain(YAMLDomain)
