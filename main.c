#include <stdio.h>
#include <readline/readline.h>

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
    printf("s");
    print_n(const char *s, int n);
  }
}


int main(void) {
  char *num = readline("Enter an int: ");
  int n = atoi(num);
  printf("sum is %s.\n", sum_n(n));
  char *s = readline("Enter a string: ");
  printf("%s\n", rint_n(s,n));
  return 0;
}