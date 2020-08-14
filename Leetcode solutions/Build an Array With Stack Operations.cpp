class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int z=1;
        vector<string> v;
        for(int i=0;i<target.size();i++){
            if(target[i]==z){
                v.push_back("Push");
            }else{
                v.push_back("Push");
                v.push_back("Pop");
                i--;
            }
            z++;
        }
        return v;
    }
};
