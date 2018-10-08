#include<iostream>
using namespace std;
class Line
{public:
	int getlength(void);
	Line(int len);
	Line(const Line &obj);
	~Line();
	private:
		int *ptr;
};
Line::Line(int len)
{cout<<"normal constructor allocating pointer"<<endl;
ptr=new int;
*ptr=len;
}
Line::Line(const Line &obj)
{cout<<"copy constructor allocating pointer"<<endl;
ptr=new int;
*ptr=*obj.ptr;
}
Line::~Line(void)
{cout<<"freeing memory"<<endl;
delete ptr;
}
int Line::getlength(void)
{return *ptr;
}
void display(Line obj)
{cout<<"length of linr " <<obj.getlength()<<endl;
}
int main()
{Line line1(10);
Line line2=line1;
display(line1);
display(line2);
return 0;
}
