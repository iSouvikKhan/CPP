

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
	list<int> ls = { 6,7 };
	ls.push_front(5);
	for (int i : ls) {
		cout << i << " ";
	}
	cout << endl;
}

void stackFunction() {
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);

	cout << "Size " << st.size() << endl;

	cout << st.top() << endl;
	cout << st.top() << endl;
	cout << st.top() << endl;
	// always returns the top most element

	st.pop();
	cout << st.top() << endl;

	stack<int> st1;
	st1.push(11);
	st1.push(12);
	st1.push(13);
	st1.push(14);
	st1.push(15);
	st1.push(16);
	st1.emplace(17);

	while (!st1.empty()) {
		cout << st1.top() << " ";
		st1.pop();
	}
	cout << endl;

}

void queueFunction() {
	queue<int>qu;
	qu.push(1);
	qu.emplace(2);
	qu.push(3);
	qu.push(4);
	while (!qu.empty()) {
		cout << qu.front() << " ";
		qu.pop();
	}
	cout << endl;
}

void priority_queueFunction() {
	// stores the highest/biggest element at the top
	// max heap
	priority_queue<int> pq;
	pq.push(2);
	pq.push(5);
	pq.push(10);
	pq.push(3);
	pq.push(7);

	cout << "PQ top ele " << pq.top() << endl;

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	// min heap
	priority_queue<int, vector<int>, greater<int>> pq1; // ", vector<int>, greater<int>" this part u need to remember to make min heap and data type will also remain same in 3 of them
	pq1.push(2);
	pq1.push(5);
	pq1.push(10);
	pq1.push(3);
	pq1.push(7);

	cout << "PQ top ele " << pq1.top() << endl;

	while (!pq1.empty()) {
		cout << pq1.top() << " ";
		pq1.pop();
	}
	cout << endl;


}

void setFunction() {
	// stores only unique elements in ascending order
	set<int> st;
	st.insert(1);
	st.insert(12);
	st.insert(12);
	st.insert(12);
	st.insert(13);
	st.insert(13);
	st.insert(14);

	for (auto i : st) {
		cout << i << " ";
	}
	cout << endl;

	// set iterator
	auto it = st.find(12);
	if (it != st.end()) { // because .end() points to the place after the last ele of the set so we use !=
		cout << *it << endl;
	}
	
	cout << st.count(12) << endl; // returns 1 if element is present in the set

	auto itt = st.end();
	itt--;
	st.erase(itt);
	for (auto i : st) {
		cout << i << " ";
	}
	cout << endl;

	set<int> st1;
	st1.insert(1);
	st1.insert(2);
	st1.insert(3);
	st1.insert(12);
	st1.insert(12);
	st1.insert(4);
	st1.insert(5);
	for (auto i : st1) {
		cout << i << " ";
	}
	cout << endl;
	auto begin = st1.begin();
	auto end = st1.end();
	begin++;
	end--;
	st1.erase(begin, end);
	for (auto i : st1) {
		cout << i << " ";
	}
	cout << endl;

	// lower bound
	// returns the element (iterator) which is greater than or equal to the supplied number
	set<int> st2;
	st2.insert(1);
	st2.insert(2);
	st2.insert(3);
	st2.insert(12);
	st2.insert(12);
	st2.insert(4);
	st2.insert(5);
	auto it2 = st2.lower_bound(2);
	cout << *it2 << endl;

	auto it3 = st2.lower_bound(200);
	if (it3 == st2.end()) {
		cout << "lower_bound end has come" << endl;
	}

	// upper bound
	// returns the element (iterator) which is greater than the supplied number (equal to does not work here)
	auto it5 = st2.upper_bound(4);
	cout << *it5 << endl;

	auto it4 = st2.upper_bound(200);
	if (it4 == st2.end()) {
		cout << "upper_bound end has come" << endl;
	}


}

void multisetFunction() {
	// similar to set
	// it also stores repeating elements in ascending order
	multiset<int> ml;
	ml.insert(3);
	ml.insert(1);
	ml.insert(1);
	ml.insert(1);
	ml.insert(1);
	ml.insert(3);
	ml.insert(1);
	ml.insert(2);
	ml.insert(2);
	for (int i : ml) {
		cout << i << " ";
	}
	cout << endl;

	ml.erase(1); // removes all the 1's
	for (int i : ml) {
		cout << i << " ";
	}
	cout << endl;

	multiset<int> ml1;
	ml1.insert(3);
	ml1.insert(1);
	ml1.insert(1);
	ml1.insert(1);
	ml1.insert(1);
	ml1.insert(3);
	ml1.insert(1);
	ml1.insert(2);
	ml1.insert(2);
	ml1.erase(ml1.find(1)); // .find() returns an iterator of the first 1 present in the multiset and that 1 is removed
	for (int i : ml1) {
		cout << i << " ";
	}
	cout << endl;

	cout << ml1.count(1) << endl; // returns the total number of 1's present in the multiset



}

void unordered_setFunction() {
	// lower_bound and upper_bound does not work here
	// no order is maintained
	// provides better TC
	//unordered_set<int> st;
	//st.insert(3);
	//st.insert(2);
	//st.insert(4);
	//st.insert(5);
	//st.insert(1);
	//for (auto i; st) {
	//	cout << i << " ";
	//}
	//cout << endl;

	//auto it1 = st.find(2); // it happens in constant TC O(1)



}

void mapFunction() {
	// stores unique keys in ascending order
	map<int, string> m;
	m.insert({ 1, "one" });
	m.emplace(2, "two");
	m[3] = "three";
	m[1] = "four"; // updating the value of key 1
	for (auto p : m) {
		// here auto is of pair type
		cout << p.first << ": " << p.second << "\n";
	}

	auto it1 = m.find(3);
	cout << (*it1).first << "->" << (*it1).second << endl;

	// same goes with unordered_map
	// no order is maintained and .find() happens in almost constant TC
}

