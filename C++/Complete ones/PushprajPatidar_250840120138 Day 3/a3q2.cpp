/* 
2.Write a program using  1D array of integers.
write a function to accept data in 1D array, and display data from array

display following menu, write separate function for each option
1. find maximum
2. find minimum
3. find addition of all numbers
4. search a number
5. find all numbers divisible by given number
   ---- if user enters 7 then find all numbers from array which are divisible by 7
6. find average of all numbers which are divisible by 6

*/

#include<bits/stdc++.h>

using namespace std;

void getArr(int *arr, int &length){
	cout<<"Enter length of the array: ";
	cin>>length;
	
	for(int i=0; i<length; i++){
		cout<<"Enter at index: "<<i<<" ";
		cin>>arr[i];
	}
}

void printArr(int *arr, int length){

	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}	
	cout<<	endl;
}

int maxArr(int *arr, int length){
	int max=INT_MIN;
	for(int i=0; i<length; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int minArr(int *arr, int length){
	int min=INT_MAX;
	for(int i=0; i<length; i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}

int sumOfArr(int *arr, int length){
	int sum = 0; 
	
	for(int i=0; i<length; i++){
		sum+=arr[i];
	}	
	return sum;
}

int searchArr(int *arr, int length, int target){
	for(int i=0; i<length; i++){
		if(target == arr[i])
			return i;
	}	
	return -1;
}

void divInArr(int *arr, int length, int divisor){
	bool count=1;
	for(int i=0; i<length; i++){
		if(arr[i]%divisor==0) {
			count=0;	
			cout<<"Number: "<<arr[i]<<" at index "<<i<<" is divisible by "<<divisor<<endl;
		}
	}
	if(count){
	 cout<<"None of the numbers are divisible by "<<divisor<<endl;
	}
}


void avgOfDivArr(int *arr, int length, int divisor){
	float avg=0;
	int count=0;
	for(int i=0; i<length; i++){
		if(arr[i]%divisor==0) {
			avg+=arr[i];
			count++;		
		}
	}
	if(count==0){
		cout<<"No number is divisle by the given number"<<endl;
	}
	else{
		cout<<"The average of numbers divisible by the given number is: "<<(avg/=count)<<endl;
	}
	
}



int main(){
	int length;
	int arr[length];
	int choice;
	int divisor;
	//int length=sizeof(arr)/sizeof(int);
	
	getArr(arr, length);
	printArr(arr, length);
	
	cout<<"Enter Choice ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<maxArr(arr, length)<<endl;
			break;
		case 2:
			cout<<minArr(arr, length)<<endl;
			break;
		case 3:
			cout<<sumOfArr(arr, length)<<endl;
			break;
		case 4:
			int target;
			cout<<"Enter number to search ";
			cin>>target;
			cout<<searchArr(arr, length, target)<<endl;
			break;
		case 5:
			//int divisor;
			cout<<"Enter divisor ";
			cin>>divisor;
			divInArr(arr, length, divisor);
			break;
		case 6:
			//int divisor;
			cout<<"Enter divisor ";
			cin>>divisor;
			avgOfDivArr(arr, length, divisor);
			break;				
		default: 
			cout<<"Wrong choice entered!!!";
			break;
	}	
	return 0;
}
