#include<iostream>
using namespace std;

void table(int n){
        cout<<"Table of "<<n<<endl;
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<i*n<<endl;
        
    }
}

int main(){
int num1;
 cout<<"Enter A Number"<<endl;
 cin>>num1;
 
 table(num1);
return 0;
}
