#include <iostream>
using namespace std;

void CreatNum(int N){
    cout <<"Enter digits from ONCE , TENS, HUNDRED, ...\n";
    int multiplier = 1;
    int myNum = 0;
    for (int i = 1; i <= N; i++){
        int dig;
        cout << "Enter digit-" << i << ": "; cin >> dig;
        myNum += dig*multiplier;
        multiplier *= 10;
    }
    cout << "The number is: " << myNum;
}

int main(){
    int Size;
    cout << "How many digits do you want?: "; cin >> Size;
    CreatNum(Size);
    return 0;
}

// Mohammad Maasir | 9 September 2023 | 00:46
