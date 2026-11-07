class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        /*int no_receive;
        int k=0;
        vector<int> arr;
        while(k<queries.size()){
            no_receive=0;
            map<int,int> dict;
            for(int i=0;i<logs.size();i++){
                for(int j=1;j<logs[0].size();j++){
                    if(logs[i][j]>=(queries[k]-x)&&logs[i][j]<=queries[k]){
                        dict[logs[i][0]]++;
                    }
                }
            }
            no_receive=(n-dict.size());
            arr.push_back(no_receive);
            k++;
        }
        return arr;

        
    }
};