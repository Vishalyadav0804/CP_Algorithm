class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        int a[26]={0};
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            a[idx]=a[idx]+1;
        }
        for(int i=0;i<t.size();i++){
            int idx=t[i]-'a';
            if(a[idx]>0){
                a[idx]=a[idx]-1;
                count++;
            }
            // else{
            //     a[idx]=a[idx]+1;
            // }
        }
        // for(int i=0;i<26;i++){
        //     count=count+a[i];
        //     cout<<a[i]<<" ";
        // }
        return s.size()-count;
    }
};
