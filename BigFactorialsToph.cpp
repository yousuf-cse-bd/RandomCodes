// C++ program to compute factorial of big numbers
#include<iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 2000

int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
	int res[MAX]; 

	// Initialize result
	res[0] = 1;
	int res_size = 1;

	// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
	for (int x=2; x<=n; x++){ 
		res_size = multiply(x, res, res_size);
	}

	// cout << "Factorial of given number is : ";

	int B[res_size];
	for(int i = res_size - 1; i>=0; i--)
	{
		cout<<res[i];

		B[i] = res[i];
	}

	
	// Last 4 digits
	if(n<=7){
		cout<<"\t\t\t\t\t";
		for(int i = res_size - 1; i>=0; i--){
			cout<<res[i];
		}
	}
	if(n >= 8){
		if(n<=10){
			cout<<"\t\t\t\t\t";
			for(int i = 3; i>=0; i--){
				cout<<B[i];
			}
		}else{
			cout<<"\t\t\t\t";
			for(int i = 3; i>=0; i--){
			cout<<B[i];
			}
		}
		
	}

	cout<<endl;

}

// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
	int carry = 0; // Initialize carry


	// One by one multiply n with individual digits of res[]
	for (int i=0; i<res_size; i++)
	{
		int prod = res[i] * x + carry;
	

		// Store last digit of 'prod' in res[]
		res[i] = prod % 10;

		// Put rest in carry
		carry = prod/10;
	}

	// Put carry in res and increase result size
	while (carry)
	{
		res[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}
	return res_size;
}

// Driver program
int main()
{
	cout<<"N\t\tN Factorial(N!)\t\t\t\tLast 4 Digits"<<endl;
	for(int i = 0; i<=15; i++)
	{
		cout<<i<<"\t\t";
		factorial(i);
	}
	
	return 0;
}
