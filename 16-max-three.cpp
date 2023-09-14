#include <iostream>
using namespace std;

int maxThreeNum(int n1, int n2, int n3){
    // max() is a predefined function in c++
    // but max() takes only two arguments. ;-(
    int ans1 = max(n1,n2);
    int finalAns = max(ans1,n3);
}

int main(){
    int a, b, c;
    cout << "Enter three space separated integers: ";cin >> a >> b >> c ;
    cout << "Max Number is : " << maxThreeNum(a,b,c);
    return 0;
}

// Mohammad Maasir | 7th September 2023, 20:58
