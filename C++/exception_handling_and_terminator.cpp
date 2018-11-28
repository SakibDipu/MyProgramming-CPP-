#include<iostream>
using namespace std;
void excep() throw(double)
{
    throw 1;
}
void T()
{
    cout<<"program terminated"<<endl;
}
void U()
{
    cout<<"unexcepted"<<endl;
}
int main()
{
    set_terminate(T);
    set_unexpected(U);
    try{
        excep();
    }
    catch(double e){
        cout<<e<<endl;
    }
    return 0;


}
