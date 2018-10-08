#include<stdio.h>
#include<conio.h>
int main()
{char c;
int lower,upper;
printf("enter an alphabet");
scanf("%c",&c);
lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lower||upper)
printf("is vowel",c);
else
printf("is consonant",c);
return 0;
}
