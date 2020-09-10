//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, z;
        cin >> n >> z;
        int temp;
        vector<int> a(10001, 0);
        for(int i = 0; i < n; i++){
            cin >> temp;
            a[temp]++;
        }
        int count = 0;
        for(int i = 10000; i > 0; i--){
	        while(z>0 && a[i]){
	            z -= i;
	            a[i / 2]++;
	            a[i]--;
	            count++;
	        }
	        if(z <= 0)
	            break;
	    }
        if(z <= 0) cout << count << endl;
        else cout << "Evacuate" << endl;
    }
    return 0;
}