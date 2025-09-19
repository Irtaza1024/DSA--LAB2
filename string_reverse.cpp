#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char *str;
	int size;

	// Take the size of the string from the user
	cout << "Enter the length of the string: ";
	cin >> size;

	// Allocate memory for the string + 1 for null terminator
	str = new char[size + 1];


	cout << "Enter the string: ";
	cin.ignore(); 
	cin.getline(str, size + 1);


	int length = strlen(str);
	for (int i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}


	cout << "Reversed string: " << str << endl;


	delete[] str;

	return 0;
}
