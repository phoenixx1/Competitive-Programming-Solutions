//author @Nishant

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a;
        deque<long long> arr;
        cin >> a;
        long long AS = a, BS = 0;
        long long AC = a, BC = 0;
        for(long long i = 2; i <= n; i++){
            cin >> a;
            arr.push_back(a);
        }
        long long count = 1, last = 0;
        while(!arr.empty()){
            if(last == 0){
                while(!arr.empty() && BC <= AC){
                    BC += arr.at(arr.size() - 1);
                    arr.pop_back();
                }
                BS += BC;
                last = 1;
                AC = 0;
                count++;
            }else{
                while(!arr.empty() && AC <= BC){
                    AC += arr.at(0);
                    arr.pop_front();
                }
                AS += AC;
                last = 0;
                BC = 0;
                count++;
            }
        }
        cout << count << " " << AS << " " << BS << endl;
    }
    return 0;
}