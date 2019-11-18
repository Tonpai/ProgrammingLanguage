/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

template<typename T> vector<T> insertionSort(vector<T> values){
    int i;
    int j;
    for(j = 1; j < values.size() ; j++){
        T key = values[j];
        i = j - 1;
        while (i > 0 && values[i] > key){
            values[i + 1] = values[i];
            i = i - 1;
        }
        values[i + 1] = key;
    }
    return values;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 9, 2, 8};
    numbers = insertionSort<int>(numbers);
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i]<< " ";
    }
    return 0;
}
