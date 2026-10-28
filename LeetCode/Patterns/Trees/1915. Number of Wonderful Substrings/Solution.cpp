class Solution {
public:
    long long wonderfulSubstrings(string word){
    long long count=0;
            for(int i=0;i<word.size();i++){
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
                for(int j=i;j<word.size();j++){
                    
                    if(word[j]=='a'){
                        A++;
                    }
                    if(word[j]=='b'){
                        B++;
                    }
                    if(word[j]=='c'){
                        C++;
                    }
                    if(word[j]=='d'){
                        D++;
                    }
                    if(word[j]=='e'){
                        E++;
                    }
                    if(word[j]=='f'){
                        F++;
                    }
                    if(word[j]=='g'){
                        G++;
                    }
                    if(word[j]=='h'){
                        H++;
                    }
                    if(word[j]=='i'){
                        I++;
                    }
                    if(word[j]=='j'){
                        J++;
                    }
                    if(A%2!=0&&B%2==0&&C%2==0&&D%2==0&&E%2==0&&F%2==0&&G%2==0&&H%2==0&&I%2==0&&J%2==0){
                        count++;
                    }
                    if(A%2==0&&B%2!=0&&C%2==0&&D%2==0&&E%2==0&&F%2==0&&G%2==0&&H%2==0&&I%2==0&&J%2==0){
                        count++;
                    }
                    if(A%2==0&&B%2==0&&C%2!=0&&D%2==0&&E%2==0&&F%2==0&&G%2==0&&H%2==0&&I%2==0&&J%2==0){
                        count++;
                    }
                     if(A%2==0&&B%2==0&&C%2==0&&D%2!=0&&E%2==0&&F%2==0&&G%2==0&&H%2==0&&I%2==0&&J%2==0){
                        count++;
                    }
                     if(A%2==0&&B%2==0&&C%2==0&&D%2==0&&E%2!=0&&F%2==0&&G%2==0&&H%2==0&&I%2==0&&J%2==0){
                        count++;
                    }
                     if(A%2==0&&B%2==0&&C%2==0&&D%2==0&&E%2==0&&F%2!=0&&G%2==0&&H%2==0&&I%2==0&&J%2==0){
                        count++;
                    }
                     if(A%2==0&&B%2==0&&C%2==0&&D%2==0&&E%2==0&&F%2==0&&G%2!=0&&H%2==0&&I%2==0&&J%2==0){
                        count++;
                    }
                     if(A%2==0&&B%2==0&&C%2==0&&D%2==0&&E%2==0&&F%2==0&&G%2==0&&H%2!=0&&I%2==0&&J%2==0){
                        count++;
                    }
                     if(A%2==0&&B%2==0&&C%2==0&&D%2==0&&E%2==0&&F%2==0&&G%2==0&&H%2==0&&I%2!=0&&J%2==0){
                        count++;
                    }
                     if(A%2==0&&B%2==0&&C%2==0&&D%2==0&&E%2==0&&F%2==0&&G%2==0&&H%2==0&&I%2==0&&J%2!=0){
                        count++;
                    
                }
                if(A%2==0&&B%2==0&&C%2==0&&D%2==0&&E%2==0&&F%2==0&&G%2==0&&H%2==0&&I%2==0&&J%2==0){
                        count++;
                    
                }
                
            }
        }
        return count;
}

};