#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int> > mat, vector<vector<int> > &trans, int L){
    for(int i = 0; i < L + 1; ++i){
        for(int j = 0; j < L + 1; ++j){
            trans[j][i] = mat[i][j];
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int> > mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        vector<int> a(n, 0);
        vector<vector<int> > trans(n, vector<int>(n));
        trans = mat;
        int count = 0;
        while(true){
            vector<int> a(n, 0);
            int L = 0;
            for(int i = 0; i < n; i++){
                if(mat[0][i] == i + 1){
                    a[i] = 1;
                }else{
                    L = i;
                }
            }
            if(L == 0){
                break;
            }
            transpose(mat, trans, L);
            mat = trans;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}