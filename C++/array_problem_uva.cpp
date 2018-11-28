#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n,array[100000],counter = 0,k,v,exist = 0;
	cin>>n>>m;
	while(!cin.eof()){
		for(i=0; i<n; i++){
			cin>>array[i];
		}
		for(i=0; i<m; i++){
			cin>>k>>v;
			for(j=0; j<n; j++){
				if(array[j] == v){
					counter++;
					//cout<<"counter is increasing"<<endl;
				}
				if(counter == k){
					exist++;
					break;
				}
			}
			if(exist == 1){
				cout<<j+1<<endl;
			}else{
				cout<<0<<endl;
			}
			counter = 0;
			exist = 0;
		}
		cin>>n>>m;
	}
	return 0;
}
