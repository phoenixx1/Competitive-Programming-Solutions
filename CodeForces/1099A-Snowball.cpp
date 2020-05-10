//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
	int w, h, u1, d1, u2, d2;
	cin >> w >> h >> u1 >> d1 >> u2 >> d2;
	++h;
    while(h--){
        w += h; 
        if(h == d1){
			w -= u1;
		}
        if(h == d2){
			w -= u2;
		}
        if(w < 0){
			w = 0;
		}
    }
	cout << w;
    return 0;
}