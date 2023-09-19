#include <iostream>
#include <vector>
using namespace std;

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
    vector<int> v1(5,10);
    vector<int> v2(5,12);
    vector<int> v3(11,71);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);

    // print:-
    for (int i=0; i<brr.size();i++)
        {
            for (int j=0;j<brr[i].size(); j++)
                {
                    cout << brr[i][j] << " ";
                }
            cout << endl;
        }
    return 0;
}