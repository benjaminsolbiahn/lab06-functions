#include <iostream>
#include <string>
#include "header.hpp"

int main() {
  std::string text;
  std::cout << "Please enter header text: ";
  std::getline(std::cin, text);

  if (within_width(text, 80)) {
    // call the display_header function and pass in the text
    display_header(text);
    // inputted by the user
  } else {
    std::cout << text;
  }
  return 0;
}
