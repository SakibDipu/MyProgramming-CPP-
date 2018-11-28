#include<iostream>
using namespace std;
class base{

};
class derive : public base{

};
int main()
{
    base b;
    derive d;
    try{
        throw d;
    }
    catch(derive y){
        cout<<"derive exception"<<endl;
    }
    catch(base x){
        cout<<"base exception"<<endl;
    }



    return 0;
}
