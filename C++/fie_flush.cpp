#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out;
	ifstream in;
	out.open("hudai.txt");
	in.open("hudai.txt");
	out<<"hello"<<endl;
	char str[100];
	in.getline(str,100);
	cout<<str<<endl;
	out.close();
	in.close();
	return 0;
}
