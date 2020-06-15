class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0){
            return 0;
        }
        int i=0,j=s.size()-1,count=1;
        while(i<=j){
            if(s[i]!=s[j]){
                count=2;
                break;
            }
            i++;
            j--;
        }
        return count;
    }
};
