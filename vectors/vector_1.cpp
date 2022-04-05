//
// Created by Rupert Waldron on 05/04/2022.
//
#include <iostream>
#include <vector>


template<typename T>
std::vector<T> createVector(std::initializer_list<T> values = {}) {
  return std::vector<T>(values);
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
  os << "[";
  for (auto ii = v.begin(); ii != v.end(); ++ii)
  {
	os << " " << *ii;
  }
  os << " ]";
  return os;
}

template<typename T>
void printVector(const std::vector<T>& v) {
  std::cout << std::boolalpha;
  std::cout << "Contents of v = " << v << std::endl;
  std::cout << "Size of v = " << v.size() << std::endl;
  std::cout << "v is empty? = " << v.empty() << std::endl;
  std::cout << "First element of v = " << v.front() << std::endl;
  std::cout << "Last element of v = " << v.back() << std::endl;
  std::cout << "Second element of v = " << v[1] << std::endl;
  std::cout << "Third element of v = " << v.at(2) << std::endl;
}


// To print out vectors with std::cout


int main() {
  std::vector<int> v = createVector({0, 1, 2, 3, 4});

  printVector(v);

  std::cout << std::endl << "Remove the last element from v" << std::endl;
  v.pop_back();
  std::cout << "Adding 5 to v" << std::endl;
  v.push_back(5);
  std::cout << std::endl;

  std::cout << "vector = " << v << std::endl;

  printVector(v);
  return 0;
}
