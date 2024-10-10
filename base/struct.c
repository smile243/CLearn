#include <stdio.h>
#include <string.h>
struct myStructure
{
  int myNum;
  char myLetter;
  char myString[30];
};
int main()
{
  struct myStructure s1={1,'a',"some text"};
  char strArray[] = "hello world";
  strcpy(s1.myString, "Some text");
  printf("strArray: %s\n", strArray);
  // Print the value
  printf("My string: %s\n", s1.myString);

  return 0;
}