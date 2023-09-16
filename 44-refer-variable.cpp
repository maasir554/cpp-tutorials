// Reference variables in c++
#include <iostream>
using namespace std;

void printAll(int n, int k, int l) {
        cout << "--------------------\n";
        cout << "n = " << n << endl;
        cout << "k = " << k << endl;
        cout << "l = " << l << endl;
        cout << "--------------------\n";
        return;
} 

int main(){
    int n = 5;
    int &k = n;
    int &l = n;
    
    printAll(n,k,l);
    n++;
    printAll(n,k,l);
    k++;
    printAll(n,k,l);
    l++;
    printAll(n,k,l);
    return 0;
}