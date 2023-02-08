#include <ctype.h>
#include <stdio.h>

int main() {
  char ch = 'V';
  int root;

  root = isalpha(ch);
  printf("%d", root);

   /* printf("%c is an alphabetic character\n", ch);
  } else {
    printf("%c is not an alphabetic character\n", ch);
  }*/
  return 0;
}
