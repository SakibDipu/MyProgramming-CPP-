#include<iostream>
using namespace std;
int main()
{
    int p,n,pipe1,pipe2,i,counter = 0;
    cin>>p>>n;
    cin>>pipe1;
    for(i=1; i<n; i++){
        cin>>pipe2;
        if(pipe2 - pipe1>p || pipe1-pipe2>p){
            counter++;
        }
        pipe1 = pipe2;
    }
    if(counter>0){
        cout<<"GAME OVER"<<endl;
    }else{
        cout<<"YOU WIN"<<endl;
    }
    return 0;

}
