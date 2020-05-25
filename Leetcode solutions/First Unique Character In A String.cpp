class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26],val=-1;
        memset(arr,-1,sizeof(arr));
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            arr[idx]++;
        }
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            if(arr[idx]==0){
                return i;
            }
        }
        return -1;
    }
};
