#include<iostream>
using namespace std;
const int MAX=3;
int main()
{int var[MAX]={10,200,100};
int *ptr;
ptr=var;
for(int i=0;i<MAX;i++)
{cout<<"address of var";
cout<<ptr<<endl;
cout<<"value of var";
cout<<*ptr<<endl;
ptr++;
}
return 0;
}
