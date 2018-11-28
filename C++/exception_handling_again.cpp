#include<iostream>
using namespace std;
int main()
{
	int a;
	try{
		cin>>a;
		if(a == 1){
			throw 1;
		}else{
			throw 1.5;
		}
	}
	catch(int a){
		cout<<a<<endl;
	}
	catch(double b){
		cout<<b<<endl;
	}
	return 0;
}
