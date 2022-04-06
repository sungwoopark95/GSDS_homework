#include <cstdlib>
#include <iostream>
#include <math.h>

bool is_prime(unsigned int x);

int main() {
  unsigned int start_num;
  unsigned int end_num;
  
  std::cout << "Find prime number within a range:\n";
  std::cout << "--------------------------------------\n";
  std::cout << "-> The start of the range: ";
  // TODO: set start_num
  std::cin >> start_num;
  std::cout << "-> The end of the range: ";
  // TODO: set end_num
  std::cin >> end_num;

  std::cout << "\nThe prime numbers between " << start_num
          << " and " << end_num << " are:" << std::endl;

  // TODO: print prime numbers
  int itr = start_num;
  while (itr <= end_num) {
    if (is_prime(itr)) {
      std::cout << itr << " ";
    }
    itr++;
  }
  std::cout << std::endl;

  return EXIT_SUCCESS;
}

bool is_prime(unsigned int x) {
  double x_sqrt;
  if (x == 1) {
      return false;
  }
  x_sqrt = sqrt(x);
  int count = 0;
  for (int i=2; i<=x_sqrt; i++) {
      if ((x % i) == 0) {
          return false;
      }
  }
  return true;
}