#include <stdio.h>
union Number {
   int i;
   float f;
};
int main() 
{
   union Number num[3];
   num[0].i = 10;
   num[1].i = 20;
   num[2].i= 30;
   printf("Integer values: \n");
   printf("%d\n", num[0].i);
   printf("%d\n", num[1].i);
   printf("%d\n", num[2].i);
   num[1].f = 15.5f;
   printf("\nAfter overwriting second element:\n");
   printf("Second element (float): %.2f\n", num[1].f);
   return 0;
}