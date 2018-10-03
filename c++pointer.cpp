#include<iostream>
using namespace std;
class Box
{public:
	Box(double l=2.0, double b=2.0,double h=2.0)
	{cout<<"constructor called"<<endl;
	length=l;
	breadth=b;
	height=h;
	}
	double volume()
	{return length*breadth*height;
	}
	private:
		double length;
		double breadth;
		double height;
};
int main()
{Box box1(2.5,6.7,8.9);
Box box2(3.5,7.9,8.0);
Box *ptrbox;
ptrbox=&box1;
cout<<"volume of box1 "<<ptrbox->volume()<<endl;
ptrbox=&box2;
cout<<"volume of box2 "<<ptrbox->volume()<<endl;
return 0;
}
