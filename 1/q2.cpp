#include<iostream>
#include<conio.h>
using namespace std;

class data{
	public:
		int month ;
		int day ;
		int year  ;
			
		getdata()
		{
			cout<<"month----> ";
			cin>>month;
			  
	        cout<<"day----> ";
		  	cin>>day;
		  		
	        cout<<"year----> ";
			cin>>year;			
		}
	
		showdate()
		{
			cout<<month<<"/"<<day<<"/"<<year;
		}
};

int main()
{
     data x;
	 x.getdata();
   
     x.showdate();
	 return 0;
}
