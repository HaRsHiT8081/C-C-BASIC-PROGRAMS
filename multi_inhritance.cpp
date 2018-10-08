#include<iostream>
using namespace std;
class shape
{public:
	void setwidth(int w)
	{width=w;
	}
	void sethieght(int h)
	{hieght=h;
	}
	protected:
		int width;
		int hieght;
};
class paintcost
{public:
	int getcost(int area)
	{return area*70;
	}
};
class rectangle:public shape,public paintcost
{public:
	int getarea()
	{return (width*hieght);
	}
};
int main()
{rectangle Rect;
int area;
Rect.setwidth(5);
Rect.sethieght(7);
area=Rect.getarea();
cout<<"total area = "<<Rect.getarea()<<endl;
cout<<"total paintcost = "<<Rect.getcost(area)<<endl;
return 0;
}
