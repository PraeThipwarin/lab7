#include<iostream>
#include<string>
using namespace std;

char before(char x){
	char y;
	if(x > 'A'&&x <= 'Z')
	{
		y = x-1;
	}
	else if(x == 'A')
	{
		y = 'Z';
	}
	else
	{
		y = '0';
	}
	return y;
	}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
