

#ifndef NUEVO_TERMINADO_ASCII_H
#define NUEVO_TERMINADO_ASCII_H

#include <fstream>
#include <iostream>


using namespace std;
char ** loadASCII(const char* dir, size_t &height, size_t &width);
//void loadASCII(const char* dir, char **&matriz, size_t &height, size_t &width);
void getSize(const char* dir, size_t &height, size_t &width);
void deleteASCII(char **&matriz, size_t &height, size_t &width);


#endif //NUEVO_TERMINADO_ASCII_H
