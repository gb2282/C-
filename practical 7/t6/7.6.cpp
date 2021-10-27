#include<iostream>
using namespace std;
int main()
{int i,j;
char a[4][4];
for(i=0;i<4;i++)
{for(j=0;j<4;j++)
  {if(i<=j)
    a[i][j]='*';
    else
    a[i][j]=' ';
  cout<<a[i][j];
  }
cout<<endl;
}
}
