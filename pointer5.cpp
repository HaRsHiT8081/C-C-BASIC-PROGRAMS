#include<iostream>
using namespace std;
const int MAX=3;
int main()
{int var[MAX]={10,200,100};
int *ptr;
ptr=var;
int i=0;
while(ptr<=&var[MAX-1])
{cout<<"address of var[" <<i <<"]=";
cout<<ptr<<endl;
cout<<"value of var["<<i<<"]=";
cout<<*ptr<<endl;
ptr++;
i++;
}
return 0;
}
