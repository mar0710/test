#include <stdio.h>
int main()
    {
      int a, b;
      int pom;
      printf("Podaj a=");
      scanf("%d",&a);
      printf("Podaj b=");
      scanf("%d",&b);
      pom=a;
      a=b;
      b=pom;
      printf("a=%d",a);
      printf("\nb=%d\n",b);
        return 0;
}
