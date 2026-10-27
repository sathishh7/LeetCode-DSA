class Solution {
public:
    long long wonderfulSubstrings(string word) {
        long long count =0;
        
        string s;
        vector<int> check;
        for(int i=0;i<word.size();i++){
            for(int j=i;j<word.size();j++){
                s=word.substr(i,j-i+1);
                long long A=0;
                long long B=0;
                long long C=0;
                long long D=0;
                long long E=0;
                long long F=0;
                long long G=0;
                long long H=0;
                long long I=0;
                long long J=0;
                if(s.size()==1){
                    count++;
                    continue;
                }
                for(int k=0;k<s.size();k++){
                    if(s[k]=='a'){
                        A++;
                    }
                    if(s[k]=='b'){
                        B++;
                    }
                    if(s[k]=='c'){
                        C++;
                    }
                    if(s[k]=='d'){
                        D++;
                    }
                    if(s[k]=='e'){
                        E++;
                    }
                    if(s[k]=='f'){
                        F++;
                    }
                    if(s[k]=='g'){
                        G++;
                    }
                    if(s[k]=='h'){
                        H++;
                    }
                    if(s[k]=='i'){
                        I++;
                    }
                    if(s[k]=='j'){
                        J++;
                    }

                }
                
                
                check.push_back(A);
                check.push_back(B);
                check.push_back(C);
                check.push_back(D);
                check.push_back(E);
                check.push_back(F);
                check.push_back(G);
                check.push_back(H);
                check.push_back(I);
                check.push_back(J);
            
                int n=0;
                for(int l=0;l<check.size();l++){
                    if(check[l]%2!=0){
                        n++;
                    }
                }
                check.clear();
                if(n<=1){
                    count++;
                }
        }     
            
    }
        return count;
    }
};