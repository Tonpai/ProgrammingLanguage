/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
using System;

interface Shape{
    double area();
}

class Circle : Shape{
    private double radius;
    
    public Circle(double radius){
        this.radius = radius;
    }
    double Shape.area(){
        return Math.PI * this.radius * this.radius;
    }
}

class Rectangle : Shape{
    private double width;
    private double height;
    
    public Rectangle(double width, double height){
        this.width = width;
        this.height = height;
    }
    double Shape.area(){
        return this.width * this.height;
    }
}

class HelloWorld {
  static void Main() {
    Shape circle = new Circle(2);
    Shape rectangle = new Rectangle(2,10);
    
    Console.WriteLine(circle.area());
    Console.WriteLine(rectangle.area());
  }
}