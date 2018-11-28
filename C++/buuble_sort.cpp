#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n,i,j,tmp,k;
	cout<<"ENTER THE SIZE OF ARRAY:"<<endl;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=n-1; i>0; i--){
		for(j=0; j<=i; j++){
			if(arr[j]>arr[j+1]){
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
			for(k=0; k<n; k++){
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	for(k=0; k<n; k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}
