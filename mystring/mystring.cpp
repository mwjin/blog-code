#include "mystring.h"

#include <cstring>
#include <iostream>

Mystring::Mystring() : str{nullptr} {
  this->str = new char[1];
  this->str[0] = '\0';
  std::cout << "The empty string is initialized." << std::endl;
}

Mystring::Mystring(const char *str) : str{nullptr} {
  if (str == nullptr) {
    Mystring();
  } else {
    this->str = new char[std::strlen(str) + 1];
    std::strcpy(this->str, str);
    std::cout << "The string \"" << this->str << "\" is initialized."
              << std::endl;
  }
}

Mystring::~Mystring() {
  if (std::strlen(this->str) == 0)
    std::cout << "The empty string";
  else
    std::cout << "The string \"" << this->str << "\"";
  std::cout << " has deleted." << std::endl;
  delete this->str;
}

const char *Mystring::get_str() const { return this->str; };
