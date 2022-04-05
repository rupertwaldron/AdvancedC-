//
// Created by Rupert Waldron on 05/04/2022.
//

#include <iostream>

namespace Multiply {
int foo(int a, int b) { return a * b; }
}

namespace Add {
int foo(int a, int b) { return a + b; }
}

int main() {
  std::cout << Multiply::foo(2, 3) + 1 << std::endl;  // 7
  std::cout << Add::foo(2, 3) << std::endl;   // 5
  return 0;
}