// functions generally call variables by their values. 
// this creates a new location in memory, and every change done to the variable
// does not affect the original variable.

// but by using call by reference, we can access the original variable and change its value.

#include <iostream>
using namespace std;

void callByValue(int n){
    n += 1;
}

void callByRefrence(int &n){
    n += 1;
}

int main(){
    int a = 5;
    int b = 5;
    callByValue(a);
    callByRefrence(b);
    cout << a << endl; // this will remain same.
    cout << b << endl; // this will be changed.
    return 0;
}
