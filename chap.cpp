#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name,surname;
	int salary,sale,commision;
	cout<<"****Homework 2**********\n";
	cout<<"Enter Name : ";
	cin>>name>>surname;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Sale : ";
	cin>>sale;
	cout<<"Enter Commition Percent : ";
	cin>>commision;
	cout<<"------output----------\n";
	cout<<"Your name = "<<name <<"  "<<surname<<endl;
	cout<<"Total Revenue "<<(sale*commision)/100+salary<< " Bath\n";
	cout<<"-------------------------"<<endl;


	return(0);

}
