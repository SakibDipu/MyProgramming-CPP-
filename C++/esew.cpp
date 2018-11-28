#include<iostream>
using namespace std;
int main()
{
	string name[20];
	int i;
	for(i=0; i<3; i++){
		getline(cin,name[i]);
	}
	for(i=0; i<3; i++){
		cout<<name[i]<<endl;
	}
	return 0;
}
