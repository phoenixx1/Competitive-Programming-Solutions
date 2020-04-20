// Queues and stack
// author @Nishant

#include<bits/stdc++.h>
using namespace std;

class Solution {
    stack<char> st;
    queue<char> qu;
    public:
        void pushCharacter(char ch){
            st.push(ch);
        }
        void enqueueCharacter(char ch){
            qu.push(ch);
        }
        char popCharacter(){
            char x = st.top();
            st.pop();
            return x;
        }
        char dequeueCharacter(){
            char x = qu.front();
            qu.pop();
            return x;
        }
};

int main() {
    string s;
    getline(cin, s);
    
    Solution obj;
    
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}