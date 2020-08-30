class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> target_hash;
        
        if(target.size() != arr.size()) return false;
        
        for(int num : target) target_hash[num]++;
        
        for(int num : arr){
            if(target_hash.find(num) == target_hash.end())
                return false;
            
            target_hash[num]--;
        }
        
        for(auto itr : target_hash) 
            if(itr.second != 0) return false;
        
        return true;
    }
};
