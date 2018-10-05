
#include "Ascii.h"

#include "ascii.h"
char ** loadASCII(const char* dir, size_t &height, size_t &width)
{char **matriz;

  getSize(dir, height, width);

  ifstream file(dir);
  string line;
  matriz = new char*[height];
  for (int i = 0; getline( file, line ); ++i){
    matriz[i] = new char[width];
    for (int j = 0; j < width; ++j) matriz[i][j] = ' ';
    for (int j = 0; j < line.size(); ++j){
      matriz[i][j] = line[j];
    }
  }
  file.close();
  return matriz;
}
void getSize(const char* dir, size_t &height, size_t &width){
  ifstream file(dir);
  height = width = 0;
  for( std::string line; getline( file, line ); ){
    if( line.size() > width) width = line.size();
    height++;
  }
  file.close();
}

void deleteASCII(char **&matriz, size_t &height, size_t &width){
  for (int i = 0; i < height; ++i)
    delete [] matriz[i];
  delete [] matriz;
}