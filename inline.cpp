#include<iostream>
using namespace std;
class Box
{public:
Box(double l=20.0,double b=15.0,double h=29.0)
{cout<<"constructor called"<<endl;
length=l;
breadth=b;
hieght=h;
}
double volume()
{return length*breadth*hieght;
}
int compare(Box box)
{return this->volume()>box.volume();
}
private:
	double length;
	double breadth;
	double hieght;
};
int main()
{Box box1(3.3,1.2,7.8);
Box box2(8.5,5.6,7.4);
if(box1.compare(box2))
{cout<<"box2 is smaller than box1"<<endl;
}
else
{cout<<"box2 is smaller than box1"<<endl;
}
return 0;
}
