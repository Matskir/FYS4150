#include <iostream>

int main(){
  
  //Single for-loop
  double s = 0;
  for (int i = 0; i <= 100; i++){
    s += i;
  }
  
  // Single while-loop
  int i = 0;
  double h = 0;
  while (i <= 100){
    h += i;
    i++
  }

  std::cout << s;
  std::cout << h;
  return 0;
}
