class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> arr;
        for(int i=0;i<queries.size();i++){
            int j=0;
            int j1=1;
            int l=queries[i][j];
            int m=queries[i][j1];
            
            long long n=0;
            for(int k=l;k<=m;k++){
                
                char c=s[k];
                long long r=c-'0';
                n=n*10+r;
            }
            long long x=0;
        while(n>0){
            long long t=n%10;
            if(t==0){
                n/=10;
                continue;
            }
            x=x*10+t;
            n/=10;
        }
        long long rev=0;
        long long sum=0;
        while(x>0){
            long long m=x%10;
            sum+=m;
            rev=rev*10+m;
            x/=10;
        } 
        long long check=pow(10,9);
        check+=7;
        long long p;
        p=(sum*rev)%check;
        arr.push_back(p); 
        }
        return arr;
        
        
    }
};