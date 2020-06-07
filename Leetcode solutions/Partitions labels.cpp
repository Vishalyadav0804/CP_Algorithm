class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> v;
        int arr[26];
        for(int i=0;i<S.size();i++){
            arr[S[i]-'a']=i;
        }
        int i=0;
        while(i<S.size()){
            int end=arr[S[i]-'a'];
            int j=i;
            while(j!=end){
                end=max(end,arr[S[j]-'a']);
                j++;
            }
            v.push_back(j-i+1);
            i=j+1;
        }
        return v;
    }
};
