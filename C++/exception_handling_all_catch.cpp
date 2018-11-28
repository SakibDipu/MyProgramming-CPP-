#include<iostream>
using namespace std;
int main()
{
    try{
        int a;
        cin>>a;
        if(a==1){
            throw 1;
        }
        if(a==2){
            throw 1.3;
        }
        if(a==3){
            throw "dipu";
        }
    }
    catch(int b){
        cout<<"int exception"<<endl;
    }
    catch(...){
        cout<<"Exception"<<endl;
    }

    return 0;

}
