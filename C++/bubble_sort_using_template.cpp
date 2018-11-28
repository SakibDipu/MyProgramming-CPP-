#include<iostream>
using namespace std;
template<class T>
void bubble_sort(T a[],int n)
{
	int i,j;
	T tmp;
	for(i=0; i<n-1; i++){
		for(j=i; j<n; j++){
			if(a[j]<a[i]){
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
int main()
{
	int i,n;
	float arr[1000];
	cout<<"ENTER THE SIZE OF ARRAY:"<<endl;
	cin>>n;
	cout<<"ENTER THE NUMBERS:"<<endl;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"HERE WE GO......."<<endl;
	bubble_sort(arr,n);
	return 0;
}
