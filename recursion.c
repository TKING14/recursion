#include <stdio.h>

int foo(int a){
    int     b;
    
    if (a == 0)
        return 0;

    //....

    printf("%d", a);
    b = foo(a - 1);
    return b;
}

int main(){
    int     a;
    
    a = 3;
    foo(a);
}