//
// Created by Rupert Waldron on 05/04/2022.
//

#include <iostream>
#include <list>


template<typename T>
bool contains(std::list<T>& l, T element) {
  auto it = std::find(l.begin(), l.end(), element);  // Find with iterator
  return it != l.end();
}

template<typename T>
std::ostream& operator<<(std::ostream& o, std::list<T> l) {
  o << "[";
  for (T e : l) {
	o << e << " ";
  }
  o << "]";
  return o;
}

void print(std::list<char> v) {
  std::cout << std::boolalpha;
  std::cout << "Contents of list = " << v << std::endl;
  std::cout << "list is empty? = " << v.empty() << std::endl;
  std::cout << "First element of list = " << v.front() << std::endl;
  std::cout << "Last element of list = " << v.back() << std::endl;
  std::cout << "Is 'x' in the list? = " << contains(v, 'x') << std::endl;
}

int main(int argc, const char * argv[]) {
  std::list<char> l = {'b', 'a', 'c', 'd'};

  print(l);

  std::cout << std::endl << "Remove 'd' from the list" << std::endl;
  l.pop_back();
  std::cout << "Adding 'x' to the begining of the list" << std::endl;
  l.push_front('x');
  std::cout << "Sorting the list" << std::endl;
  l.sort();
  std::cout << "Adding 'y' to the end of the list" << std::endl << std::endl;
  l.push_back('y');

  print(l);
  return 0;
}