#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
  int i, j;
  char aux;

  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
    aux = str[i];
    str[i] = str[j];
    str[j] = aux;
  }
}

int main() {
  char str[] = "Hello, World!";

  printf("String original: %s\n", str);
  inverterString(str);
  printf("String invertida: %s\n", str);

  return 0;
}

