#include<iostream>
using namespace std;
class distance
{
	private:
		float feet;
		float inches;
	
	public:
		void get_distance()
		{
			cout<<"enter feet";
			cin>>feet;
			cout<<"enter inches";
			cin>>inches;
			
		}
		
		void display_distance()
		{
			cout<<"feet is:"<<feet<<endl;
			cout<<"inches is:"<<inches<<endl;
			
		}
}dis1;

int main()
{
	dis1.get_distance();
	dis1.display_distance();
	
	return 0;
}