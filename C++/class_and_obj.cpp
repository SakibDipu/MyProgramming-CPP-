#include<iostream>
using namespace std;
class myClass{
    char name[20];
public:
    void get_name();
    void print_name();
};
void myClass::get_name()
{
    cin>>name;
}
void myClass::print_name()
{
    cout<<name<<endl;
}
int main()
{
    myClass obj;
    obj.get_name();
    obj.print_name();
    return 0;

}
