#include <iostream>
using namespace std;

int main(){
	int a, b;
	char setOperator;
	
	
	cout << "Please enter first number and press enter key\n";
	cin >> a;
	cout << "Please enter your operator / * + - and press enter key\n";
	cin >> setOperator;
	cout << "Please enter second number and press enter key\n";
	cin >> b;
	
	if(setOperator == '/'){
		cout << "Answer: " << a / b;
	}
	
	if(setOperator == '*'){
		cout << "Answer: " << a * b;
	}
	
	if(setOperator == '+'){
		cout << "Answer: " << a + b;
	}
	
	if(setOperator == '-'){
		cout << "Answer: " << a - b;
	}
}
