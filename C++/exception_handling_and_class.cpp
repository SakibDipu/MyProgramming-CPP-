#include<iostream>
using namespace std;
class exep{
    int id;
    string name;
public:
    exep(int i,string s){id = i; name = s;}
    void print(){cout<<"Error id: "<<id<<" "<<"Error type: "<<name<<endl;}

};
void positive(int a)
{
    try{
        if(a<1){
            throw exep(a,"not a positive number");
        }
    }
    catch(exep e){
        e.print();
    }
}
int main()
{
    positive(4);
    positive(-6);
    positive(7);
    return 0;

}
