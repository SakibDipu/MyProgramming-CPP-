#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("dipu.txt",ios::app);
	if(!out){
		cout<<"sorry! your file cant be open"<<endl;
	}else{
		out<<"Hi am dipu"<<endl;
		out.close();
		
	}
	return 0;
}
