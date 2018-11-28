#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    int t,i,length,j;
    char x[100],sheldon[15],raj[15];
    cin>>t;
    for(i=0; i<t; i++){
        scanf(" %[^\n]",x);
        length = strlen(x);
        for(j=0; x[j]!=' '; j++){
            sheldon[j] = x[j];
        }
        for(j = j+1; j<length; j++){
            raj[j] = x[j];
        }
        raj[j+1] = '\0';
        cout<<sheldon<<" "<<raj<<endl;
    }
    return 0;
}
