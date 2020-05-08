class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n - 1] < 9){
            digits[n - 1]++;
            return digits;
        }else{
            int carry = 1;
            for(int i = n-1; i >= 0; i--){
                if(digits[0] == 9 && i == 0){
                    digits[i] = 0;
                    digits.insert(digits.begin(), 1);
                }else{
                    if(carry == 0){
                        break;
                    }else{
                        if(digits[i] + carry > 9){
                            digits[i] = 0;
                            carry = 1;
                        }else{
                            digits[i] += carry;
                            carry = 0;
                        }
                    }
                }
            }
        }
        return digits;
    }
};