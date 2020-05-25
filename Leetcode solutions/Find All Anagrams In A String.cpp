class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        if(s.size()==0){
            return v;
        }
        int arr[26]={0};
        for(int i=0;i<p.size();i++){
            arr[p[i]-'a']++;
        }
        int left=0,right=0,count=p.length();
        while(right<s.length()){
            if(arr[s[right++]-'a']-- >= 1){
                count--;
            }
            if(count==0){
                v.push_back(left);
            }
            if((right-left==p.length()) && arr[s[left++]-'a']++>=0){
                count++;
            }
        }
        return v;
    }
};
