class Solution {
public:
    int myAtoi(string str) {
        int loc = 0;
        while(str[loc] == ' '){
            loc++;
        }
        if(int(str[loc]) != 45 && int(str[loc]) != 43){
            if(int(str[loc]) > 57 || int(str[loc]) < 48){
                return 0;
            }   
        }
        
        long result = 0;
        bool isNeg = false;
        if(int(str[loc]) == 45){
            isNeg = true;
            loc++;
        }else if(int(str[loc]) == 43){
            loc++;
        }
        for(int i = loc; i < str.size(); i++){
            if(int(str[i]) <= 57 && int(str[i]) >= 48){
                int no = str[i] - '0';
                result = result * 10 + no;
                if (result > INT_MAX) {
                    if(isNeg){
                        return INT_MIN;
                    }else{
                        return INT_MAX;
                    }   
                }
            }else{
                break;
            }
        }
        if(isNeg){
            result *= -1;
        }
        return result;
    }
};