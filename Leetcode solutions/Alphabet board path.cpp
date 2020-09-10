class Solution {
public:
    string alphabetBoardPath(string target) {
        unordered_map<char,pair<int,int>> m;
        for(int i=0;i<26;i++){
            m[i+'a']={i/5,i%5};
        }
        int dx=0,dy=0;
        string path="";
        target='a'+target;
        for(int i=1;i<target.size();i++){
            auto cur=m[target[i]];
            auto prev=m[target[i-1]];
            dx=cur.first-prev.first;
            dy=cur.second-prev.second;
            if(dx<0){
                while(dx!=0){
                    path+='U';
                    dx++;
                }
            }
            if(dy<0){
                while(dy!=0){
                    path+='L';
                    dy++;
                }
            }
            if(dx>0){
                while(dx!=0){
                    path+='D';
                    dx--;
                }
            }
            if(dy>0){
                while(dy!=0){
                    path+='R';
                    dy--;
                }
            }
            path+='!';
            
        }
        return path;
    }
};
