class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best_without_stock = 0, best_with_stock = INT_MIN;
        for(int x : prices){
            best_with_stock = max(best_with_stock, best_without_stock - x);
            best_without_stock = max(best_without_stock, best_with_stock + x);
        }
        return best_without_stock;
    }
};