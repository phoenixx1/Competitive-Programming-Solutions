class Solution {
public:
    bool isPrime(int n){
        if (n <= 1) 
            return false; 
        for (int i = 2; i <= sqrt(n); i++) 
            if (n % i == 0) 
                return false; 
        return true; 
    }
    int countPrimes(int n) {
        int x = 2;
        int count = 0;
        while(x < n){
            if(isPrime(x)){
                count++;
            }
            x++;
        }
        return count;
    }
};