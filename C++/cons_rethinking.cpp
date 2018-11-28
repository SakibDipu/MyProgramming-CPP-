#include<iostream>
using namespace std;
class myClass{
public:
    myClass();
    ~myClass();
};
myClass::myClass(){
    cout<<"this is constructor..."<<endl;
}
myClass::~myClass(){
    cout<<"this is distractor.."<<endl;
}
int main()
{
    myClass obj;
    return 0;

}
