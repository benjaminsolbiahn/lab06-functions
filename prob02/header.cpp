#include <iostream>
#include <string>
#include "header.hpp"

void display_header(std::string user_input){
  int length_user_input = user_input.length();
  int asterisk;

  for (asterisk = 0; asterisk < length_user_input + 4; asterisk++) {
    std::cout << "*";
  }
  std::cout << "\n* " << user_input << " *\n";
  for (asterisk = 0; asterisk < length_user_input + 4; asterisk++) {
    std::cout << "*";
  }
  std::cout << "\n";
}

bool within_width(std::string user_input, unsigned short int screen_width){
  int length_user_input = user_input.length();

  if (length_user_input <= 80) {

    return true;
  } else if (length_user_input > 80) {

    return false;
  }

}
