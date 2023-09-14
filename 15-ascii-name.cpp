#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    a=77;
    b=65;
    c=65;
    d=83;
    e=73;
    f=82;
    printf("%c %c %c %c %c %c",a,b,c,d,e,f);
    // `printf()` is also supporterd in the c++, just like C. We just need to include <cstdio> for that.
    // even if we don't import it, some compilers can automatically reco0gnize its need and import it at the time of 
    // compilation.
    // `%c` is used to display the CHAR output.
    return 0;
}

// Mohammad Maasir | 07 September 2023, 19:04:49
