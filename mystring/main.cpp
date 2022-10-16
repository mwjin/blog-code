#include <iostream>
#include <vector>

#include "mystring.h"

using namespace std;

int main() {
  cout << "Program Start" << endl;
  std::vector<Mystring> strings{};
  strings.push_back(Mystring{"Hello!"});
  strings.push_back(Mystring{"World!"});
  cout << "Program End" << endl;
}
