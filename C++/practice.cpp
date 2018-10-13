#include<iostream>
using namespace std;
int main()
{int a,b,c,d,x,y,min;
cout<<"Enter four different numbers for finding out the minimum of them";
cin>>a>>b>>c>>d;
x=(a<b?a:b);
y=(c<d?c:d);
min=(x<y?x:y);
cout<<"Minimum of them is="<<min;
}
