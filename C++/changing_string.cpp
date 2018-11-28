#include<iostream>
using namespace std;
void change_str(char *x);
int main()
{
    char str[20];
    cin.getline(str,20);
    change_str(str);
    cout<<str<<endl;
    return 0;

}
void change_str(char *x)
{
    x = "sakib jamil";
}
