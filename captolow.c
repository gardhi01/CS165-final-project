#include <stdio.h>
#include "getc.h"
int main(int argc, char* argv[]) {
   
   char c;
   while ((c=getchar()) != EOF) {
      c = getc(c);
      printf("%c",c);
   }
   return 0;
   
}
