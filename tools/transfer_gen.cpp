#include <iostream>
#include <stdlib.h>

unsigned triple_index_map(unsigned i, unsigned j, unsigned k) {
	const unsigned t = i + j + k;
	return (t * (t + 1) * (t + 2) / 6 + (j + k) * (j + k + 1) / 2 + k);
}

unsigned choose_min(unsigned x, unsigned y, unsigned z, unsigned ix, unsigned iy, unsigned iz) {
    unsigned min, i, imin;
    if(z != 0) {
        min = z;
        imin = iz;
        i = 2;
    } else if(y != 0) {
        min = y;
        imin = iy;
        i = 1;
    } else {
        min = x;
        imin = ix;
        i = 0;
    }
        
    if((y < min || (y == min && iy < imin)) && y != 0) {
        i = 1;
        imin = iy;
        min = y;
    }
    if((x < min || (x == min && ix < imin)) && x != 0) {
        i = 0;
        imin = ix;
        min = x;
    }
    return i;
}

int main(int argc, char *argv[])
{
    unsigned m = atoi(argv[1]);
    unsigned n = atoi(argv[2]);

    for(int ix = m; ix >= 0; --ix)
        for(int iy = m - ix; iy >= 0; --iy) {
            int iz = m - ix - iy;
            unsigned i = triple_index_map(ix, iy, iz);
            for(int kx = n; kx >= 0; --kx)
                for(int ky = n - kx; ky >= 0; --ky) {
                    int kz = n - kx - ky;
                    unsigned k = triple_index_map(kx, ky, kz);
                    unsigned which = choose_min(kx, ky, kz, ix, iy, iz);
                    if(which == 0) {
                        if(kx == 1 && ix == 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_x * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx - 1, ky, kz) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix + 1, iy, iz) << " * OS1_S1 + " << triple_index_map (kx - 1, ky, kz) << ");" << std::endl;
                        } else if(kx == 1 && ix > 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_x * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx - 1, ky, kz) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix + 1, iy, iz) << " * OS1_S1 + " << triple_index_map (kx - 1, ky, kz) << ") +" << std::endl;
                            if(ix > 1) {
                                std::cout << ix << " * one_over_two_q * *(b + " << triple_index_map(ix - 1, iy, iz) << " * OS1_S1 + " << triple_index_map(kx - 1, ky, kz) << ");" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << triple_index_map(ix - 1, iy, iz) << " * OS1_S1 + " << triple_index_map(kx - 1, ky, kz) << ");" << std::endl;
                            }
                        } else if(kx > 1 && ix == 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_x * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx - 1, ky, kz) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix + 1, iy, iz) << " * OS1_S1 + " << triple_index_map (kx - 1, ky, kz) << ") +" << std::endl;
                            if(kx > 2) {
                                std::cout << kx - 1 << " * one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx - 2, ky, kz) << ");" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx - 2, ky, kz) << ");" << std::endl;
                            }
                        } else {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_x * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx - 1, ky, kz) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix + 1, iy, iz) << " * OS1_S1 + " << triple_index_map (kx - 1, ky, kz) << ") +" << std::endl;
                            if(ix > 1) {
                            std::cout << ix << " * one_over_two_q * *(b + " << triple_index_map(ix - 1, iy, iz) << " * OS1_S1 + " << triple_index_map(kx - 1, ky, kz) << ") +" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << triple_index_map(ix - 1, iy, iz) << " * OS1_S1 + " << triple_index_map(kx - 1, ky, kz) << ") +" << std::endl;
                            }
                            if(kx > 2) {
                                std::cout << kx - 1 << " * one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx - 2, ky, kz) << ");" << std::endl;                    
                            } else {
                                std::cout << "one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx - 2, ky, kz) << ");" << std::endl;        
                            }
                        }
                    } else if(which == 1) {
                        if(ky == 1 && iy == 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_y * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix, iy + 1, iz) << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ");" << std::endl;
                        } else if(ky == 1 && iy > 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_y * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix, iy + 1, iz) << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") +" << std::endl;
                            if(iy > 1) {
                                std::cout << iy << " * one_over_two_q * *(b + " << triple_index_map(ix, iy - 1, iz) << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ");" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << triple_index_map(ix, iy - 1, iz) << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ");" << std::endl;
                            }
                        } else if(ky > 1 && iy == 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_y * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix, iy + 1, iz) << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") +" << std::endl;
                            if(ky > 2) {
                                std::cout << ky - 1 << " * one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky - 2, kz) << ");" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky - 2, kz) << ");" << std::endl;
                            }
                        } else {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_y * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix, iy + 1, iz) << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") +" << std::endl;
                            if(iy > 1) {
                            std::cout << iy << " * one_over_two_q * *(b + " << triple_index_map(ix, iy - 1, iz) << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") +" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << triple_index_map(ix, iy - 1, iz) << " * OS1_S1 + " << triple_index_map(kx, ky - 1, kz) << ") +" << std::endl;
                            }
                            if(ky > 2) {
                                std::cout << ky - 1 << " * one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky - 2, kz) << ");" << std::endl;                    
                            } else {
                                std::cout << "one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky - 2, kz) << ");" << std::endl;        
                            }
                        }
                    } else {
                        if(kz == 1 && iz == 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_z * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix, iy, iz + 1) << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ");" << std::endl;
                        } else if(kz == 1 && iz > 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_z * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix, iy, iz + 1) << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") +" << std::endl;
                            if(iz > 1) {
                                std::cout << iz << " * one_over_two_q * *(b + " << triple_index_map(ix, iy, iz - 1) << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ");" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << triple_index_map(ix, iy, iz - 1) << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ");" << std::endl;
                            }
                        } else if(kz > 1 && iz == 0) {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_z * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix, iy, iz + 1) << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") +" << std::endl;
                            if(kz > 2) {
                                std::cout << kz - 1 << " * one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 2 ) << ");" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 2 ) << ");" << std::endl;
                            }
                        } else {
                            std::cout << "*(b + " << i << " * OS1_S1 + " << k << ") = prefactor_z * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") - " << std::endl;
                            std::cout << "p_over_q * *(b + " << triple_index_map(ix, iy, iz + 1) << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") +" << std::endl;
                            if(iz > 1) {
                            std::cout << iz << " * one_over_two_q * *(b + " << triple_index_map(ix, iy, iz - 1) << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") +" << std::endl;
                            } else {
                                std::cout << "one_over_two_q * *(b + " << triple_index_map(ix, iy, iz - 1) << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 1) << ") +" << std::endl;
                            }
                            if(kz > 2) {
                                std::cout << kz - 1 << " * one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 2 ) << ");" << std::endl;                    
                            } else {
                                std::cout << "one_over_two_q * *(b + " << i << " * OS1_S1 + " << triple_index_map(kx, ky, kz - 2 ) << ");" << std::endl;        
                            }
                        }
                    }
                }    
        }
}
