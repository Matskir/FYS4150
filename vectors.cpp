#include <iostream>
#include <vector>

int main(){
  int n = 10;
  int large_n = 10;
  int m = 10;

  //Example 1: Creating a vector of length n filled with zeros
  std::vector<double> my_vector(n, 0.0);

  //Example 2: Create a matrix of dimension NxM
  std::vector<std::vector<double>> A(large_n);
  for (int i = 0; i < large_n; i++){
    A[i].reserve(m);
  }

  //Example 3: Adding elements of type double using push_back
  std::vector x;
  x.push_back(2.0);
  
  //Example 4: Creating a matrix using push_back

}
