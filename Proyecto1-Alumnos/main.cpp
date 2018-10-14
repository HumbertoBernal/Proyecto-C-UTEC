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
   cin >> opcion;

  if (opcion==0)
  {
   for (int i = 0; i < alto; ++i)
   {
    for (int j = 0; j < ancho; ++j)
    {
      cout << matriz[i][j];
    }
    cout << '\n';
   }
  }
  if (opcion==1)
  {
    for (int i =alto-1;0 <= i; --i)
    {
      for (int j = ancho-1 ; 0 <= j; --j)
      {
        cout << matriz[i][j];
      }
      cout << '\n';
    }
  }
  if (opcion==2)
  {
    for (int i =0;i < alto; ++i)
    {
      for (int j = ancho-1 ; 0 <= j; --j)
      {
        cout << matriz[i][j];
      }
      cout << '\n';
    }

  }
  if (opcion==3){

  }
  if (opcion==4){

  }

  deleteASCII(matriz, alto, ancho);
  return 0;
}
