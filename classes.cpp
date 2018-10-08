#include<iostream>
using namespace std;
class box
{public:
	int length;
	int breadth;
	int hieght;
};
int main()
{box box1;
box box2;
int volume=0;
box1.length=5;
box1.breadth=6;
box1.hieght=9;
box2.length=2;
box2.breadth=4;
box2.hieght=7;
volume=box1.length*box1.breadth*box1.hieght;
cout<<"volume of box1 = "<<volume<<endl;
volume=box2.length*box2.breadth*box2.hieght;
cout<<"volume of box2 = "<<volume<<endl;
return 0;
}
