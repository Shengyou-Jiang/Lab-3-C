#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <math.h>


int sum_n(int n) {
  if (n<=1) {
    return n;
  }
  else {
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n) {
  if (n>0) {
    printf("%s\n", s);
    print_n(s, n-1);
    return;
  }
}


int main(void) {
  int num = atoi(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(num));
  char *s = readline("Enter a string: ");
  print_n(s, num);
  return 0;
}