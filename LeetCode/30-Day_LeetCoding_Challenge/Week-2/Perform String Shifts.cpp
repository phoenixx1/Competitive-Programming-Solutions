class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        for(int i=0; i<shift.size(); i++){
            vector<int> op = shift[i];
            int dir = op[0];
            int amt = op[1];
            if(dir == 0){
                amt = amt % s.size();
                for(int i=0; i<amt; i++){
                    char temp = s[0];
                    auto it = s.begin();
                    s.erase(it);
                    s.push_back(temp);
                }
            }else{
                amt = amt % s.size();
                for(int i=0; i<amt; i++){
                    char temp = s[s.size()-1];
                    s.pop_back();
                    s = temp + s;
                }
            }
        }
        return s;
    }
};