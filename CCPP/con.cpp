#include<iostream>
using namespace std;
int main()
{
int i,num;
char con='t';
for (num=2;num<=500;num++)
con='t';
{
for(i=2;i<=num-1;i++)
{
if(num%i==0)
{
con='f';
break;
}
}
if(con=='t')
{
cout<<num;
}
}
}
