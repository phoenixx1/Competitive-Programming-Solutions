//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int prec(char opr){
    if (opr == '+' || opr == '-')
        return 1;
    else if (opr == '*' || opr == '/')
        return 2;
    else if (opr == '^')
        return 3;
    else
        return -1;
}

string infixToPostfix(const std::string &exp){
    string postfix;
    stack<char> stk;

    for (int i = 0; exp[i]; i++){
        if (exp[i] >= 'a' && exp[i] <= 'z' || exp[i] >= 'A' && exp[i] <= 'Z'){
            postfix.push_back(exp[i]);
        }else if (exp[i] == '('){
            stk.push('(');
        }else if (exp[i] == ')'){
            while (!stk.empty() && stk.top() != '('){
                postfix.push_back(stk.top());
                stk.pop();
            }
            if (!stk.empty())
                stk.pop();
            else{
                cerr << "Invalid infix expression: " << exp << endl;
                exit(1);
            }
        }else{
            while (!exp.empty() && prec(exp[i]) <= prec(stk.top())){
                postfix.push_back(stk.top());
                stk.pop();
            }
            stk.push(exp[i]);
        }
    }

    while (!stk.empty()){
        postfix.push_back(stk.top());
        stk.pop();
    }

    return postfix;
}

int main()
{

    int i;
    string s;
    cin >> i;

    while (i--)
    {
        cin >> s;
        cout << infixToPostfix(s) << endl;
    }

    return 0;
}