#include<iostream>
#include<cstring>
using namespace std;
void printbook(struct books book);
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
printbook(book1);
printbook(book2);
return 0;
}
void printbook(struct books book)
{cout<<"title  "<<book.title<<endl;
cout<<"author  "<<book.author<<endl;
cout<<"subject  "<<book.subject<<endl;
cout<<"bookid  "<<book.bookid<<endl;
}

