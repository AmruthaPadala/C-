#include<iostream> 
using namespace std; 
class vehicle{ 
public: 
vehicle(){ 
                 cout<<"This is a vehicle"<< endl; 
 
} 
}; 
class car : public vehicle{ 
public: 
car(){ 
cout<<"This vehicle is a car"<< endl; 
 
 
} 
}; 
class bus : public vehicle{ 
public: 
bus(){ 
 
 
cout<<"This vehicle is bus"<< endl; 
} 
}; 
int main(){ 
cout<<"Roll No:24B11AI308"<<endl; 
car obj1; 
bus obj2; 
}
