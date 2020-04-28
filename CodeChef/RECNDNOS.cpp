//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a;
        map<int, vector<int>> ans;
        for(int i = 0; i < n; i++){
            cin >> a;
            ans[a].push_back(i);
        }
        //[1,2,2,1,2,1,1,1,1]
        map<int, vector<int>>::iterator it;
        int answer = 0, max = 0;
        for(it = ans.begin(); it != ans.end(); ++it){
            int count = 0;
            int n = it->second.size();
            for(int j = 0; j < n; j++){
                int temp;
                if(j != n - 1){
                    temp = it->second[j+1] - it->second[j];
                }else{
                    temp = it->second[j-1] - it->second[j];
                }
                if(temp == 1){
                    count++;
                    j++;
                }else{
                    count++;
                }
            }
            if(max < count){
                answer = it->first;
                max = count;
            }
        }
        cout << answer << endl;
    }
    return 0;
}