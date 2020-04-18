#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> input;
	int x;
	vector<int>::const_iterator it;
	while (cin >> x && x != 42){
		input.emplace_back(x);
	}
	for (it = input.begin(); it != input.end(); ++it){
		cout << *it << endl;
	}
	return 0;
}