
#include<iostream>
#include<climits>
using namespace std;

const	int rows=3;
const	int cols= 3;
	

class Array2D {
	public:
		static void addMatrices(int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]){
			for(int i=0; i<rows; i++){
				for(int j=0; j<cols; j++){
					result[i][j] = arr1[i][j] + arr2[i][j];
				}	
			}
		}
		
		// Display for 2d
		static void display(int arr1[rows][cols]){
			for(int i=0; i<rows; i++){
					for(int j=0; j<cols; j++){
						cout<<arr1[i][j]<<" ";
					}	
					cout<<endl;
			}
		}
		
		// display for 1D array
		static void display(int arr3[rows]){
			for(int i=0; i<rows; i++){
				cout<<" "<<arr3[i];	
			}
					cout<<endl;
		}
		
		// // Transpose
		static void trans2Darr(int arr1[rows][cols], int result[rows][cols]){
		    //int temp;
			// approach 1: Swapping
			//for(int i=0; i<rows; i++){
				//for(int j=i; j<cols; j++){
				/*	if(i!=j){
					arr1[j][i]+=arr1[i][j];
					arr1[i][j]=arr1[j][i]-arr1[i][j];
					arr1[j][i]-=arr1[i][j];
				*/
			// approach 2: Using XOR
			for(int i=0; i<rows; i++){
				for(int j=0; j<cols; j++){
					result[i][j] = arr1[j][i];				
				}	
			}
		}
		
		
		
		// multiplication of 2 matrices
			
			static void mulMatrices(int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]){
			for(int i=0; i<rows; i++){
				for(int j=0; j<cols; j++){
					for(int k=0;k<rows;k++){
						result[i][j] += arr1[i][k] * arr2[k][j];
					}
				}	
			}
		}
			
		// find sum of all values
		static int sumMat(int arr1[rows][cols]){
			int sum=0;
			for(int i=0; i<rows; i++){
				for(int j=0; j<cols; j++){
					sum+= arr1[i][j];				
				}	
			}
			return sum;
		}
		
		//Maximum
		static int maxOfMatrix(int arr1[rows][cols]){
			int max=INT_MIN;
			for(int i=0; i<rows; i++){
				for(int j=0; j<cols; j++){
					if(arr1[i][j]>max)
						max=arr1[i][j];
				}	
			}
			return max;
		}
		
		//Minimum
		static int minOfMatrix(int arr1[rows][cols]){
			int min=INT_MAX;
			for(int i=0; i<rows; i++){
				for(int j=0; j<cols; j++){
					if(arr1[i][j]<min)
						min=arr1[i][j];
				}	
			}
			return min;
		}
	
		// rowwise minimum
		static void rowwiseMin(int arr1[rows][cols], int arr3[rows]){
			for(int i=0; i<rows; i++){
				int min=INT_MAX;
				for(int j=0; j<cols; j++){
					if(arr1[i][j]<min){
						min=arr1[i][j];
					}
					arr3[i]=min;
				}
			}
		}
		
		// rowwise max
		static void rowwiseMax(int arr1[rows][cols], int arr3[rows]){
			for(int i=0; i<rows; i++){
				//int max=INT_MIN;
				arr3[i]=arr1[i][0];
				for(int j=1; j<cols; j++){
					if(arr1[i][j]>arr3[i]){
						//max=arr1[i][j];
						arr3[i]=arr1[i][j];
					}
					//arr3[i]=max;
					
				}
			}
		}
		
		//Rowwise sum
		static void rowwiseSum(int arr1[rows][cols], int arr3[rows]){
			for(int i=0; i<rows; i++){
				arr3[i]=arr1[i][0];
				for(int j=1; j<cols; j++){
					arr3[i]+=arr1[i][j];
				}
			}
		}
		
		
		
		// columnwise maximum
		static void colwiseMax(int arr1[rows][cols], int arr3[rows]){
			for(int i=0; i<rows; i++){
				arr3[i]=arr1[0][i];
				for(int j=1; j<cols; j++){
					if(arr1[j][i]>arr3[i])
						arr3[i]=arr1[j][i];
				}
			}
		}
		
		// colwise min 
		static void colwiseMin(int arr1[rows][cols], int arr3[rows]){
			for(int i=0; i<rows; i++){
				arr3[i]=arr1[0][i];
				for(int j=1; j<cols; j++){
					if(arr1[j][i]<arr3[i])
						arr3[i]=arr1[j][i];
				}
			}
		}


		//columnwise sum
		static void colwiseSum(int arr1[rows][cols], int arr3[rows]){
			for(int i=0; i<rows; i++){
				arr3[i]=arr1[0][i];
				for(int j=1; j<cols; j++){
					arr3[i]+=arr1[j][i];
				}
			}
		}
};

