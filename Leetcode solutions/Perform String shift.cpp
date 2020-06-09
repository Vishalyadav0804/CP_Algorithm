class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        for(int i=0;i<shift.size();i++){
            int count;
            if(shift[i][0]==0){
                count=shift[i][1];
                while(count--){
                    s.append(1,s[0]);
                    s.erase(s.begin()+0);
                }
            }
            else if(shift[i][0]==1){
                count=shift[i][1];
                while(count--){
                    s.insert(s.begin(),s[s.size()-1]);
                    s.erase(s.begin()+s.size()-1);
                }
            }
        }
        return s;
    }
};
