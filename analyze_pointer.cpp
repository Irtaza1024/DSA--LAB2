#include<iostream>
using namespace std;

void analyze_pointer(int * ptr){
	cout << ptr << endl;
	cout << *ptr << endl;
}

int main(){
	int iValue = 10;
	analyze_pointer(&iValue);

	int * jValue = new int(20);
	analyze_pointer(jValue);

	delete jValue;
}
