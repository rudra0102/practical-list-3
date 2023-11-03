#include<iostream>
using namespace std;
class student
{
	private:
		char s_name[20];
		int s_age;
	
	public:
		get_data()
		{
			cout<<"Enter Student name:";
			cin>>s_name;
			cout<<"Enter Student age::";
			cin>>s_age;
			}	
			put_data()
			{
				cout<<"Student name is:"<<s_name<<endl;
				cout<<"Student age is::"<<s_age<<endl;
		    }
}s1;
int main()
{
	s1.get_data();
	s1.put_data();
	
	return 0;
}
			