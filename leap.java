import java.io.*;
class LeapYear
{
Scanner s=new Scanner(System.in);
int n=s.nextInt();
System.out.println("enter the year  to calculate leap or not");
if(n%4==0)
{
System.out.println("the year is not a leap year");
}
else
{
System.out.println("leap year");
}
String[] a=new String[45];
a[0]="sunady";
a[1]="monday";
a[2]="tuesday";
a[3]="wednesday";
a[4]="thursday";
a[5]="friday";
a[6]="saturday";
for(int i=0;i<a.length;i++)
{
System.out.println(a[i+1]);
}
}
}
