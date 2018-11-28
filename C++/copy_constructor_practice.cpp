#include<iostream>
using namespace std;
class abc{
    int *p;
public:
    abc(){ p = new int (0); cout<<"cons..."<<*p<<endl;}
    ~abc(){cout<<"dis..."<<*p<<endl; delete p;}
    void set(int x){*p = x;}
    void print(){cout<<*p<<endl;}
    /*abc(abc &ob){
        p = new int(4);
    }*/
};
int main()
{
    abc a;
    abc b = a;
    a.print();
    b.print();
    a.set(1);
    a.print();
    b.print();
    return 0;
}
