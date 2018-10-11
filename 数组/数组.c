#include <stdio.h>

//统计各个数字、空白符及其他字符出现的次数
main()
{
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for(i = 0; i< 10; i ++)
    printf("%d %d %d\n", i, power(2, i), power(-3, i) );
  return 0;
}
//power函数：求底数的n次幂；其中n >= 0
int power(int base, int n)
{
  int i, p;

  p = 1;
  for (i = 1; i <= n; ++i)
   p = p * base;
return 0;
}
