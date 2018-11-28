#include<iostream>
using namespace std;
int main()
{
	long long int i,n,a,b,c,d,counter = 0;
	cin>>n;
	for(i=0; i<4; i++){
		cin>>a>>b>>c>>d;
		if(a==c && b==d && ((a+c<=n) || (a+d<=n) || (b+c<=n) || (b+d<=n))){
			if(a == c && a+c == n){
				cout<<i+1<<" "<<a<<" "<<c<<endl;
			}else if(b == d && b+d == n){
				cout<<i+1<<" "<<b<<" "<<d<<endl;
			}else if(a+d == n){
				cout<<i+1<<" "<<a<<" "<<d<<endl;
			}else if(b+c == n){
				cout<<i+1<<" "<<b<<" "<<c<<endl;
			}else{
				cout<<i+1<<" "<<a<<" "<<n-a<<endl;
			}
			counter++;
			break;
		}
	}
	if(counter == 0){
		cout<<-1<<endl;
	}
	return 0;
	 
}
