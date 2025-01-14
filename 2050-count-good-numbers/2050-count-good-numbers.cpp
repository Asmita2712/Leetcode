class Solution {
public:

    const int MOD = 1e9+7;

    long long expMod(long long base, long long exp, long long MOD){
        long long result = 1;;

        while(exp > 0){
            if(exp%2 == 1){
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exp /= 2;
        }

        return result;
    
    }

    int countGoodNumbers(long long n) {
     
        long long even = (n+1)/2;
        long long odd = n/2;

        long long even_ways = expMod(5, even, MOD);
        long long odd_ways = expMod(4, odd, MOD);

        return (even_ways * odd_ways) % MOD;
    }
};