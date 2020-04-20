//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, count = 0;
    cin >> x;
    vector<int> binary;
    vector<int> countT;
    while(x>=1){
        binary.push_back(x%2);
        x /= 2;
    }
    for(int i=0; i<binary.size(); i++){
        if(binary.at(i) != 1){
            countT.push_back(count);
            count = 0;
        }else{
            count++;
        }
    }
    countT.push_back(count);
    cout << *max_element(countT.begin(), countT.end());
}