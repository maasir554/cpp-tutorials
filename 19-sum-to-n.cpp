#include <iostream>
using namespace std;
 
int sumToN(int N){
    int sum = 0;
    for (int i = 1; i <= N; i++){
        sum += i;
    }
    return sum;
}
 
int main(){
    int num;
    cout << "Enter the number, to which we have to sum:  ";cin >> num;
    cout << "The sum from 1 to "<<num << " is: " << sumToN(num);
    return 0;
}

// Mohammad Maasir | 07 September 2023, 21:44:47
