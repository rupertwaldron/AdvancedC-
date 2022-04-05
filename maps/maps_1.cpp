//
// Created by Rupert Waldron on 05/04/2022.
//

#include <iostream>
#include <list>
#include <map>

template <class K, class V>
std::ostream& operator<<(std::ostream& os, const std::map<K, V>& m)
{
  os << "Key|Value\n";
  for (auto const& [key, val] : m)
  {
	os << "[" << key << ":" << val << "]" << std::endl;
  }
  os << "-----------";
  return os;
}


void print(std::map<int, int>& m) {
  std::map<int, int>::const_iterator it;
  std::cout << "Key\t|\t" << "Value" << std::endl;

  for (it = m.cbegin(); it != m.cend(); it++) {

	// To access the key: it->first
	// To access the value: it->second
	std::cout << it->first << "\t->\t" << it->second << std::endl;
  }

  std::cout << std::endl << std::boolalpha;
  std::cout << "map is empty? = " << m.empty() << std::endl;
  std::cout << "Size of map = "  << m.size() << std::endl;
  std::cout << "Is '1' in the map? = "  << (m.find(1)->first != 0) << std::endl;
  std::cout << "Is '0' in the map? = "  << (m.find(0)->first != 0) << std::endl;
}




int main(int argc, const char * argv[]) {
  std::list<int> l = {
	  1, 1,
	  2, 2, 2, 2, 2,
	  3,
	  4, 4,
	  5, 5, 5, 5,
	  7, 7, 7,
	  8
  };

  // Counts the number of occurences
  // for each element in the list
  std::map<int, int> counter;

  for (int element : l) {

	// If the 'element' key does not exists,
	// it will create one with the value of 1
	counter[element] += 1;
  }

  std::cout << "Map RR = \n" << counter << std::endl;

  // Print out the results
  print(counter);

  std::cout << std::endl << "Remove the contents of the map" << std::endl << std::endl;
  counter.clear();

  print(counter);


  return 0;
}