#include<iostream>
using namespace std;
class box
{public:
	double length;
	void setwidth(double wid);
	double getwidth(void);
	private:
		double width;
};
double box::getwidth(void)
{return width;
}
void box::setwidth(double wid)
{width=wid;
}
int main()
{box box1;
box1.length=10.6;
cout<<"length of box"<<box1.length<<endl;
box1.setwidth(10.0);
cout<<"width of box"<<box1.getwidth()<<endl;
return 0;
}
