# **************************************************
# ***********  Build target            *************
# **************************************************

add_executable(visel
               src/parse_log.cpp
               src/vis_routines.cpp
               src/visel.cpp
               src/visel_program_options.cpp)

target_include_directories(visel PUBLIC include)

if(VTK_LIBRARIES)
  target_link_libraries(visel ${VTK_LIBRARIES} ${LA_LIBRARIES} Boost::program_options stdc++fs)
else()
  target_link_libraries(visel vtkHybrid vtkWidgets ${LA_LIBRARIES} Boost::program_options stdc++fs)
endif()