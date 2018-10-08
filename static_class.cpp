#include<iostream>
using namespace std;
class Box
{public:
	static int objectcount;
	Box(double l=2.0,double b=2.0,double h=2.0)
	{cout<<"constructor called"<<endl;
	length=l;
	breadth=b;
	hieght=h;
	objectcount++;
	}
	double volume()
	{return length*breadth*hieght;
	}
	private:
		double length;
		double breadth;
		double hieght;
};
int Box::objectcount=0;
int main()
{Box box1(3.3,5.6,7.8);
Box box2(2.5,7.8,8.9);
cout<<"total objects "<<Box::objectcount<<endl;
return 0;
}
