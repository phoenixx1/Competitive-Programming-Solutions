//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int prec(char c) { 
    if(c == '^')  return 3; 
    else if(c == '*' || c == '/') return 2; 
    else if(c == '+' || c == '-') return 1; 
    else return -1; 
} 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> opr;
        string ans = "";

        for(int i = 0; i < n; i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
                ans += s[i];
            }else if(s[i] == '('){
                opr.push('(');
            }else if(s[i] == ')'){
                while(!opr.empty() && opr.top() != '('){
                    char c = opr.top();
                    opr.pop();
                    ans += c;
                }
                if(opr.top() == '('){
                    opr.pop();
                }
            }else{
                while(!opr.empty() && prec(s[i]) <= prec(opr.top())){ 
                    char c = opr.top(); 
                    opr.pop(); 
                    ans += c; 
                } 
                opr.push(s[i]); 
            }
        }
        while(!opr.empty()) { 
            char c = opr.top(); 
            opr.pop(); 
            ans += c; 
        } 
        cout << ans << endl;
    }
    return 0;
}