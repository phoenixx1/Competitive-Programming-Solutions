//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int rainCount, clothCount, outCount, clothCollectedCount = 0;
    cin >> rainCount >> clothCount >> outCount;
    int rainTime[rainCount];
    int dryTime[clothCount];
    for(int i=0; i<rainCount; i++){
        cin >> rainTime[i];
    }
    for(int i=0; i<clothCount; i++){
        cin >>dryTime[i];
    }
    for(int i=1; i<rainCount; i++){
        int check = rainTime[i] - rainTime[i-1];
        for(int i=0; i<clothCount; i++){
            if(check>=dryTime[i]){
                clothCollectedCount++;
                dryTime[i] = 99999;
            }
        }
    }
    cout << clothCollectedCount;
}