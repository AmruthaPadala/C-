#include<iostream> 
using namespace std; 
class vehicle{ 
public: 
vehicle(){ 
cout<<"This is a vehicle"<<endl;} 
 
 
}; 
class fourwheeler:public vehicle{ 
public: 
fourwheeler(){ 
cout<<"4 wheeler vehicles"<<endl; 
} 
}; 
class car:public fourwheeler{ 
public: 
car(){ 
cout<<"This 4 wheeler vehicle is a car"; 
 
 
} 
}; 
int main(){
	cout<<"Roll No:24B11AI308"<<endl; 
car obj; 
return 0; 
}
