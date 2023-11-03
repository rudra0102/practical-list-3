#include<iostream>
using namespace std;
class item
{
	private:
		int number,cost;
	public:
		void getdata();
		void putdata()
		{
			cout<<endl<<"the number of item is :: "<<number;
			cout<<endl<<"the cost of item :: "<<cost;
		}
}i;

void item::getdata()
{
	cout<<"enter the number of items :: ";
	cin>>number;
	
	cout<<"enter the cost of item :: ";
	cin>>cost;
}

int main()
{
	i.getdata();
	i.putdata();
	
	return 0;
}
