#include <iostream>

unsigned triple_index_map(unsigned i, unsigned j, unsigned k) {
	const unsigned t = i + j + k;
	return (t * (t + 1) * (t + 2) / 6 + (j + k) * (j + k + 1) / 2 + k);
}

unsigned choose_min(unsigned x, unsigned y, unsigned z) {
    unsigned min, i;
    if(z != 0) {
        min = z;
        i = 2;
    } else if(y != 0) {
        min = y;
        i = 1;
    } else {
        min = x;
        i = 0;
    }
        
    if(y < min && y != 0) {
        i = 1;
        min = y;
    }
    if(x < min && x != 0) {
        i = 0;
        min = x;
    }
    return i;
}

int main()
{
    bool A[21][21][21][21];
    for(unsigned N = 0; N < 21; ++N)
        for(unsigned x = 0; x < 21; ++x)
            for(unsigned y = 0; y < 21; ++y)
                for(unsigned z = 0; z < 21; ++z)
                    A[N][x][y][z] = false;

    unsigned m;

    std::cout << "give m " << std::endl;
    std::cin >> m;
    for(unsigned x = 0; x <= m; ++x)
        for(unsigned y = 0; y <= m - x; ++y)
            A[0][x][y][m - x - y] = true;

    for(unsigned N = 0; N < m - 1; ++N) {
        for(unsigned x = 0; x <= m - N; ++x)
            for(unsigned y = 0; y <= m - N - x; ++y) {
                unsigned z = m - N - x - y;
                if(A[N][x][y][z]) {
                    unsigned which = choose_min(x, y, z);
                    if(which == 0) {
                        A[N + 1][x - 1][y][z] = true; 
                    } else if(which == 1) {
                        A[N + 1][x][y - 1][z] = true;
                    } else {
                        A[N + 1][x][y][z - 1] = true;
                    }
                }
            }
    }

    

    for(int N = m; N >= 0; --N)
        for(int x = m-N; x >= 0; --x)
            for(int y = m-N-x; y >= 0; --y)
                for(int z = m-N-x-y; z >= 0; --z)
                    if(A[N][x][y][z]) {
                         unsigned which = choose_min(x, y, z);
                         if(which == 0) {
                             bool ext = (x > 1);
                             std::cout << "*(b + " << triple_index_map(x,y,z) << " * OS1_S1 + " << N << ") =";
                             std::cout << " X_PA * *(b + " << triple_index_map(x-1,y,z) << " * OS1_S1 + " << N << ") + alpha_X * *(b + ";
                             std::cout << triple_index_map(x-1,y,z) << " * OS1_S1 + " << N+1 << ")";
                             if(ext) {
                                 if(x - 1 > 1) {
                                     std::cout << " + " << x-1 << " * one_over_two_p * (*(b + " << triple_index_map(x-2,y,z) << " * OS1_S1 + ";
                                 } else {
                                     std::cout << " + one_over_two_p * (*(b + " << triple_index_map(x-2,y,z) << " * OS1_S1 + ";
                                 }
                                 std::cout <<  N << ") - alpha_over_p * *(b + "  << triple_index_map(x-2,y,z) << " * OS1_S1 + ";
                                 std::cout << N+1 << "))";
                             }
                             std::cout << ";" << std::endl;
                         } else if(which == 1) {
                             bool ext = (y > 1);
                             std::cout << "*(b + " << triple_index_map(x,y,z) << " * OS1_S1 + " << N << ") =";
                             std::cout << " Y_PA * *(b + " << triple_index_map(x,y-1,z) << " * OS1_S1 + " << N << ") + alpha_Y * *(b + ";
                             std::cout << triple_index_map(x,y-1,z) << " * OS1_S1 + " << N+1 << ")";
                             if(ext) {
                                 if(y - 1 > 1) {
                                     std::cout << " + " << y-1 << " * one_over_two_p * (*(b + " << triple_index_map(x,y-2,z) << " * OS1_S1 + ";
                                 } else {
                                     std::cout << " + one_over_two_p * (*(b + " << triple_index_map(x,y-2,z) << " * OS1_S1 + ";
                                 }
                                 std::cout <<  N << ") - alpha_over_p * *(b + "  << triple_index_map(x,y-2,z) << " * OS1_S1 + ";
                                 std::cout << N+1 << "))";
                             }
                             std::cout << ";" << std::endl;
                         } else {
                             bool ext = (z > 1);
                             std::cout << "*(b + " << triple_index_map(x,y,z) << " * OS1_S1 + " << N << ") =";
                             std::cout << " Z_PA * *(b + " << triple_index_map(x,y,z-1) << " * OS1_S1 + " << N << ") + alpha_Z * *(b + ";
                             std::cout << triple_index_map(x,y,z-1) << " * OS1_S1 + " << N+1 << ")";
                             if(ext) {
                                 if(z - 1 > 1) {
                                     std::cout << " + " << z-1 << " * one_over_two_p * (*(b + " << triple_index_map(x,y,z-2) << " * OS1_S1 + ";
                                 }  else {
                                     std::cout << " + one_over_two_p * (*(b + " << triple_index_map(x,y,z-2) << " * OS1_S1 + ";
                                 }
                                 std::cout <<  N << ") - alpha_over_p * *(b + "  << triple_index_map(x,y,z-2) << " * OS1_S1 + ";
                                 std::cout << N+1 << "))";
                             }
                             std::cout << ";" << std::endl;
                         }
                    }
                        
}
