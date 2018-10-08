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
class rectangle:public shape
{public:
	int getarea()
	{return (width*hieght);
	}
};
int main()
{rectangle Rect;
Rect.setwidth(5);
Rect.sethieght(7);
cout<<"total area = "<<Rect.getarea()<<endl;
return 0;
}
