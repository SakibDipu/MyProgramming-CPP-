#include<iostream>
using namespace std;
int main()
{
	unsigned long long int n,kuti,lakh,hajar,shata,others,counter = 0,c = 0;
	cin>>n;
	while(!cin.eof()){
		cout<<c+1<<". ";
		if(n == 0){
			cout<<0;
		}
		if(n>=100000000000000){
			kuti = n / 100000000000000;
			n = n % 100000000000000;
			cout<<kuti<<" kuti";
			counter++;
		}
		if(n<100000000000000 && n>=1000000000000){
			lakh = n / 1000000000000;
			n = n % 1000000000000;
			if(counter>0){
				cout<<" "<<lakh<<" lakh";
				counter++;
			}else{
				cout<<lakh<<" lakh";
				counter++;
			}
		}
		if(n<1000000000000 && n>=10000000000){
			hajar = n / 10000000000;
			n = n % 10000000000;
			if(counter>0){
				cout<<" "<<hajar<<" hajar";
				counter++;
			}else{
				cout<<hajar<<" hajar";
				counter++;
			}
		}
		if(n<10000000000 && n>=1000000000){
			shata = n / 1000000000;
			n = n % 1000000000;
			if(counter>0){
				cout<<" "<<shata<<" shata";
				counter++;
			}else{
				cout<<shata<<" shata";
				counter++;
			}
		}
		if(n<1000000000 && n>=10000000){
			kuti = n / 10000000;
			n = n % 10000000;
			if(counter>0){
				cout<<" "<<kuti<<" kuti";
				counter++;
			}else{
				cout<<kuti<<" kuti";
				counter++;
			}
		}
		if(n<10000000 && n>=100000){
			lakh = n / 100000;
			n = n % 100000;
			if(counter>0){
				cout<<" "<<lakh<<" lakh";
				counter++;
			}else{
				cout<<lakh<<" lakh";
				counter++;
			}
		}
		if(n<100000 && n>=1000){
			hajar = n / 1000;
			n = n % 1000;
			if(counter>0){
				cout<<" "<<hajar<<" hajar";
				counter++;
			}else{
				cout<<hajar<<" hajar";
				counter++;
			}
		}
		if(n<1000 && n>=100){
			shata = n / 100;
			n = n % 100;
			if(counter>0){
				cout<<" "<<shata<<" shata";
				counter++;
			}else{
				cout<<shata<<" shata";
				counter++;
			}
		}
		if(n<100 && n>0){
			others = n;
			if(counter == 0){
				cout<<others;
			}else{
				cout<<" "<<others;
			}
		}
		cout<<endl;
		counter = 0;
		c++;
		cin>>n;		
	}
	return 0;
}
