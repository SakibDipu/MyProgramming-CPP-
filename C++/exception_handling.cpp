#include<iostream>
using namespace std;
void positive(int a)
{
    cout<<a<<endl;
    try{
        if(a<1){
            throw a;
        }
    }catch(int e){
        cout<<"exception: "<<e<<endl;
    }
}
int main()
{
    positive(4);
    positive(-3);
    positive(8);
    return 0;
}
