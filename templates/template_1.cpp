//
// Created by Rupert Waldron on 05/04/2022.
//
#include <iostream>

/* Instead of writing a new function for each type:
int sum(int a, int b);
double sum(double a, double b);
... etc.
You can write it with templates:
*/

template<class T>
T sum(T a, T b) {
  return a + b;
}

template<typename T>
class Storage {
  T to_store;

 public:
  explicit Storage(T s = T()) : to_store(s) {}
  T getStorage() { return to_store; }
};


int main() {
  Storage<int> s(10);
  std::cout << s.getStorage() << std::endl;  // 10

  double d1 = 16.2;
  double d2 = 19.9;
  int i1 = 13;
  int i2 = 17;
  std::cout << sum(d1, d2) << std::endl;
  std::cout << sum(i1, i2) << std::endl;
  return 0;
}