#include<iostream>
using namespace std;
class box
{public:
	int length;
	int breadth;
	int hieght;
	int getvolume(void);
	void setlength(int len);
	void setbreadth(int bre);
	void sethieght(int hie);
};
int box::getvolume(void)
{return length*breadth*hieght;
}
void box::setlength(int len)
{ length=len;
}
void box::setbreadth(int bre)
{ breadth=bre;
}
void box::sethieght(int hie)
{ hieght=hie;
}
int main()
{box box1;
box box2;
int volume=0;
box1.setlength(6);
box1.setbreadth(3);
box1.sethieght(7);
box2.setlength(8);
box2.setbreadth(9);
box2.sethieght(1);
volume=box1.getvolume();
cout<<"volume of box1 = "<<volume<<endl;
volume=box2.getvolume();
cout<<"volume of box2 = "<<volume<<endl;
return 0;
}








