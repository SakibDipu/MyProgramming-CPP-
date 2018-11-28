#include<bits\\stdc++.h>
using namespace std;
long long int fibo(long long int a)
{
	if(a==1 || a==2){
		return 1;
	}else{
		return fibo(a-1)+fibo(a-2);
	}
}

int main()
{
	long long int n,i;
	cout<<"HOW MANY NUMBERS YOU WANT TO SHOW IN FIB SERIES:"<<endl;
	cin>>n;
	for(i=1; i<=n; i++){
		cout<<fibo(i)<<" ";
	}
	cout<<endl;
	return 0;
}
