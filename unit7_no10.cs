/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
using System;
class HelloWorld {
  static void swapWithRef(ref int x, ref int y){
    int temp = x;
    x = y;
    y = temp;
  }
  static void Main() {
    int x = 5;
    int y = 10;
    swapWithRef(ref x, ref y);
    Console.WriteLine("x: " + x);
    Console.WriteLine("y: " + y);
  }
}