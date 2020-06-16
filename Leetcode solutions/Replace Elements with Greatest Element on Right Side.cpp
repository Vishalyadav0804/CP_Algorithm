class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> v;
        if(arr.size()==1){
            v.push_back(-1);
            return v;
        }
        int max=arr[arr.size()-1];
        v.push_back(-1);
        for(int i=arr.size()-2;i>=0;i--){
            v.push_back(max);
            if(arr[i]>max){
                max=arr[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
