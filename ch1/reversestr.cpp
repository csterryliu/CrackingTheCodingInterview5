#include "reversestr.hpp"
#include <iostream>

ReverseStr::ReverseStr() {

}
ReverseStr::~ReverseStr(){

}

void ReverseStr::Reverse(char* str) {
  int null_index = 0;
  // find the length of this string
  while(str[null_index] != '\0') {
    null_index++;
  }
  // start swaping
  for (int i = 0, j = null_index-1 ; i < j; i++, j-- ) {
    swap(str[i], str[j]);
  }
  // show result
  printf("%s\n", str);

}

void ReverseStr::swap(char& a, char& b) {
  char temp = a;
  a = b;
  b = temp;
}
