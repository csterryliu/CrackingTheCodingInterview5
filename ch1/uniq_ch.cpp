#include "uniq_ch.hpp"
#include <iostream>

UniqCharacter::UniqCharacter(){

}

UniqCharacter::~UniqCharacter(){

}

bool UniqCharacter::Judge(const char* str) {
  // ASCII range: 0-127
  bool ch_set[128] = { false };
  int idx = 0;
  bool result = true;
  while (str[idx] != '\0') {
    printf("%c\n",str[idx]);
    char c = str[idx];
    if (ch_set[c] == false) {
      ch_set[c] = true;
    } else {
      printf("The string doesn't have all unique character\n");
      result = false;
      break;
    }
    idx++;
  }

  return result;
}
