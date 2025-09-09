#include<iostream>
using namespace std;

void countNotes(int amnt){
    if(amnt<0)
    cout<<"No notes required as there's no actual money.";
    else{
        cout<<"Number of notes required of Rs.2000: "<<amnt/2000<<endl;
        amnt%=2000;
        cout<<"Number of notes required of Rs.500: "<<amnt/500<<endl;
        amnt%=500;
        cout<<"Number of notes required of Rs.200: "<<amnt/200<<endl;
        amnt%=200;
        cout<<"Number of notes required of Rs.100: "<<amnt/100<<endl;
        amnt%=100;
        cout<<"Number of notes required of Rs.50: "<<amnt/50<<endl;
        amnt%=50;
        cout<<"Number of notes required of Rs.20: "<<amnt/20<<endl;
        amnt%=20;
        cout<<"Number of notes  required of Rs.10: "<<amnt/10<<endl;
        amnt%=10;
        cout<<"Number of coins required of Rs.5: "<<amnt/5<<endl;
        amnt%=5;
        cout<<"Number of coins required of Rs.2: "<<amnt/2<<endl;
        amnt%=2;
        cout<<"Number of coins required of Rs.1: "<<amnt/1<<endl;
        amnt%=1;
    }
}

int main(){
    int amount;
    cout<<"Enter some amount: ";
    cin>>amount;
    countNotes(amount);
    return 0;
}
