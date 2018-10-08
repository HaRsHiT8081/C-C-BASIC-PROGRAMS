#include<iostream>
using namespace std;
class box
{protected:
	double width;
};
class smallbox:box
{public:
	void setsmallwidth(double wid);
	double getsmallwidth(void);
};
double smallbox::getsmallwidth(void)
{return width;
}
void smallbox::setsmallwidth(double wid)
{width=wid;
}
int main()
{smallbox Box;
Box.setsmallwidth(5.3);
cout<<"width of box = "<<Box.getsmallwidth()<<endl;
return 0;
}
