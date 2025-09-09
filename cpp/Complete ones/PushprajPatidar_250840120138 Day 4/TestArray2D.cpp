/* 1. Write a class Aarray2D to store all functions related to 2D array.
refer the demo for 2D array
make all functions within the class static
Store the class in file Array2D.cpp, write another file TestArray2D.cpp
store main function in this file. 


Write a menu driven program to do the following, 
result of every function should be displayed in main
1. add 2 matrices 
2. transpose of matric
3. multiplication of 2 matrices
4. find sum of all values
5. find maximum number
6. find minimum number
7. find rowwise minimum
8. find rowwise maximum
9. find rowwise sum
10. find columnwise maximum
11. find columnwise minimum
12. find columnwise sum
*/

		/*	for(int i=0; i<rows; i++){
				for(int j=0; j<rows; j++){
					
				}	
			}
		*/

#include<iostream>
#include "Array2D.cpp"
using namespace std;

int main(){
	int arr1[][cols]={{1,2,3},
				      {4,5,6},
				      {7,8,9}};
				  
	int arr2[][cols]={{2,4,6},
				      {8,10,12},
				      {14,16,18}};
	int result[rows][cols];
	int arr3[rows]; //use for rowwise and colwise
	
	int choice;
	
	
	
do {
        cout << "Menu:" << endl;
        cout << "1. Add 2 matrices" << endl;
        cout << "2. Transpose of a matrix" << endl;
        cout << "3. Multiplication of 2 matrices" << endl;
        cout << "4. Find sum of all values" << endl;
        cout << "5. Find maximum number" << endl;
        cout << "6. Find minimum number" << endl;
        cout << "7. Find rowwise minimum" << endl;
        cout << "8. Find rowwise maximum" << endl;
        cout << "9. Find rowwise sum" << endl;
        cout << "10. Find columnwise minimum" << endl;
        cout << "11. Find columnwise maximum" << endl;
        cout << "12. Find columnwise sum" << endl;
        cout << "13. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Array2D::addMatrices(arr1, arr2, result);
                cout << "Adding Done!" << endl;
                Array2D::display(result);
                break;
            case 2:
                Array2D::trans2Darr(arr1, result);
                cout << "Transpose Done!" << endl;
                Array2D::display(result);
                break;
            case 3:
                Array2D::mulMatrices(arr1, arr2, result);
                cout << "Multiplication Done!" << endl;
                Array2D::display(result);
                break;
            case 4:
                cout << "Sum of all values: " << Array2D::sumMat(arr1) << endl;
                break;
            case 5:
                cout << "Max: " << Array2D::maxOfMatrix(arr1) << endl;
                break;
            case 6:
                cout << "Min: " << Array2D::minOfMatrix(arr1) << endl;
                break;
            case 7:
                cout << "Rowwise min: " << endl;
                Array2D::rowwiseMin(arr1, arr3);
                Array2D::display(arr3);
                break;
            case 8:
                cout << "Rowwise max: " << endl;
                Array2D::rowwiseMax(arr1, arr3);
                Array2D::display(arr3);
                break;
            case 9:
                cout << "Rowwise sum: " << endl;
                Array2D::rowwiseSum(arr1, arr3);
                Array2D::display(arr3);
                break;
            case 10:
                cout << "Colwise min: " << endl;
                Array2D::colwiseMin(arr1, arr3);
                Array2D::display(arr3);
                break;
            case 11:
                cout << "Colwise max: " << endl;
                Array2D::colwiseMax(arr1, arr3);
                Array2D::display(arr3);
                break;
            case 12:
                cout << "Colwise sum: " << endl;
                Array2D::colwiseSum(arr1, arr3);
                Array2D::display(arr3);
                break;
            case 13:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 13);
	
	
	return 0;

}
