#include <iostream>
#include "Mandelbrot.h"
using namespace std;
int main(int argc, char *argv[])
{
  unsigned cols;
  unsigned lines;
  cin >> cols;
  cin >> lines;
  Mandelbrot set(cols, lines);
  return 0;
}
