class CombinationIterator {
public:
    vector<string> cnt;
	string s;
	int len;
	string path="";
    
    void dfs(string s,int len,string path,int index){
        if(index>s.size()) return;
        if(path.size()==len){
            cnt.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++){
            path.push_back(s[i]);
            dfs(s,len,path,i+1);
            path.pop_back();
        }
    }
    CombinationIterator(string characters, int combinationLength) {
        len=combinationLength;
        s=characters;
        dfs(s,len,path,0);
        sort(cnt.rbegin(),cnt.rend());
    }
    string next() {
        string str=cnt.back();
        cnt.pop_back();
        return str;
    }
    
    bool hasNext() {
        return cnt.size()>=1 ? true:false;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
