#include<iostream>
using namespace std;
void excep(int a) throw(int)
{
    if(a == 1){
        throw 1;
    }
    if(a == 2){
        throw 1.2;
    }
}
int main()
{
    try{
        excep(2);
    }
    catch(...){
        cout<<"exception"<<endl;
    }
    return 0;
}
