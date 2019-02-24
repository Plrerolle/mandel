#include "Mandelbrot.h"
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;
Mandelbrot::Mandelbrot(int cols, int lines)
{
  x=-2;
  m_cols=cols;
  m_lines=lines;
  y=1;
  step_x2=3;
  step_x=step_x2/m_cols;
  step_y2=2;
  step_y=step_y2/m_lines;
  number = testComplex(x);
}
Mandelbrot::~Mandelbrot()
{
//dtor
}
int Mandelbrot::testComplex(double v)
{
  for (b=0; b<m_lines; b++)
  {
    x=v;
    for (g=0; g<m_cols; g++)
    {
      x1=x;
      y1=y;
      for(i=0; i<=1000; i++)
      {
        x2=(pow(x1, 2)-pow(y1, 2))+x;
        y2=(2*x1*y1)+y;
        x1=x2;
        y1=y2;
      }
      module=sqrt(pow(x1, 2)+pow(y1, 2));
      if(y==0)
      {
        cout << "+";
      }
      if(module<=2)
      {
        cout << ".";
        yes++;
      }
      else
      {
        no++;
        cout << " ";
      }
      x+=step_x;
    }
    y-=step_y;
  }
  return yes;
}
