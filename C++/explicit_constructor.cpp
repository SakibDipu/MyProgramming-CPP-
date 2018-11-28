#include<iostream>
using namespace std;
class myclass{
	int a;
	public:
	explicit myclass(int x){a = x; cout<<a<<endl;} //THIS IS A EXPLICIT CONSTRUCTOR
};
int main()
{
	myclass obj(4);
	return 0;
}
