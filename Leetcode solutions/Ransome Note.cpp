class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        for(int i=0;i<ransomNote.size();i++){
            int k=0;
            for(int j=0;j<magazine.size();j++){
                if(ransomNote[i]==magazine[j]){
                    magazine.erase(magazine.begin()+j);
                    k++;
                    break;
                }
            }
            if(k==0){
                return false;
            }
        }
        return true;
    }
};
