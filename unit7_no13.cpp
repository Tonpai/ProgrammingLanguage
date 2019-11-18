/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

template<typename T> bool isequal(T a, T b){
    return a == b;
}

int main()
{
    int x = 0;
    int y = 5;
    int z = 0;
    
    cout << isequal<int>(x, y) << endl;
    cout << isequal<int>(x, z) << endl;
    
    string u = "I love";
    string v = "Khon Kaen";
    string w = "I love";
    
    cout << isequal<string>(u, v) << endl;
    cout << isequal<string>(u, w) << endl;
    return 0;
}
