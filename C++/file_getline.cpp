#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("dipu.txt");
	if(!out){
		cout<<"sorry! cant open file"<<endl;
	}else{
		out<<"hello everybody...have a sound sleep"<<endl;	
	}
	ifstream in("dipu.txt");
	if(!in){
		cout<<"sorry! cant open file"<<endl;
	}else{
		char str[30];
		in.getline(str,230);
		cout<<str<<endl;
	}
	return 0;
	
	
	
}
