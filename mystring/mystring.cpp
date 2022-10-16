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

Mystring::Mystring(const Mystring &rhs) : Mystring{rhs.str} {
  std::cout << "Copy constructor for \"" << rhs.str << "\" has called."
            << std::endl;
}

Mystring::Mystring(Mystring &&rhs) noexcept {
  std::cout << "Move constructor for \"" << rhs.str << "\" has called."
            << std::endl;
  this->str = rhs.str;
  rhs.str = nullptr;
}

Mystring::~Mystring() {
  if (!this->str) {
    std::cout << "Delete Mystring object with nullptr" << std::endl;
    return;
  }
  if (std::strlen(this->str) == 0)
    std::cout << "The empty string";
  else
    std::cout << "The string \"" << this->str << "\"";
  std::cout << " has deleted." << std::endl;
  delete this->str;
}

Mystring &Mystring::operator=(const Mystring &rhs) {
  if (this != &rhs) {
    delete this->str;
    this->str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
  }
  std::cout << "Assignment operator has called." << std::endl;
  return *this;
}

const char *Mystring::get_str() const { return this->str; };

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
  char *buff{new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1]};
  std::strcpy(buff, lhs.str);
  std::strcat(buff, rhs.str);
  Mystring result{buff};
  delete[] buff;
  return result;
}
