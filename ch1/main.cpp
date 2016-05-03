#include <iostream>
#include <stdlib.h>
#include "uniq_ch.hpp"

// using namespace std;

int main(int argc, char** argv) {

  printf("Cracking the Coding Interview - Ch1 Questions\n");

  if (argc != 2) {
    printf("Usage: main 1\n");
    return 0;
  }

  int q = atoi(argv[1]);
  switch(q) {
    case 1:
      {
        printf("Question 1.1\n");
        UniqCharacter uc;
        uc.Judge("Hello!");
        uc.Judge("World!");
      }
    break;
    default:
      printf("No solution\n");
      break;
  }

return 0;
}
