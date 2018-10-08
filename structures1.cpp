#include<iostream>
#include<cstring>
using namespace std;
struct books
{char title[50];
char author[50];
char subject[100];
int bookid;
};
int main()
{struct books book1;
struct books book2;
strcpy(book1.title,"c++ programming");
strcpy(book1.author,"dennis ritchie");
strcpy(book1.subject,"c programming");
book1.bookid=546789;
strcpy(book2.title,"java");
strcpy(book2.author,"strousup");
strcpy(book2.subject,"telcom");
book2.bookid=345678;
cout<<"title"<<book1.title<<endl;
cout<<"author"<<book1.author<<endl;
cout<<"subject"<<book1.subject<<endl;
cout<<"bookid"<<book1.bookid<<endl;
cout<<"title"<<book2.title<<endl;
cout<<"author"<<book2.author<<endl;
cout<<"subject"<<book2.subject<<endl;
cout<<"bookid"<<book2.bookid<<endl;
return 0;
}

