#include<iostream>
using namespace std;
class user{
	public:
	virtual float calculate() = 0;
};
class AREA:public user{
	public:
		float calculate(){
		  float circle;
		  float triangle;
		  float reactangle;

		  float b=9;
		  float h=9;
		  float r=9;

		  circle=3.14*r*r;
		  triangle=(b*h)/2;
		  reactangle=b*h;

		  cout<<"Area of circle : "<<circle<<endl;
		  cout<<"Area of triangle : "<<triangle<<endl;
		  cout<<"Area of rectangle : "<<reactangle<<endl;

		  return circle;
		}   
};
int main(){

	AREA obj;
	obj.calculate();

	return 0;
}