#include "uniq_ch.hpp"
#include <iostream>

UniqCharacter::UniqCharacter(){

}

UniqCharacter::~UniqCharacter(){

}

bool UniqCharacter::Judge(const char* str) {
  // ASCII size: 1 byte (8 bits, 256 possible value)
  bool ch_set[256] = { false };
  int idx = 0;
  bool result = true;
  while (str[idx] != '\0') {
    char c = str[idx];
    if (ch_set[c] == true) {
        printf("\"%s\" doesn't have all unique character\n", str);
        result = false;
        break;
    }
    ch_set[c] = true;
    idx++;
  }
  return result;
}
