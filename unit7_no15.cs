/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
using System;
class HelloWorld {
  static bool isGreater<T>(T valueA, T valueB) where T: IComparable<T>{
      return valueA.CompareTo(valueB) == 1;
  }
  
  static void Main() {
    int a = 3;
    int b = 5;
    
    if (isGreater<int>(a, b)){
        Console.WriteLine("a is greater than b.");
    }else{
        Console.WriteLine("b is greater than a.");
    }
  }
}