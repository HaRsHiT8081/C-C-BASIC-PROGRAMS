#include<iostream>
using namespace std;
const int MAX=3;
int main()
{int var[MAX]={10,8,2};
int *ptr;
ptr=var;
for(int i=0;i<MAX;i++)
{cout<<ptr<<endl;
cout<< *ptr<<endl;
ptr++;
}
return 0;
}
