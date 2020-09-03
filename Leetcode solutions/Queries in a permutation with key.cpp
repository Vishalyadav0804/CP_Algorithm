class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> res;
        vector<int> v;
        for(int i=0;i<m;i++){
            v.push_back(i+1);
        }
        for(int i=0;i<queries.size();i++){
            auto it=find(v.begin(),v.end(),queries[i]);
            int index = distance(v.begin(),it);
            res.push_back(index);
            v.erase(v.begin()+index);
            v.insert(v.begin(),queries[i]);
        }
        return res;
    }
};
