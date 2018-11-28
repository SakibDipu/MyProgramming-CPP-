#include<stdio.h>
#include<string.h>
//#include<math.h>
int pow(int base,int p);
int main()
{
    int t,i,length,j,amount = 0,power = 0;
    char operation[1000000];
    scanf("%d",&t);
    for(i=0; i<t; i++){
            scanf(" %[^\n]",operation);
            length = strlen(operation);
            power = length - 8;
            if(operation[0] == 'd'){
                for(j=7; j<length; j++){
                    amount = amount + ((operation[j]-48)*pow(10,power));
                    power--;
                }
            }
            if(operation[0] == 'r'){
                printf("%d\n",amount);
            }
            power = 0;
    }
    return 0;
}
int pow(int base,int p)
{
    int i,mul=1;
    for(i=1; i<=p; i++){
        mul = mul*base;
    }
    return mul;
}
