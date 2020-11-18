#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int size_of_number(int );		//Checking How large the number is
int multiply(int x, int y);
int main() {
	int num1 = 1234;
	int num2 = 5678;
	cout << num1 << endl << num2;
	cout << size_of_number(num1);
	cout << endl << size_of_number(num2) << endl;
	cout << multiply(num1, num2) << endl;
	system("pause");
}

int size_of_number(int num){
	int count = 0;
	while (num > 0) {
		cout << num << endl;
		num /= 10;
		count++;
	}
	return count;
}
int multiply(int x, int y) {

	//Base Case
	if (x < 10 && y < 10 )
	{
		return x*y;
	}

	int size = max(size_of_number(x), size_of_number(y));   //Give length of max number

	int n = (int)ceil(size / 2.0);			   //N number of power

	int power = pow(10, n);					   //Power
	int a = floor(x / power);	   //a part
	int b = x % power;						   //b part
	int c = floor(y / power);	   //c part
    int d = y % power;						   //d part

	int ac = multiply(a, c);
	int bd = multiply(b, d);
	int e = multiply(a + b, c + d) - ac - bd;

	return (pow(10, 2*n)*ac + pow(10, n)*e + bd);
}
