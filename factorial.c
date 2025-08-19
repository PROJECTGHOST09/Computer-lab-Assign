#include <stdio.h>
int main()
{
    printf("To find the factorial of a number \n");
    printf("Enter the number factorial of a : ");
    int n,i;
    int s=1;
    scanf("%d ",&n);
    for(i=1;i<=n;++i){
        s*=i;

    }
    printf("The factorial is : %d",s);
    return 0;
}
