class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> s;
        int count = 0;
        for(int x : arr){
            s.insert(x);
        }
        for(int x : arr){
            if(s.count(x+1) == 1){
                count++;
            }
        }
        return count;
    }
};