#include<iostream>
using namespace std;
class myinfo{
    int *p;
public:
    myinfo(){p = new int(4);}
    //myinfo(myinfo &ob);
    void set_val(int x){*p = x;}
    void print(){cout<<*p<<endl;}
};
/*myinfo::myinfo(myinfo &ob)
{
    p = new int(1);
}*/
int main()
{
    myinfo obj;
    obj.print();
    myinfo obj1 = obj;
    obj.print();
    obj1.print();
    obj1.set_val(15);
    obj.print();
    obj1.print();
    return 0;
}
