/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
abstract class Shape {
    private double sideNum;
    public abstract double area();
}

class Circle extends Shape{
    private double radius;
    
    Circle(double radius){
        this.radius = radius;
    }
    
    @Override
    public double area(){
        return Math.PI * this.radius * this.radius;
    }
}

class Rectangle extends Shape{
    private double width;
    private double height;
    
    Rectangle(double width, double height){
        this.width = width;
        this.height = height;
    }
    
    @Override
    public double area(){
        return this.width * this.height;
    }
}

public class Main
{
	public static void main(String[] args) {
		Shape circle = new Circle(5);
		System.out.println(circle.area());
		
		Shape rectangle = new Rectangle(5, 2);
		System.out.println(rectangle.area());
	}
}
