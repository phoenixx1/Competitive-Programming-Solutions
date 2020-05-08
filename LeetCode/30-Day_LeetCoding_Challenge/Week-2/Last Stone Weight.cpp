class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            sort(stones.begin(), stones.end(), greater<int>());
            int diff = stones[0] - stones[1];
            vector<int>::iterator it = stones.begin();
            stones.erase(it);
            stones.erase(it);
            if(diff != 0){
                stones.push_back(diff);
            }
        }
        if(stones.size() == 1){
            return stones[0];
        }else{
            return 0;
        }
    }   
};