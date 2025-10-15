#include<iostream>
using namespace std;
class shape{
	public:
		virtual void calculate()
		{
			cout<<"Area of your shape";
		}
		virtual -shape()
		{
			cout<<"Shape destructor call";
		}
};
class Rectangle : public shape{
	public:
		int width, height, area;
		void calculate()
		{
			cout<<"Enter width of rectangle:";
			cin>>width;
			cout<<"Enter height of the rectangle:";
			cin>>height;
			area=height * width;
			cout<<"Area of Rectangle:" << area <<"\n";
		}
		virtual -Rectangle()
		{
			cout<<"Rectangle destructor call\n";
		}
};
class square: public shape{
	public :
		int side, area;
		void calculate()
		{
			cout<<"Enter side of square:";
			cin>>side;
			area = side * side;
			cout<<"Area of square:" << area <<"\n";
		}
		virtual -square()
		{
			cout<<"square destructor call\n";
		}
};
int main()
{
    Shape* S;
	Rectangle r;
	S = &r;
	s-> calculate();
	square sq;
	S = &sq;
	S->calculate();
	return 0;	
}

