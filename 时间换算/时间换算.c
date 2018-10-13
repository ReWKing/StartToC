#include <stdio.h>

int main()
{
  int bjt, utc;
  int bjt_h, bjt_m, utc_h;
  scanf("%d", &bjt);

  bjt_h = bjt / 100;
  bjt_m = bjt % 100;
  if (bjt_h <= 7)
    utc_h = bjt_h +16;
  else
    utc_h = bjt_h - 8;
  utc = utc_h * 100 + bjt_m;
  printf("%d", utc);
  return 0;

}
