#include<iostream>
using namespace std;
int main()
{
	int arr[100],tmp,i,j,n,k;
	cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(arr[j]<arr[i]){
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	for(k=0; k<n; k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}
