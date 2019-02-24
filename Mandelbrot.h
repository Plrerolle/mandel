#ifndef MANDELBROT_H
#define MANDELBROT_H
#include <iostream>
#include <cmath>
using namespace std;
class Mandelbrot
{
  public:
    Mandelbrot(int cols, int lines);
    virtual ~Mandelbrot();
    int testComplex(double v);
  protected:
  private:
    double x;
    int m_cols;
    int m_lines;
    double x1;
    double x2;
    double y;
    double y1;
    double y2;
    double module;
    int i;
    int cols;
    int lines;
    int a;
    int g;
    int b;
    int yes;
    int no;
    int number;
    double step_x;
    double step_x2;
    double step_y;
    double step_y2;
};
#endif // MANDELBROT_H
