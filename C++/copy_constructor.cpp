#include<iostream>
using namespace std;
class myClass{
    int *p;
public:
    myClass();
    ~myClass();
    void set(int);
    void print();
    myClass(myClass &ob);
};
myClass::myClass()
{
    p = new int(0);
    cout<<"This is constructor.."<<endl;

}
myClass::~myClass()
{
    cout<<*p<<endl;
    cout<<"This is distructor..."<<endl;
    delete p;
}
void myClass::set(int x)
{
    *p = x;
}
void myClass::print()
{
    cout<<*p<<endl;
}
myClass::myClass(myClass &ob)
{
    p = new int(1);
    cout<<*p<<endl;
}
int main()
{
    myClass obj1;
    obj1.print();
    myClass obj2 = obj1;
    obj1.print();
    obj2.print();
    obj2.set(4);
    obj1.print();
    obj2.print();
    return 0;

}
