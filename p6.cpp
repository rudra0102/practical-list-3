#include<iostream>
using namespace std;
class shape
{
	public :
		float height;
		float base;
		void get_data();
		void display_shape();
		
}d1;

	void shape::get_data()
	{
		cout<<"enter height::";
		cin>>height;
		
		cout<<"enter base::";
		cin>>base;
	}
	void shape::display_shape()
	{
		cout<<"height is::"<<height<<endl;
		cout<<"base is::"<<base<<endl;
	}

int main()
{
	d1.get_data();
	d1.display_shape();
	
	return 0;
}	