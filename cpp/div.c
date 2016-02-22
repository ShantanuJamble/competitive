#include <stdio.h>      /* printf */
#include <stdlib.h>     /* div, div_t */

int main ()
{
  div_t divresult;
  long long a,b;
  scanf("%lld%lld",&a,&b);
  printf("%lld",a/b);
  divresult = div (a,b);
  printf ("38 div 5 => %d, remainder %d.\n", divresult.quot, divresult.rem);
  return 0;
}
