#include <stdio.h>
main()
{
  int num;
  int i = 0;

  scanf("%d", &num);
    do {
      printf("%d", 2*i + 1);
      if (2*(i+1) < num)
        printf(" ");
      i += 1;
    }while(2*i+1 <= num);
}
