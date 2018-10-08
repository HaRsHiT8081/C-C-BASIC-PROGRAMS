#include<iostream>
using namespace std;
class Line
{public:
	void setlength(double len);
	double getlength(void);
	Line();
	~Line();
	private:
		double length;
};
Line::Line(void)
{cout<<"object is bieng created"<<endl;
}
Line::~Line(void)
{cout<<"object is bieng deleted"<<endl;
}
void Line::setlength(double len)
{length=len;
}
double Line::getlength(void)
{return length;
}
int main()
{Line line;
line.setlength(3.6);
cout<<"length of line = "<<line.getlength()<<endl;
return 0;
}
