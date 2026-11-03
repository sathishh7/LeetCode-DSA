class Solution {
public:
    
    int countGoodNumbers(long long n) {
        // Your code goes here
        long long mod=1000000007;
        long long count=1;
        for(long long i=0;i<n;i++){
            if(i%2==0){
                count=(count*5)%mod;
            }
            else{
                count=(count*4)%mod;
            }
        }
        return count;
    }
};