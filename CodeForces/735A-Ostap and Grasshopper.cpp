//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, start;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'G'){
            start = i;
        }
    }
    bool flag = false;
    int x = start;
    while(x >= 0){
        if(flag){
            break;
        }
        if(s[x] == '#'){
            break;
        }
        if(s[x] == 'T'){
            flag = true;
        }
        x -= k;
    }
    x = start;
	while(x < s.size()){
		if(flag){
			break;
        }
		if(s[x] == '#'){
			break;
        }
		if(s[x] == 'T'){
			flag = true;
        }
		x += k;
	}
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}