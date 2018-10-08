#include<iostream>
using namespace std;
class Line
{public:
	void setlength(double len);
	double getlength(void);
	Line(double len);
	private:
		double length;
};
Line::Line(double len)
{cout<<"object is bieng created"<< len<<endl;
length=len;
}
void Line::setlength(double len)
{length=len;
}
double Line::getlength(void)
{return length;
}
int main()
{Line line(10.0);
cout<<"length of line "<<line.getlength()<<endl;
line.setlength(8.9);
cout<<"length of line = "<<line.getlength()<<endl;
return 0;
}
