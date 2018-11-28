#include<iostream>
using namespace std;
void excep()
{
    try{
        throw 1;
    }
    catch(int a){
        cout<<"function"<<endl;
        throw;
    }
}
int main()
{
    try{
        excep();
    }
    catch(int e){
        cout<<"main"<<endl;
    }
    return 0;
}
