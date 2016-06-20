#include <iostream>
#include <stdlib.h>
#include <memory>
#include "uniq_ch.hpp"
#include "reversestr.hpp"
#include "permutation.hpp"
#include "replacespace.hpp"
#include "singlylinkedlist.hpp"
#include "removeduplicates.hpp"
#include "removemiddlenode.hpp"
#include "simplestack.hpp"

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
      case 5:  // fix me later
      {
          SinglyLinkedList list;
          list.Insert(1);
          list.Insert(3);
          list.Insert(5);
          list.Insert(7);
          list.Insert(7);
          list.Insert(8);
          RemoveDuplicate rd;
          printf("Remove duplicates\n");
          rd.Remove(list);
          
          list.Insert(3);
          list.Insert(1);
          list.Insert(8);
          list.Insert(7);
          list.Insert(12);
          printf("remove duplicate without buffer\n");
          rd.RemoveWithoutBuffer(list);
          
          SinglyLinkedList list2;
          list2.Insert(3);
          list2.Insert(1);
          list2.Insert(8);
          list2.Insert(7);
          list2.Insert(12);
          
          printf("find kth to the last element\n");
          printf("k=1, result: %d\n", list2.FindKToLastElement(1));
          printf("k=2, result: %d\n", list2.FindKToLastElement(2));
          printf("k=3, result: %d\n", list2.FindKToLastElement(3));
          printf("k=4, result: %d\n", list2.FindKToLastElement(4));
          printf("k=5, result: %d\n", list2.FindKToLastElement(5));
          printf("k=6, result: %d\n", list2.FindKToLastElement(6));
          
          printf("delete a node in the middle of list\n");
          RemoveMiddleNode rm;
          Node* n = list2.GetFront()->next->next->next;
          rm.Remove(n);
          list2.ShowAll();
          
          
      }
          break;
      case 6:
      {
          printf("test simple stack\n");
          SimpleStack ss;
          if (ss.IsEmpty()) {
              printf("stack is empty now\n");
          }
          ss.Push(12);
          ss.Push(2);
          ss.Push(8);
          ss.Push(30);
          while (!ss.IsEmpty()) {
              int currntTop = 0;
              ss.GetTop(&currntTop);
              printf("len: %d, top: %d\n", ss.GetLength(), currntTop);
              ss.Pop(&currntTop);
              printf("pop: %d\n", currntTop);
          }
      }
          break;
    default:
      printf("No solution\n");
      break;
  }

return 0;
}