void multimap() {
	// stores pairs by sorting key 
	//multimap<int, string> mm;
	//mm.insert({ 1, "one" });
	//mm.insert({ 2, "uno" });
	//mm.insert({ 1, "two" });
	//mm.insert({ 3, "uno" });
	//mm.insert({ 1, "four" });

	//for (auto i : mm) {
	//	cout << i.first << "->" << i.second << endl;
	//}
	//auto range = mm.equal_range(1); // returns 2 pairs which tells a range in which the elements are present
	//for (auto it = range.first; it != range.second; ++it) {
	//	cout << (*it).first << ": " << (*it).second << "\n";
	//}
}

void sortFunction() {
	
	int arr[5] = { 2,4,5,1,6 };
	sort(arr, arr + 5); // arr+0 to arr+5 -> sort with in this range from 0th index to 5th index [till the 5th index but excluding 5th index]
	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;

	int arr1[5] = { 2,4,5,1,6 };
	sort(arr1+1, arr1+3); // arr+1 to arr+3 [excluding 3rd index]
	for (int i : arr1) {
		cout << i << " ";
	}
	cout << endl;

	vector<int> v = { 3, 1, 4, 1, 5, 9 };
	sort(v.begin(), v.end()); // sorts the entire vector
	for (int x : v) {
		cout << x << " ";
	}
	cout << endl;

}

void accumulateFunction() {
	int arr[5] = { 2,4,5,1,6 };
	cout << accumulate(arr, arr + 5, 0) << endl; // starts from sum 0
	cout << accumulate(arr, arr + 5, 1) << endl; // starts from sum 1
	cout << accumulate(arr, arr + 5, 2) << endl; // starts from sum 2

	vector<int> v = { 1, 2, 3, 4, 5 };
	int sum = accumulate(v.begin(), v.end(), 0);
	cout << "Sum: " << sum << endl;
}

void countFunction() {
	int arr[8] = { 2,4,5,1,1,1,1,6 };
	cout << count(arr, arr + 8, 1) << endl; // figure out how many times 1 appears in the gicen range

}

void findFunction() {
	int arr[8] = { 2,4,5,1,1,1,1,6 };
	auto it = find(arr, arr + 8, 1); // finds 1
	cout << *it << endl;

	auto it1 = find(arr, arr + 8, 7); // finds 7
	if (it1 == (arr + 8)) {
		cout << "end" << endl;
	}
}

void next_permutationFunction() {
	// gives next permutation in sorted order
	string st1 = "abc";
	do {
		cout << st1 << endl;
	} while (next_permutation(st1.begin(), st1.end()));
	cout << endl;
	string st2 = "bcd";
	do {
		cout << st2 << endl;
	} while (next_permutation(st2.begin(), st2.end()));
	cout << endl;

}

void prev_permutationFunction() {
	// prints in reverse order
	string st1 = "cba";
	do {
		cout << st1 << endl;
	} while (prev_permutation(st1.begin(), st1.end()));
	cout << endl;
}

void max_element_and_min_elementFunction() {
	int arr[] = { 2,5,1,7,4,8 };
	auto it = max_element(arr, arr + 6); // [arr is the first element and arr+6 is the next elements, excluding 6 means until 5]
	cout << "Max val : " <<  *it << endl;

	auto it1 = *max_element(arr, arr + 6); // you can play with the *
	cout << "Max val : " << it1 << endl;

	auto it2 = min_element(arr, arr + 6);
	cout << "Min val : " << *it2 << endl;
}

void reverseFunction() {
	int arr[] = { 2,5,1,7,4,8 };
	reverse(arr, arr + 6);
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


bool internalComparator(int el1, int el2) {
	// returns true if el1 should come before el2 (sorting sense)
	// returns false if el1 should be kept later
	
	// here we are tweaking the logic

	if (el1 < el2) {
		return false;
	}
	else {
		return true;
	}
}

bool internalComparator1(pair<int, int>el1, pair<int, int>el2) {
	if (el1.second > el2.second) return true;
	if (el1.second < el2.second) return false;
	if (el1.first < el2.first) return true;
	return false;

}

void comparatorFunction() {
	int arr[] = { 2,5,1,7,4,8 };
	sort(arr, arr + 6, internalComparator);
	for (int i : arr) {
		cout << i <<" ";
	}
	cout << endl;

	pair<int, int> pr[] = { {1,6}, {1,5}, {2,6}, {2,9}, {3,9} };
	// sort it according to the second element
	// {2,9}, {3,9}, {1,6}, {2,6}, {1,5}
	sort(pr, pr + 5);
	for (auto i : pr) {
		cout << "{" << i.first << "," << i.second << "}" << " "; // this is not coming as expected follow next for loop
	}
	cout << endl;

	pair<int, int> pr2[] = { {1,6}, {1,5}, {2,6}, {2,9}, {3,9} };
	sort(pr2, pr2 + 5, internalComparator1);
	for (auto i : pr2) {
		cout << "{" << i.first << "," << i.second << "}" << " ";
	}
	cout << endl;


}

int main() {

	power();
	pairFunction();
	vectorFunction();
	listFunction();
	stackFunction();
	queueFunction();
	priority_queueFunction();
	setFunction();
	multisetFunction();
	unordered_setFunction();
	mapFunction();

	// functions and algorithms
	sortFunction();
	accumulateFunction();
	countFunction();
	findFunction();
	next_permutationFunction();
	prev_permutationFunction();
	max_element_and_min_elementFunction();
	reverseFunction();
	comparatorFunction();

	return 0;
}