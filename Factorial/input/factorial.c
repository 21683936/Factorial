/*
 * factorial.c
 *
 */

/*  */

static int factorialOf(int x);

int factorial(int n)
{
  return factorialOf(n);
}

static int factorialOf(int x)
{
  int result;

  if (x <= 1) {
    result = 1;
  } else {
    result = x * factorialOf(x-1);
  }

  /*  */

  return result;
}



