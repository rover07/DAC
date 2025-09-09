#include<iostream>
using namespace std;

void averageAndProduct(){
    int num=0,count=0;
    long long int product=1, sum=0;
    float average=0;
    char permit;
    while(true){
        cout<<"Enter an integer: ";
        cin>>num;
        sum+=num;
        product*=num;
        count++;
        cout<<"Enter c to continue or q to quit: ";
        cin>>permit;
        if(permit == 'c' || permit =='C')
            continue;
        if(permit == 'q' || permit =='Q')
            break; 
    }
    average=sum/count;
    cout<<"The average of entered numbers is: "<<average<<endl;
    cout<<"The product of given numbers is: "<<product<<endl;
}

int main(){
    averageAndProduct();
    return 0;
}
