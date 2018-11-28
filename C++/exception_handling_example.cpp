#include<iostream>
using namespace std;
void divide(double x,double y)
{
    if(y == 0){
        throw 0;
    }else{
        cout<<"result:"<<" "<<x/y<<endl;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    try{
        divide(a,b);
    }
    catch(int e){
        cout<<"cant divide"<<endl;
    }
    return 0;

}
