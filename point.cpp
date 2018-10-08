#include<iostream>
using namespace std;
int main()
{double balance[5]={100.0,9.0,8.0,56.0,7.0};
double *p;
p=balance;
cout<<"array values using pointers"<<endl;
for(int i=0;i<5;i++)
{cout<< *(p+i)<<endl;
}
cout<<"array values using balance as address"<<endl;
for(int i=0;i<5;i++)
{cout<< *(balance+i)<<endl;
}
return 0;
}
