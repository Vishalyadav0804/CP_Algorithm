class Solution {
public:
    void duplicateZeros(vector<int>& v) {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                v.insert(v.begin()+i,0);
                i+=1;
                v.erase(v.begin()+v.size()-1);
            }
        }
        return;
    }
};
