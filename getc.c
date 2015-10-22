#include "getc.h"

char getcap(char c) {

   if (c >= 'A' && c <= 'Z')

      c = c + 32;
   return c;
}
