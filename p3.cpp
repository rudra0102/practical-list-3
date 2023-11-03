#include<iostream>
using namespace std;
struct employee
{
	char e_name[10];
	int e_code;
	float e_salary;
	char e_branch[20];
}e1;
int main()
{
	cout<<"Enter employee name::";
	cin>>e1.e_name;
	cout<<"Enter employee code::";
	cin>>e1.e_code;
	cout<<"Enter employee salary::";
	cin>>e1.e_salary;
	cout<<"Enter employee branch::";
	cin>>e1.e_branch;
	
	cout<<"Employee name::"<<e1.e_name<<endl;
	cout<<"Employee code::"<<e1.e_code<<endl;
	cout<<"Employee salary::"<<e1.e_salary<<endl;
	cout<<"Employee branch::"<<e1.e_branch<<endl;
	
	return 0;
}