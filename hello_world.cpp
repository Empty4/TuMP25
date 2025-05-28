#include <iostream>
#include <string>

int
main()
{
  std::string name; //Very old comment for conflict
  std::cout << "Enter your name: ";
  std::cin >> name; // Name from consol
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
