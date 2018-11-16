/* Q3.Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.*/

//include library
#include <iostream>
using namespace std;

//Creating a class for rectangle
class rectangle {
	public:
		double length;    //lenth of the rectangle
		double breadth;   //breadth of the rectangle
};

int main(){
	rectangle rectangle1;	//Declare rectangle1 of type rectangle
	rectangle rectangle2;	//Declare rectangle2 of type rectangle 
	double area = 0.0;
	double perimeter = 0.0;

	//rectangle1 specification
	cout<<"Enter the length of rectangle1: "<<endl;
	cin>>rectangle1.length;
	cout<<"Enter the breadth of rectangle1: "<<endl;
	cin>>rectangle1.breadth;

	//rectangle2 specification
	cout<<"Enter the length of rectangle2: "<<endl;
	cin>>rectangle2.length;
	cout<<"Enter the breadth of rectangle2: "<<endl;
	cin>>rectangle2.breadth;

	//area of rectangle1
	area = 	rectangle1.length * rectangle1.breadth;
	cout<< "Area of rectangle1 = "<<area<<endl; 

	//area of rectangle2
	area = rectangle2.length * rectangle2.breadth;
	cout << "Area of rectangle2 = " <<area << endl;

	//perimeter of rectangle1
	perimeter = (rectangle1.length+rectangle1.breadth)*2;
	cout <<"Perimeter of rectangle1 = "<<perimeter <<endl;

	//perimeter of rectangle1
	perimeter = (rectangle2.length+rectangle2.breadth)*2;
	cout <<"Perimeter of rectangle2 = "<<perimeter <<endl;

//terminating the program
return 0;
}
