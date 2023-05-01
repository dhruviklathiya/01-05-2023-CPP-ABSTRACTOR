#include<iostream>
#include<string.h>
using namespace std;
class Parent {
	public:
    virtual void display(){
   	cout<<"THIS IS PARENT CLASS"<<endl;	
	}
};
class Child : public Parent {
	public:
	 void display(){
	 	cout<<"THIS IS CHILD CLASS"<<endl;
	 }
};
int main(){
	Child ans;
	Parent done;
	Parent *obj;
	obj=&ans;
	obj->display();

	return 0;
}