class Solution {
public:
    string intToRoman(int num) {
        string s;
        char m='M';
        char d='D';
        char c='C';
        char l='L';
        char x='X';
        char v='V';
        char i='I';

        while((num-1000)>=0){
            num-=1000;
            s.push_back(m);
        }
        if(num>=900){
            num-=900;
            s.push_back(c);
            s.push_back(m);
        }
        while((num-500)>=0){
            num-=500;
            s.push_back(d);
        }
        if(num==400){
            num-=400;
            s.push_back(c);
            s.push_back(d);
        }
        while((num-100)>=0){
            num-=100;
            s.push_back(c);
        }
        if((num-90)>=0){
            num-=90;
            s.push_back(x);
            s.push_back(c);

        }
        while((num-50)>=0){
            num-=50;
            s.push_back(l);
        }
        if((num-40)>=0){
            num-=40;
            s.push_back(x);
            s.push_back(l);

        }
        
        while((num-10)>0){
            num-=10;
            s.push_back(x);
        }
        while(num<10&& num>0){
            while(num<4 && num>0){
                num-=1;
                s.push_back(i);
            }
            if(num==4){
                num-=4;
                s.push_back(i);
                s.push_back(v);
            }
            if(num==5){
                num-=5;
                s.push_back(v);
            }
            if(num==6){
                num-=6;
                s.push_back(v);
                s.push_back(i);
            }
            if(num==7){
                num-=7;
                s.push_back(v);
                s.push_back(i);
                s.push_back(i);
            }
            if(num==8){
                num-=8;
                s.push_back(v);
                s.push_back(i);
                s.push_back(i);
                s.push_back(i);
            }
            if(num==9){
                num-=9;
                s.push_back(i);
                s.push_back(x);
                
            }
        }
        return s;
    } 
};