#include<iostream>
#include<cmath>
using namespace std;
bool checkPrime(int num1){
  if(num1 <2){ //checks for less than 2
    return false;
   }
  else if(num1==2){ //checks for 2
    return true;
  }
 else{
 for(int i=2;i<=sqrt(num1);i++){ 
   if(num1%i==0)
     return false;
 }
 return true;
}
}

int main(){
 int num1;
 cout<<"Enter an integer: ";
 cin>>num1;
 

 
 if(checkPrime(num1)){
   cout<<num1<<" is a prime number."<<endl;}
 else{
   cout<<num1<<" is not a prime number."<<endl;
   }
 
 return 0;
 }
