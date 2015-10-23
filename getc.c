#include "getc.h"

char getc(char c) {

   if (c >= 'A' && c <= 'Z')

      c = c + 32;
   return c;
}
