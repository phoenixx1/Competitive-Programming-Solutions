//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, r;
    cin >> l >> r;
    for (int i=l ; i<=r ; i++){ 
        int num = i; 
        bool visited[10] = {false};
        while (num){
            if (visited[num % 10]) 
                break; 
            visited[num%10] = true; 
            num = num/10; 
        } 
        if (num == 0){
            cout << i;
            break;
        }else if(i==r){
            cout << -1;
        }
    } 
    return 0;
}