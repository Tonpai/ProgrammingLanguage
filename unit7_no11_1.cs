/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
using System;
class HelloWorld {
  static void findMax(out int max, int[] numArr){
    max = numArr[0];
    foreach(int i in numArr){
        if(i > max) {
            max = i;
        }
    }
  }
  
  static void Main() {
    int maxNum;
    int[] numArr = new int [] {1, 3, 5, 7, 1, 0, 3};
    findMax(out maxNum, numArr);
    Console.WriteLine("Max number: " + maxNum);
  }
}