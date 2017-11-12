#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args( char * line ) {
  char (*args[5]);
  int count = 0;
  while (line != NULL) {
    args[count] = strsep(&line, " ");
    count++;
  }

  return args;
}

int main() {
  char test[100] = "ls -l -a";
  char *s2 = test;
  char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  char (*ans[5]);
  ans[] = parse_args(s2);
  printf("first arg: [%s]\n", ans[0]);
  printf("second arg: [%s]\n", ans[1]);
  printf("third arg: [%s]\n", ans[2]);
}
