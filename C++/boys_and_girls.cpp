#include<iostream>
using namespace std;
int main()
{
	int i,n,m,couple;
	cin>>n>>m;
	if(m>n){
		couple = n*2;
	}else if(n>m){
		couple = m*2;
	}else if(n == m){
		couple = n*2;
	}
	for(i=1; i<=n+m; i++){
		if(i<=couple && i%2!=0){
			cout<<"B";
		}else if(i<=couple && i%2 == 0){
			cout<<"G";
		}else if(n>m){
			cout<<"B";
		}else if(m>n){
			cout<<"G";
		}
	}
	cout<<endl;
	return 0;
	
	
}
