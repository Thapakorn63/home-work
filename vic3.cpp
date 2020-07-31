#include <iostream>
using namespace std;
void cal_func(int,int);
void sub (int,int);
void mul (int,int);
int main()


{
	int x,y;
	cout<<"Enter x :";
	cin>>x;
	cout<<"Enter y :";
	cin>>y;
	cout<<x<<"+"<<y<<"="<<x+y<<endl;
	cal_func(x,y);
	sub (x,y);
	mul (x,y);

	return(0);
}



void cal_func(int x,int y)
{   

	cout<<x<<"+"<<y<<"="<<x-y<<endl;
}
void sub(int x,int y)
{

	cout<<x<<"/"<<y<<"="<<x/y<<endl;

}
void mul(int x, int y)
{
	cout<<x<<"*"<<y<<"="<<x*y<<endl;

}