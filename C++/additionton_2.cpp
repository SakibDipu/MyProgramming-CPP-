#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n to add from 1 to n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\nSum=%d",sum);


}
