#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i,j,gets,downs,stays,big,sum;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        cin>>gets>>downs;
        sum = gets + downs;
        big = sum;
        for(j=1; j<n-1; j++){
            cin>>gets>>downs;
            sum = sum - downs + gets;
            if(sum>big){
                big = sum;
            }
        }
        cout<<"Case "<<i+1<<": "<<big<<endl;

    }
    return 0;

}
