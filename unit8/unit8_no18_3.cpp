/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>


using namespace std;

class Shape{
    private:
	double sideNum;
    public:
        virtual double area() = 0;
};

class Rectangle: public Shape {
    private:
        double width;
        double height;
        
    public:
        Rectangle(double width, double height){
            this->width = width;
            this->height = height;
        }
        
        double area(){
            return this->width * this->height;
        }
};

class Circle: public Shape{
    private:
        double radius;
    public:
        Circle(double radius){
            this->radius = radius;
        }
        
        double area(){
            return M_PI * this->radius * this->radius;
        }
};

int main()
{
    Shape* rectangle = new Rectangle(2, 5);
    cout << rectangle->area() << endl;

    Shape* circle = new Circle(10);
    cout << circle->area() << endl;
    
    delete rectangle;
    delete circle;
    
    return 0;
}
