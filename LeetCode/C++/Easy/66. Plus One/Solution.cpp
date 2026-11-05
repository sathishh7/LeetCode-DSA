class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=0;
        for(int i=0;i<digits.size();i++){
            n*=10;
            n+=digits[i];
        }
        n+=1;
        vector<int> plus;
        int temp=0;
        while(n>0){
            temp=n%10;
            plus.push_back(temp);
            n/=10;
        }
        int i=0;
        int j=plus.size()-1;
        while(i<j){
            int temp =plus[j];
            plus[j]=plus[i];
            plus[i]=temp;
            i++;
            j--;
        }
        return plus;
    }
};