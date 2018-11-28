#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in("file.txt");
    if(!in){
        cout<<"cant read file"<<endl;
    }else{
        char str[30];
        in>>str;
        cout<<str<<endl;
        in.close();
    }
    return 0;

}
