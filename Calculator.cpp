//A calculator program 
//Developed by Opobo Gideon 
//A student of Civil Engineering MAK


//this program is limited to two sets of digits
#include<iostream>
#include<cmath>
#include<string>

using namespace std;
int main()
{
	int option;
	float number1, number2,squareRoot, square, firstNumber1, secondNumber1, firstNumber2, secondNumber2, secondNumber3, firstNumber3, sum, product,difference, dividend, divisor, divider;
	char choice,Y;
	cout<<"Choose an action to perform"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Multiplication"<<endl;
	cout<<"3. Division"<<endl;
	cout<<"4. Getting difference"<<endl;
	cout<<"5. Squaring"<<endl;
	cout<<"6. Getting the square-root"<<endl;
	cin>>option;
	
	switch(option){
		//addition
		case 1:
		cout<<"Enter the first number"<<endl;
		cin>>firstNumber1;
		cout<<"Enter the second number"<<endl;
		cin>>secondNumber1;
		sum = firstNumber1+secondNumber1;
		cout<<"The sum of "<<firstNumber1 <<" and "<<secondNumber1<<" is "<<sum<<endl;
		break;
		
		//multiplication
		case 2:
		cout<<"Enter the first number"<<endl;
		cin>>firstNumber2;
		cout<<"Enter the second number"<<endl;
		cin>>secondNumber2;
		product = firstNumber2*secondNumber2;
		cout<<"The product of "<<firstNumber2 <<" and "<<secondNumber2<<" is "<<product<<endl;
		break;
		
		//division
		case 3:
		cout<<"Enter the divisor"<<endl;
		cin>>divisor;
		cout<<"Enter the divider"<<endl;
		cin>>divider;
		dividend = divider/divisor;
		cout<<"The division of "<<divider <<" by "<<divisor<<" is "<<dividend<<endl;
		break;
		
		//difference
		case 4:
		cout<<"Enter the first number"<<endl;
		cin>>firstNumber3;
		cout<<"Enter the second number"<<endl;
		cin>>secondNumber3;
		difference = firstNumber3-secondNumber3;
		cout<<"The difference between "<<firstNumber3 <<" and "<<secondNumber3<<" is "<<abs(difference)<<endl;
		cout<<"Do you wish to perform another operation?(Y,N)"<<endl;
		cin>>choice;
		break;
		
		//squaring
		case 5:
		cout<<"Enter the number to square"<<endl;
		cin>>number1;
		square = number1*number1;
		cout<<"The square of "<<number1 <<" is "<<square<<endl;
		break;
		
		//square rooting 
		case 6:
		cout<<"Enter the number whose square root is to be determined"<<endl;
		cin>>number2;
		squareRoot = sqrt(number2);
		cout<<"The square root of "<<number2<<" is "<<squareRoot<<endl;
		break;
		
		default:
		cout<<"You have made an invalid input"<<endl;
		break;
		}	
	
	return 0;

	}
