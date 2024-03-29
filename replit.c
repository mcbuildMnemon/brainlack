// THIS IS ONLY FOR USE ON REPLIT
// To use it, you're going to need to open a C repl and copy this code to the file and create another file named "main.bl" or if you want to get technical, you can change the file below.

#include <stdio.h>

int main() {
  char memory[100] = {0};
  char *counter_ptr = &memory;
  FILE *file;
  char c;
  int comment = 0;

  file = fopen("main.bl", "r"); //change "main.bl" if you wish
  if (file == NULL) {
    printf("Cannot open file \n");
    return 0;
  }

  while ((c = fgetc(file)) != EOF) {
    if (c == ';') {
      comment = !comment;
    } else if (c == '[') {
      ++(*counter_ptr);
    } else if (c == ']') {
      --(*counter_ptr);
    } else if (c == '*') {
      *counter_ptr *= 2;
    } else if (c == ',') {
      *counter_ptr *= 3;
    } else if (c == '(') {
      ++(counter_ptr);
    } else if (c == ')') {
      --(counter_ptr);
    } else if (c == '.') {
      printf("%c", *counter_ptr);
    } else if (c == '%') {
      memset(memory, 0, sizeof(memory));
    } else if (c == '#') {
      *counter_ptr = 0;
    } else if (c == '@') {
      printf("%d\n", *counter_ptr);
    } else if (c == '/') {
      printf("\n");
    } else if (c == '&') {
      printf(" ", *counter_ptr);
    }
  }
  fclose(file);
  return 0;
}
