#include<iostream>
using namespace std;
class employee
{
	private :
		string name;
		int id;
		int salary;
	
	public :
		void get_data()
		{
			cout<<"enter name::";
			cin>>name;
			
			cout<<"enter your id::";
			cin>>id;
			
			cout<<"enter your salary::";
			cin>>salary;

		}
		
		void put_data()
		{
			cout<<"your name is   ::"<<name<<endl;
			cout<<"your id is     ::"<<id<<endl;
			cout<<"your salary is ::"<<salary<<endl;
		}
}e1;

int main()
{
	e1.get_data();
	e1.put_data();
	
	return 0;
}