#include<stdio.h>
void fun(char x1[],char x2[])
{
char x3[254];
int i;
int a=0;
int b=0;
int c=0;
a=strlen(x1);
b=strlen(x2);
if(a<b)
c=a;
else
c=b;
for(i=0;i<c;i++)
{
if(x1[i]==x2[i])
x3[i]=x1[i];
else break;
}
printf("%s\n",x3);
}
int main()
{
char a[254];
char b[254];
int i;
for(i=0;i<1;i++)
{
printf("Enter two words:");
scanf("%s%s",a,b);
a[strlen(a)-1]='\0';
b[strlen(b)-1]='\0';
printf("The longest comman prefix of %s and %s",a,b);
fun(a,b);
}
return 0;
}
