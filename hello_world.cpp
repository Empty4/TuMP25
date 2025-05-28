#include <iostream>
#include <string>

int
main()
{
  std::string name; //Вторая попытка создать конфликт
  std::cout << "Enter your name: ";
  std::cin >> name; // Name from consol
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
