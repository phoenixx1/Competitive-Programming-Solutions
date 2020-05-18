//author @Nishant

#include <bits/stdc++.h>

using namespace std;

bool check2(int x, int n, string s){
    int pos = x;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (s[pos] == '(')
            count++;

        if (s[pos] == ')'){
            count--;
            if (count < 0)
                return false;
        }
        if (pos == n - 1)
            pos = 0;
        else
            pos++;
    }
    if (count == 0)
        return true;
    else
        return false;
}

int main(){
    string s;
    cin >> s;
    int c = 0;
    int n = s.length();

    for (int i = 0; i < n; i++){
        if (s[i] == '(')
            if (check2(i, n, s))
                c++;
    }
    cout << c;
}