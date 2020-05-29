class Solution {
public:
    string printSubStr(string s,int low,int high){
        string str="";
        for(int i=low;i<=high;i++){
            str+=s[i];
        }
        return str;
    }
    string longestPalindrome(string s) {
        if(s.size()==0){
            return "";
        }
        int start=0,maxlength=1,len=s.length(),low,high;
        for(int i=1;i<len;i++){
            low=i-1;
            high=i;
            while(low>=0 && high<len && s[low]==s[high]){
                if(high-low+1>maxlength){
                    start=low;
                    maxlength=high-low+1;
                }
                low--;
                high++;
            }
            low=i-1;
            high=i+1;
            while(low>=0 && high<len && s[low]==s[high]){
                if(high-low+1>maxlength){
                    start=low;
                    maxlength=high-low+1;
                }
                low--;
                high++;
            }
        }
        return printSubStr(s,start,start+maxlength-1);
    }
};
