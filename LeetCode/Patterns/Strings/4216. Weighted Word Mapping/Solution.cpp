class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<int> arr;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            long long sum=0;
            
            for(int j=0;j<temp.size();j++){
                sum+=weights[temp[j]-'a'];
            }
            sum%=26;
            arr.push_back(sum);
        }
        string s;
        for(int i=0;i<arr.size();i++){
            int index=arr[i];
            index=25-index;
            char c=index+'a';
            s.push_back(c);
        }
        return s;
    }
};