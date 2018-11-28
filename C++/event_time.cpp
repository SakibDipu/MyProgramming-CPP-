#include<iostream>
using namespace std;
int main()
{
    int v,t,s;
    cin>>v>>t;
    while(!cin.eof()){
        s = 2*t*v;
        cout<<s<<endl;
        cin>>v>>t;
    }
    return 0;

}
