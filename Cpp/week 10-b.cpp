#include<iostream>
using namespace std;
template <class T>
class calculator{
	private:
		T  num1, num2;
		public:
			calculator(T n1, T n2) {
				num1 = n1;
				num2 = n1;
			}
		    T add() {return num1 + num2;}
			T subtract(){return num1 - num2;}
			T multiply() {return num1 * num2;}
			T divide() {
				if (num2 != 0)
				return num1 / num2;
				else {
					cout<<"Error! Division by zero."<<endl;	
					return 0;			
					}
			}	
};
int main()
{
//using calculator with int
calculator<int> intCalc(10,5);
cout<<"Int calculaton:"<<endl;
cout<<"Addition = "<<intCalc.add()<<endl;
cout<<"Subtraction = "<<intCalc.subtract()<<endl;
cout<<"multiplication = "<<intCalc.multiply()<<endl;
cout<<"Division = "<<intCalc.divide()<<endl;
cout<<"-------------------------"<<endl;
//using  calculator with double
calculator<double> doubleCalc(10.5, 2.5);
cout<<"Int calculaton:"<<endl;
cout<<"Addition = "<<doubleCalc.add()<<endl;
cout<<"Subtraction = "<<doubleCalc.subtract()<<endl;
cout<<"multiplication = "<<doubleCalc.multiply()<<endl;
cout<<"Division = "<<doubleCalc.divide()<<endl;
cout<<"-------------------------"<<endl;
return 0;
}



