//use functions to get area of circle, rectangle ,triangle and square

#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.14

void areaOfCircle(float radius)
{
	float area = PI * radius * radius;
	cout << "Area of Circle: " << area << endl;
}
void areaOfRectangle(float length, float width)
{
	float area = length * width;
	cout << "Area of Rectangle: " << area << endl;
}
void areaOfTriangle(float base, float height)
{
	float area = 0.5 * base * height;
	cout << "Area of Triangle: " << area << endl;
}
void areaOfSquare(float side)
{
	float area = side * side;
	cout << "Area of Square: " << area << endl;
}
int main()
{
	float radius, length, width, base, height, side;

	cout << "Enter radius of circle: ";
	cin >> radius;
	areaOfCircle(radius);

	cout << "Enter length and width of rectangle: ";
	cin >> length >> width;
	areaOfRectangle(length, width);

	cout << "Enter base and height of triangle: ";
	cin >> base >> height;
	areaOfTriangle(base, height);

	cout << "Enter side of square: ";
	cin >> side;
	areaOfSquare(side);

	return 0;
}
