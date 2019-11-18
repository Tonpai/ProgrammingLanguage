/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
interface AreaCalculate{
    int cube(int w, int h, int t);
}

public class Main
{
	public static void main(String[] args) {
		AreaCalculate areaCalculate = (int w, int h, int t) -> w*h*t;
		System.out.println(areaCalculate.cube(2,3,4));
	}
}
