class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++){
            if(strs[i].size() > 0){
                string temp = "";
                string comp = strs[i];
                int j = 0;
                if(prefix != comp){
                    while(comp[j] == prefix[j]){
                        temp += prefix[j];
                        j++;
                    }
                    prefix = temp;
                }        
            }else{
                prefix = "";
            }
        }
        return prefix;
    }
};