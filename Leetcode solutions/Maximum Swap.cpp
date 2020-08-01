class Solution {
public:
    int getMaxElem(string s,int i){
        for(int j=i;j<s.size();j++){
            if(s[j]>=s[i])
                i=j;
        }
        return i;
    }
    int maximumSwap(int num) {
        string s=to_string(num);
        string s1=s;
        for(int i=0;i<s.size();i++){
            int temp=getMaxElem(s,i);
            swap(s[i],s[temp]);
            if(s1!=s) break;
        }
        return stoi(s);
    }
};
