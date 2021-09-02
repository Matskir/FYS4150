#include <iostream>

double f(double x, double y); //Declaration

int main(int argc, char const*argv[]){
  double x = 2, y = 1;
  double res = f(x,y);
  return 0;
}

double f(double x, double y){
  //Definition
  return x*x + y;
}
