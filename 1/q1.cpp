#include<iostream>
#include<conio.h>
using namespace std;

class circle{
	private:
		float Radius;
	public:
		
	circle(float radius){
		Radius = radius;
	}
	
	void setRadius(float radius){
		Radius = radius;
	}
	
	float getRadius(){
		return Radius;
	}
		
	float computearea(){
		float x= getRadius();
		float square = x*x; 
	 	return 3.14* square;
	}
	
	float computeCircumference(){
	
		return 2.0*3.14*(getRadius());
	}
	};

int main()
{
	float num1;
	cout<<"Enter radius----> ";
	cin>>num1;
	
	circle a(num1);
	float y=a.computearea();
	float circum = a.computeCircumference();
	
	cout<<"Area--> "<<y<<endl;
	cout<<"Circumference--> "<<circum<<endl;	
}
