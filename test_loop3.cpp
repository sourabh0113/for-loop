#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number"<<endl;
cin>>n;

cout<<"check the number which is divisible by 5"<<endl;

for(int i=1;i<=n;i++)
{
    if(i%5 ==0){
        cout<<i<<endl;
    }
}

    return 0;
}