#include <iostream>
#include "Ascii.h"
using namespace std;


int main() {
  char **matriz;
  size_t alto, ancho;

  matriz = loadASCII("utec.txt", alto, ancho);

  int opcion = 0;

  cout << "\n\n";
  cout << "  	 █████╗ ███████╗ ██████╗██╗██╗ \n"
    "	██╔══██╗██╔════╝██╔════╝██║██║ \n"
    "	███████║███████╗██║     ██║██║ \n"
    "	██╔══██║╚════██║██║     ██║██║ \n"
    "	██║  ██║███████║╚██████╗██║██║ \n"
    "	╚═╝  ╚═╝╚══════╝ ╚═════╝╚═╝╚═╝ \n\n";

   cout << "\n\nImprime la matriz\n\n";

  for (int i = 0; i < alto; ++i) {
    for (int j = 0; j < ancho; ++j) {
      cout << matriz[i][j];
    }
    cout << '\n';
  }


  deleteASCII(matriz, alto, ancho);
  return 0;
}