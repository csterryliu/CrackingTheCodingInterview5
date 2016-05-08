#include <iostream>
#include <stdlib.h>
#include <memory>
#include "uniq_ch.hpp"
#include "reversestr.hpp"
#include "permutation.hpp"
#include "replacespace.hpp"

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
        printf("=== Question 1.1 ===\n");
        UniqCharacter uc;
        uc.Judge("Hello!");
        uc.Judge("World!");
      }
    break;
    case 2:
    {
      printf("=== Question 1.2===\n");
      ReverseStr r;
      char c1[] = {'G', 'i', 't', 'H', 'u', 'b', '\0'};
      r.Reverse(c1);
      char c2[] = {'I', ' ', 'a', 'm', ' ', 'B', 'a', 't', 'm', 'a', 'n', '!' , '\0'};
      r.Reverse(c2);
      char c3[] = {'D', 'a', 'r', 'e', 'd', 'e', 'v', 'i', 'l', '\0'};
      r.Reverse(c3);
    }
    break;
      case 3:
      {
          printf("=== Question 1.3 ===\n");
          PermutationDetector p;
          std::string s1 = "hello";
          std::string s2 = "oelhl";
          p.Judge(s1, s2);
          std::string s3 = "1234";
          std::string s4 = "3541";
          p.Judge(s3, s4);
          std::string s5 = "app";
          std::string s6 = "apple";
          p.Judge(s5, s6);
          std::string s7 = "love";
          std::string s8 = "eovl";
          p.JudgeWithoutMap(s7, s8);
      }
          break;
      case 4:
      {
          printf("=== Question 1.4 ===\n");
          ReplaceSpace r;
          std::string s1 = "Hi this is Tony Stark speaking";
          char ch_array[100];
          memcpy(ch_array, s1.c_str(), s1.length());
          printf("%s\n", ch_array);
          r.Replace(ch_array, static_cast<int>(s1.length()));
      }
          break;
    default:
      printf("No solution\n");
      break;
  }

return 0;
}
