#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        if(s == ""){
            return true;
        }
        for (int i = 0; s[i]!='\0'; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
        s.erase(std::remove_if(s.begin(), s.end(), not1(std::ptr_fun( (int(*)(int))std::isalnum ))), s.end());
        //s.erase(remove(s.begin(), s.end(), ' '), s.end());
        int l = 0;
        int h = s.size() - 1;
        while(h > l){
            if(s[l++] != s[h--]){
                return false;
            }
        }
        return true;
    }

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
    return 0;   
}