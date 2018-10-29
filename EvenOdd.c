#include <stdio.h>
int eval(int n)
{
  return (n%2==0);
}

int main(void)
{
  int n;
  scanf("%d", &n);
  
  if(eval(n)) printf("%d is even\n", n);
  else printf("%d is odd\n", n);
  
  return 0;
}
