/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
    public static void f1(int p) {
        int v = p;
        p = v + 1;
    }
    
    public static void f2(int [] b){
        for(int i=0; i<b.length; i++){
            b[i] = b[i] + 1;
        }
    }
    
	public static void main(String[] args) {
		System.out.println("Hello World");
		
		int x = 10;
		int [] a = new int[3];
		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		f1(x);
		System.out.println(x);
		f2(a);
		for(int i=0; i< a.length; i++){
		    System.out.println(a[i]);
		}
	}
}
