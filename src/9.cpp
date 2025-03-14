#include <iostream>
#include <string>

int main() {
  std::string name;
  int age;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age < 18) {
    std::cout << "Sorry, you are not eligible to vote." << std::endl;
  } else {
    std::cout << "Congratulations, you are eligible to vote!" << std::endl;
  }

  return 0;
}
