#include <iostream>
#include "Ascii.h"
using namespace std;
void funcion_opciones()
{ int opcion=0;
    char **matriz;
    size_t alto, ancho;

    matriz = loadASCII("utec.txt", alto, ancho);

    cout << "\n"
            "1.Figura Original\n"
            "2. Inverso\n"
            "3. Reflejo hacia abajo\n"
            "4. Reflejo hacia un costado\n"
            "5. Rotar 180 grados\n"
            "6. Girar 90 grados\n"
            "7. Salir del programa\n"
            "Ingresa una opcion: ";
    cin >> opcion;
    if (opcion==1)
    {
        for (int i = 0; i < alto; ++i)
        {
            for (int j = 0; j < ancho; ++j)
            {
                cout << matriz[i][j];
            }
            cout << '\n';
        }
        funcion_opciones();
    }
    if (opcion==2)
    {
        for (int i = 0; i < alto; ++i){
            for (int j = 0; j < ancho; ++j) {
                if (matriz[i][j] == 32)
                    matriz[i][j] = 64;
                if (matriz[i][j] != 64)
                    matriz[i][j]=0;

            }}
        for (int i = 0; i < alto; ++i)
        {
            for (int j = 0; j < ancho; ++j)
            {
                cout << matriz[i][j];
            }
            cout << '\n';
        }
        funcion_opciones();

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
        funcion_opciones();
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
        funcion_opciones();
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
        funcion_opciones();
    }
    if (opcion==6)
    {
        for (int j = 0 ; j < ancho; ++j)
        {
            for (int i = 0;i < alto; ++i)
            {
                cout << matriz[i][j];
            }
            cout << '\n';
        }
        funcion_opciones();
    }
    if (opcion==7)
    {
        cout<<"El programa ha finalizado.";
    }
}
int main() {
  char **matriz;
  size_t alto, ancho;

  matriz = loadASCII("utec.txt", alto, ancho);

  cout << "\n\n";
  cout <<
       "  	 █████╗ ███████╗ ██████╗██╗██╗ \n"
       "	██╔══██╗██╔════╝██╔════╝██║██║ \n"
       "	███████║███████╗██║     ██║██║ \n"
       "	██╔══██║╚════██║██║     ██║██║ \n"
       "	██║  ██║███████║╚██████╗██║██║ \n"
       "	╚═╝  ╚═╝╚══════╝ ╚═════╝╚═╝╚═╝ \n\n";

    funcion_opciones();

    deleteASCII(matriz, alto, ancho);
  return 0;
}
