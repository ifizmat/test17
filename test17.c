#include <stdio.h>
int main(int argv, char *argc[]) {
  printf("Test git\n");
  printf("argv: %d\n", argv);
  int i = 0;
  for (i = 0; i < argv; i++) {
    printf("%s\n", argc[i]);
  }
  return 0;
}