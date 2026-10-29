class Solution {
public:
    
    int beautySum(string s) {
        int beauty_sum=0;
       
        for(int i=0;i<s.size();i++){
            string sub;
            vector<int> hash(26,0);
            for(int j=i;j<s.size();j++){
                sub.push_back(s[j]);
                hash[s[j]-'a']++;
                int min=INT_MAX;
                int max=hash[0];
                for(int k=0;k<hash.size();k++){
                    if(hash[k]>0){
                        if(min>hash[k]){
                            min=hash[k];
                        }
                    }
                    if(max<hash[k]){
                        max=hash[k];
                    }

                }
               
                beauty_sum+=(max-min);

            }
        }
        return beauty_sum;
    }
};