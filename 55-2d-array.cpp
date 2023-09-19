#include <iostream>
using namespace std;

// for searching in 2d:

bool isPresent(int x, int arr[][4], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            
            if (x == arr[i][j]) return true;
        }
    }

    return false;
}

int findMax(int arr[][4], int row, int col) {
    int mxNum = arr[1][1];
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] > mxNum) mxNum = arr[i][j]; 
        }
    }
    return mxNum;
}

int findMin(int arr[][4], int row, int col) {
    int miNum = arr[1][1];
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] < miNum) miNum = arr[i][j]; 
        }
    }
    return miNum;
}

void rowWiseSum(int arr[][4], int row, int col){
    for (int i=0;i<row;i++){
        int sum = 0;
        
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout << "Sum of row-" << i << " is: " << sum << endl;
    }
    return;
}

void columnWiseSum(int arr[][4], int row, int col){
    for (int i=0;i<col;i++){
        int sum = 0;
        
        for(int j=0;j<row;j++){
            sum += arr[j][i];
        }
        cout << "Sum of column-" << i << " is: " << sum << endl;
    }
    return;
}

int Transpose(int arr[][4], int row, int col){
    for(int i=0; i<row;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }   
    }

    for (int i = 0; i < 3; i++) {for (int j = 0; j < 4; j++) cout << arr[i][j]<< " "; cout << endl;}
}


int main(){
    // atleast number of columns shoud be specified.
    // specifying number of rows is optional
    // when passing a 2d array to a function, alse pass column count.
    int arr[3][4] = {
        {10,20,30,40},
        {100,200,300,400},
        {3,6,9,12}
    };
    for (int i = 0; i < 3; i++) {for (int j = 0; j < 4; j++) cout << arr[i][j]<< " "; cout << endl;}
    
    int z;
    
    cout << "enter element to find: "; cin >> z;
    
    isPresent(z, arr,3, 4) ? cout << "Found." : cout << "Not found.";
    
    cout << endl;
    
    cout << "Max number present: " << findMax(arr,3,4) << endl;
    
    cout << "Min number present: " << findMin(arr,3,4) << endl;

    cout << "Row-wise sum: \n";

    rowWiseSum(arr, 3, 4);

    cout << "Column-wise sum: \n";

    columnWiseSum(arr, 3, 4);

    int brr[][4] = {{15,30,45},{20,40,60},{25,50,75}};
    Transpose(brr,3,4);
    return 0;
}
