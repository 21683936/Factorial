/*
 * fact.c
 *
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int x);
void info(void);

int main(int argc, char** argv)
{
  info();

  if (argc > 1) {
    int x = atoi(argv[1]);
    printf("%d! = %d\n", x, factorial(x));
  }
  return 0;
}

void info(){
    printf("階乗計算プログラム バージョン 1.00-a\n");
}
