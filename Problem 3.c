#include <stdio.h>
int main()
{
   printf( "Enter two number  \n");
    int a,b;
    scanf("%d%d",&a,&b);
     if (a<b)
     {
      printf(" First number is smaller %d",a);

     }
     else
     {
      printf("Second number is smaller %d",b);
     }
     return 0;
}
