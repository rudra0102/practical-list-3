#include<iostream>
using namespace std;
struct student{
    char name[10];
    int std;
    float percentage;
}s1;
int main()
{
	cout<<"Enter Student name::";
	cin>>s1.name;
	cout<<"Enter Student std ::";
	cin>>s1.std;
	cout<<"Enter Student Percentage::";
	cin>>s1.percentage;
	
	cout<<"Student name is::"<<s1.name<<endl;
	cout<<"Student std is::"<<s1.std<<endl;
	cout<<"Student percentage is::"<<s1.percentage<<endl;
	
	return 0;
}