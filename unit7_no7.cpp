/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void f0(int x){
    x = x * 10;
}

void f1(int *x){
    *x = *x * 2;
}

void f2(int &x){
    printf("%p\n", &x);
    x = x - 2;
}

void f3(int & y , int & z){
    f1(&z);
    f2(y);
    y = y + z;
}

int main(){
    int a, b, c, d, e;
    a = 1;
    b = 2; 
    c = 3; 
    d = 4; 
    e = 5;
    
    f0(a);
    printf("%d\n", a);
    f1(&b);
    printf("%d\n", b);
    f2(c);
    printf("%p\n", &c);
    printf("%d\n", c);
    f3(d, e);
    printf("%d, %d\n", d, e);
    return 0;
}
