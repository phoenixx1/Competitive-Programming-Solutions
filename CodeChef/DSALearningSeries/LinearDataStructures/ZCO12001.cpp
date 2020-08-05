//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, nested_depth=-1,open=0,first_pos=-1,count=0,matched_br=0,max_matched_br=-1,first_pos_matched_br =-1;
    cin >> t;
    int br;
    while(t--){
        cin >> br;
        count++;
        if(br == 1){
            open++;
            if(open > nested_depth){
                first_pos = count;
                nested_depth = open;
            }
        }else if(br == 2){
            open--;
	        matched_br+=2;
	        
	        if(matched_br>max_matched_br){
	            max_matched_br = matched_br;
	            first_pos_matched_br = count-max_matched_br+1;
	        }
	        if(open==0){
	            matched_br=0;
	        }
        }
    }
    cout << nested_depth << " " << first_pos << " " << max_matched_br << " " << first_pos_matched_br << endl;
    return 0;
}