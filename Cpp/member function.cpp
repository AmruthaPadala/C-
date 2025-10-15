#include<iostream>
using namespace std;
//class definition
class student{
	private:
		string name;
		int age;
	public:
		//member function to set values
	void setDetails(string n, int a){
		name = n;
		age = a;
	}
	//member function to display values	
	void displayDetails(){
		cout<<"student Name: "<<name<<endl;
		cout<<"student age: "<<age<<endl;
	}
};
//main function
int main(){
student s1;
s1.setDetails("Amrutha", 18);
s1.displayDetails();
return 0;
}

