

#include <bits/stdc++.h>
using namespace std;

void power() {
	cout << "Power " << pow(2, 9) << endl;
}

void pairFunction() {
	pair<int, int> pr1 = { 11,12 };
	cout << pr1.first << " " << pr1.second << endl;

	pair<int, int> pr2 = make_pair(13, 14);
	cout << pr2.first << " " << pr2.second << endl;

	pair<int, char> pr3 = make_pair(13, 'A');
	cout << pr3.first << " " << pr3.second << endl;

	pair<pair<int, char>, int> pr4 = { {15, 'B'}, 14 };
	cout << pr4.first.first << " " << pr4.first.second << " " << pr4.second << endl;
}

void vectorFunction() {
	vector<int> vc;
	vc.push_back(1);
	vc.push_back(2);
	vc.emplace_back(3);

	cout << "Size " << vc.size() << endl;

	for (int i = 0; i < vc.size(); i++) {
		cout << vc[i] << " ";
	}
	cout << endl;

	vector<int>::iterator beginItr = vc.begin(); // points to the memory location of first element present in the vector
	vector<int>::iterator endItr = vc.end(); // points to the memory location of the element present after the last element, remember it does not points to the last element of the vector
	endItr = endItr - 1; // I did -1 here so i need to do <= in the below loop
	for (vector<int>::iterator i = beginItr; i <= endItr; i++) {
		cout << *i << " ";
	}
	cout << endl;

	auto beginItr1 = vc.begin();
	auto endItr1 = vc.end();
	for (auto i = beginItr1; i < endItr1; i++) {
		cout << *i << " ";
	}
	cout << endl;

	for (auto i : vc) {
		cout << i << " ";
	}
	cout << endl;

	for (int i : vc) {
		cout << i << " ";
	}
	cout << endl;

	auto reverseBegin = vc.rbegin(); // point to the memory location of the last element present in the vector
	auto reverseEnd = vc.rend(); // points before the first element present in the vector
	for (auto i = reverseBegin; i < reverseEnd; i++){
		cout << *i << " ";
	}
	cout << endl;

	vector<int> vc1(5);
	for (int i : vc1) {
		cout << i << " ";
	}
	cout << endl;

	vector<int>vc2 = { 5,6,7,8,9 };
	for (int i : vc2) {
		cout << i << " ";
	}
	cout << endl;

	vector<int> duplicate(vc2);
	for (int i : duplicate) {
		cout << i << " ";
	}
	cout << endl;

	vector<int> vc3(vc2.begin() + 1, vc2.end() - 1);
	for (int i : vc3) {
		cout << i << " ";
	}
	cout << endl;

	cout << "First ele " << vc2.front() << endl;
	cout << "Last ele " << vc2.back() << endl;

	vc2.pop_back(); // removes the last element from the vector
	for (int i : vc2) {
		cout << i << " ";
	}
	cout << endl;

	vc2.erase(vc2.begin() + 2); // it removes the element 7 from the vector
	for (int i : vc2) {
		cout << i << " ";
	}
	cout << endl;

	vector<int>vc4 = { 11,12,13,14,15,16,17 };
	vc4.erase(vc4.begin() + 2, vc4.end() - 2); // it removes 16 and 17 from the vector
	for (int i : vc4) {
		cout << i << " ";
	}
	cout << endl;

	cout << vc4.at(2) << endl;
	cout << vc4[2] << endl;

	vector<int>vc5 = { 11,12,13,14,15,16,17 };
	vc5.clear();
	for (int i : vc5) {
		cout << i << " "; // does not print any element because the vector has been cleared
	}
	cout << endl;

	vector<int>vc6 = { 18,19 };
	vector<int>vc7 = { 20,21 };
	swap(vc6, vc7);
	for (int i : vc6) {
		cout << i << " "; // 20, 21
	}
	cout << endl;

	vector<int>vc8 = { 11,12,13,14,15,16,17 };
	vc8.insert(vc8.begin() + 2, 20);
	for (int i : vc8) {
		cout << i << " ";
	}
	cout << endl;
	

}

void listFunction() {
	// every thing in vector is available in list
	// list allows and added feature which vector does not provide out of the box
	// it lets you add element at the beginning og the list
}

int main() {

	power();
	pairFunction();
	vectorFunction();
	listFunction();


	return 0;
}