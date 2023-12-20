#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<vector<int>> vec){
    for (int i = 0; i < vec.size(); i++){
        for (int j= 0; j < vec[i].size(); j++){
            cout << vec[i][j] << " ";
        }

        cout << endl;
    }
}

int main(){
    vector<vector<int>> arr = {
        {1,5,6},
        {6,1},
        {8,9,0,30},
        {1}
    };

    cout << arr.size() << endl; // no. of rows

    cout << arr[1].size() << endl; // no. of columns in each row.
    
    // Detailed initilization of 2d array:-
    
    vector<vector<int>> brr(5,vector<int>(6,100)); //2D vector with rows:5, and columns:6. initial/default value of each element = 100.
    
    // [kind of] filling values
    vector<int> v1(5,10); // a vector of 5 integers, each of them is 10 
    vector<int> v2(5,12); // a vector of 5 integers, each of them is 12
    vector<int> v3(11,71); // a vector of 11 integers, each of them is 71

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);

    // an array which contains variable number of columns in each rows, is called
    // Jacked Array
    
    printVector(brr);
    return 0;
}
