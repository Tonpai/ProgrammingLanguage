/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

double addition(double a, double b){
    return a + b;
}

double subtraction(double a, double b){
    return a - b;
}

int main()
{
    double (* funs[2]) (double, double);
    funs[0] = addition;
    funs[1] = subtraction;

    for (int i = 0; i < 2; i++){
        cout << addition(10,5) << " " << funs[i](10,5)<<endl;
    }

    return 0;
}
