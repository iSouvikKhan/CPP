//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sum(int& num) { // this is pass by reference || without & is pass by value, then u need to return the variable
	num = num + 2;
}

void arrFunction(int arr[]) { // or arrFunction(int *arr)
	arr[0] = 100;
}

//int main() {
//
//	cout << "hello" << endl;
//
//	cout << "hi" << endl;
//	// int -10^9 to +10^9
//
//	// long <= 10^12
//
//	// long long <= 10^18
//
//	// INT_MAX / INT_MIN
//
//	// LONG_MAX / LONG_MIN
//
//	// float -> upto 7 decimal places
//
//	// doubble -> upto 15 decimal places
//
//	// char in single quotation ''
//
//	// string in double quotation ""
//
//	//-------------------------------------
//
//	// take number from user
//
//	/*int num, val;
//	cout << "provide the num value" << endl;
//	cin >> num;
//	cout << "your answer: " << num;*/
//
//	//-------------------------------------
//
//	// take string from user
//
//	/*string sentence;
//	getline(cin, sentence);
//	cout << sentence;*/
//
//	//-------------------------------------
//
//	//int num = 4;
//	//cout << &num << " - observe what it prints" << endl; // it prints the address where this num variable is stored
//
//	//-------------------------------------
//
//	//int arr[3] = { 1,2,3 };
//	//cout << arr << endl; // you are printing the address
//	//cout << arr[0] << endl;
//
//	//int arr2[3] = { 1,2,3 };;
//	//for (int i = 0; i < 3; i++) {
//	//	cout << arr2[i] << endl;
//	//}
//
//	//-------------------------------------
//
//	//int value = 10;
//	//sum(value); // in function definition u r receiving its address, u updated the value in its home, acting global variable
//	//cout << value << endl;
//
//	//------------
//
//	// for array u send the reference in forst place so, no need to mention '*' (used for array) before the variable name
//
//	int arr[] = { 1,2,3 };
//	arrFunction(arr);
//	cout << arr[0];
//
//	//------------
//
//
//
//
//	return 0;
//}

