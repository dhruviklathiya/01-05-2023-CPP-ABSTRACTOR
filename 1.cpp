#include<iostream>
using namespace std;
class CARPARENT{
	public:
		virtual void display()=0; // Viartual function which must be in parent class
};
class RR : public CARPARENT{
	public:
	void display(){
	cout<<"This is rolls royce class"<<endl;
	}
};
int main(){
	RR obj;
	obj.display();
	return 0;
}