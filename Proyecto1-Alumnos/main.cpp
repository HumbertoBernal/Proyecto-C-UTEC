#include <iostream>
#include "Ascii.h"
using namespace std;


int main() {
  char **matriz;
  size_t alto, ancho;

  matriz = loadASCII("utec.txt", alto, ancho);

  int opcion = 0;

  cout << "\n\n";
  cout <<
    "  	 █████╗ ███████╗ ██████╗██╗██╗ \n"
      "	██╔══██╗██╔════╝██╔════╝██║██║ \n"
     "	███████║███████╗██║     ██║██║ \n"
     "	██╔══██║╚════██║██║     ██║██║ \n"
     "	██║  ██║███████║╚██████╗██║██║ \n"
     "	╚═╝  ╚═╝╚══════╝ ╚═════╝╚═╝╚═╝ \n\n";

  
  cout << "\n"
  "1.Figura Original\n"
  "2. Inverso\n"
  "3. Reflejo hacia abajo\n"
  "4. Reflejo hacia un costado\n"
  "5. Rotar 180 grados\n"
  "6. Salir\n"
  "Ingresa una opcion: ";
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
    
  }
  if (opcion==2)
  {
  }
  if (opcion==3)
  {
    for (int i =alto-1;0 < i; --i)
    {
      for (int j = 0 ; j< ancho; ++j)
      {
        cout << matriz[i][j];
      }
      cout << '\n';
    }
  }
  if (opcion==4)
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
  if (opcion==5)
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

  deleteASCII(matriz, alto, ancho);
  return 0;
}
