

#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("total is %d",sum);
    return 0;
}
