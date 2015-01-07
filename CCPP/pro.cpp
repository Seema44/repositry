#include<iostream>
using namespace std;
int main()
{

int  c,d,m,n,mat[m][n];
cout<<"enter the rows and columns of matrix:";
cin>>c;
cin>>d;
cout<<"enter the elements   of matrix:";
for(m=1;m<=c;m++)
for(n=1;n<=d;n++)
cin>>mat[m][n];
}

