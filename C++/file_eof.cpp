#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in("dipu.txt");
	while(!in.eof()){
		char str[50];
		in.getline(str,50);
		cout<<str<<endl;
	}
	return 0;
	
	
	
}
