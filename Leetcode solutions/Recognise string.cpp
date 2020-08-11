class Solution {
public:
    string reorganizeString(string S) {
        vector<int> arr(26,0);
        for(int i=0;i<S.size();i++){
            int idx=S[i]-'a';
            arr[idx]++;
        }
        int maxval=0,val;
        for(int i=0;i<26;i++){
            if(arr[i]>maxval){
                maxval=arr[i];
                val=i;
            }
        }
        if(maxval > (S.size()+1)/2) return "";
        vector<char> ans(S.size());
        int idx=0;
        while(arr[val]>0){
            ans[idx]=(char)(val+'a');
            arr[val]--;
            idx+=2;
        }
        for(int i=0;i<26;i++){
            while(arr[i]>0){
                if(idx>=ans.size()){
                    idx=1;
                }
                ans[idx]=(char)(i+'a');
                idx+=2;
                arr[i]--;
            }
        }
        string s="";
        for(int i=0;i<S.size();i++){
            s+=ans[i];
        }
        return s;
    }
};
