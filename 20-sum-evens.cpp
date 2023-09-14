#include <iostream>
using namespace std;

int EvenSummer(int N){
    int esval = 0;
    for (int i = 2; i<= N; i += 2){
    esval += i;
    }
    return esval;
}

int main(){
    int num;
    cout << "Enter the number, to which we have to sum: ";cin >> num;
    cout << "The sum of all even numbers till N is: " << EvenSummer(num);
    return 0;
}

// Mohammad Maasir | 07 September 2023, 23:50:33
