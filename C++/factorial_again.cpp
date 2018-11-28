#include<bits\\stdc++.h>
using namespace std;
long long int fact(long long int n)
{
	if(n == 0){
		return 1;
	}else{
		return (n*fact(n-1));
	}
}
int main()
{
	long long int n;
	cout<<"ENTER THE VALUE YOU WANT TO GET FACTORIAL OF:"<<endl;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}

