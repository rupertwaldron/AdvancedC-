//
// Created by Rupert Waldron on 05/04/2022.
//

#include <iostream>
#include <exception>


class FooException : public std::exception {
  [[nodiscard]] const char* what() const noexcept override {
	return "ERROR: Foo Exception Happened!";
  }
};

int main() {
  throw FooException();
  return 0;
}