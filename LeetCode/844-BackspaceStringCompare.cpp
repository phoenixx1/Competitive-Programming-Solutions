class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string Ss = "", Tt = "";
        for(char x: S){
            if(x != '#'){
                Ss += x;
            }else{
                if(!Ss.empty()){
                    Ss.pop_back();
                }
            }
        }
        for(char x: T){
            if(x != '#'){
                Tt += x;
            }else{
                if(!Tt.empty()){
                    Tt.pop_back();
                }
            }
        }
        if(Ss == Tt){
            return true;
        }else{
            return false;
        }
    }
};