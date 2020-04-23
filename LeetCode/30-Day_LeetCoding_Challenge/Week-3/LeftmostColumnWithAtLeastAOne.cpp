/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> dim = binaryMatrix.dimensions();
        int H = dim[0], W = dim[1];
        int ans = W;
        for(int row = 0; row < H; ++row){
            while(ans > 0 && binaryMatrix.get(row, ans - 1) == 1){
                ans--;
            }
        }
        if(ans == W){
            ans = -1;
        }
        return ans;
        
    }
};