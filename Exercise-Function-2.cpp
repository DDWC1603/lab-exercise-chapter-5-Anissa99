//Nurul Anissa binti Huzaini
//A17DW4087
#include <iostream>
#include <conio.h>
using namespace std;
int add(int, int);

int main()
{
    int ko;
	int num1, num2, sum;
	cout<<"Enter two numbers to add: ";
	cin >> num1 >> num2;
	
	sum = add(num1, num2);
	cout<< "Sum = "<<sum;
	cin>>ko;
}

int add(int a, int b)
{
    int add;
    add = a + b;
    return add;
}
