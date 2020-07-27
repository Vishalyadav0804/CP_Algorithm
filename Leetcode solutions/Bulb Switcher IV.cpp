class Solution {
public:
    int minFlips(string target) {
        int n=target.size();
        if(n==0) return 0;
        int count=0,firstzero=-1,pos=-1;
        for(int i=0;i<n;i++){
            if(target[i]=='1'){
                pos=i;
                break;
            }
        }
        if(pos==-1) return 0;
        for(int i=0;i<n;i++){
            if(target[i]=='1'){
                while(target[i+1]=='1'){
                    i++;
                }
                count++;
            }
        }
        for(int i=pos;i<n;i++){
            if(target[i]=='0'){
                firstzero=i;
                break;
            }
        }
        if(firstzero==-1) return count;
        for(int i=firstzero;i<n;i++){
            if(target[i]=='0'){
                while(target[i+1]=='0'){
                    i++;
                }
                count++;
            }
        }
        return count;
    }
};
