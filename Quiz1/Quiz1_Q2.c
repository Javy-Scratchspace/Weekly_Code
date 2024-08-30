#include <stdio.h>
int do_work() {
  return 2;
}
void printText(){
printf("I can't let you do that. \n");
}
int main()
{
  // prints hello world
  printf("Hello World \n");
  printText();
  int x = do_work();
  return 0;
}