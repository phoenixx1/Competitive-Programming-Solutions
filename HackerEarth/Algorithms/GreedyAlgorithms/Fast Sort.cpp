//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string pat, str;
		cin >> pat >> str;
		vector<pair<int, char>> ans;
		for(int i=0; i<str.size(); i++){
			int loc = find(pat.begin(), pat.end(), str[i]) - pat.begin();
			ans.push_back(make_pair(loc, str[i]));
		}
		sort(ans.begin(), ans.end());
		for(int i=0; i<ans.size(); i++){
			cout << ans[i].second; 
		}
		cout << endl;
	}
    return 0;
}