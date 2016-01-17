#include <stdio.h>
#include <string.h>

int main ()
{
   int a[2];
   
   a[0] = 5;
   a[1] = 6;
   // Original values
   printf("%d %d\n", a[0], a[1]);
   
   
   // 1        1        1        1
   // 00000001 00000001 00000001 00000001
   // 16843009
   memset(a, 1, sizeof(a));
   printf("%d %d\n", a[0], a[1]);

   // 2        2        2        2
   // 00000010 00000010 00000010 00000010
   // 33686018
   memset(a, 2, sizeof(a));
   printf("%d %d\n", a[0], a[1]);

   // 3        3        3        3
   // 00000011 00000011 00000011 00000011
   // 50529027
   memset(a, 3, sizeof(a));
   printf("%d %d\n", a[0], a[1]);

   // 4        4        4        4
   // 00000100 00000100 00000100 00000100
   // 67372036
   memset(a, 4, sizeof(a));
   printf("%d %d\n", a[0], a[1]);

   return(0);
}
