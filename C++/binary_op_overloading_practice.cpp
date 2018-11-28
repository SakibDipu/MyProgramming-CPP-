#include<iostream>
using namespace std;
class number{
	int x;
	int y;
public:
	void set(){cin>>x; cin>>y;}
	void print(){cout<<x<<" "<<y<<endl;}
	number operator ++ ();
};
number number::operator ++ ()
{
	number tmp;
	tmp.x = ++x;
	tmp.y = ++y;
	return  tmp;
} 
int main()
{
	number obj1,obj2,obj3;
	obj1.set();
	obj2 = ++obj1;
	obj2.print();
	return 0;
}
