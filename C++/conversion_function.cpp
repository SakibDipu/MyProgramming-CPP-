#include<iostream>
using namespace std;
class myclass{
	int x;
	int y;
	public:
		myclass(int a,int b){x = a; y = b;}
		operator int (){return x+y;}
};
int main()
{
	myclass obj(1,2);
	int a = obj;
	cout<<a<<endl;
	return 0;
	
}
