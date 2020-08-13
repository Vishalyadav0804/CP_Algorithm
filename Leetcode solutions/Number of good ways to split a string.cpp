class Solution {
public:
    int numSplits(string s) {
        vector<bool> v(26,false);
        vector<int> prefix(s.size(),1);
        vector<int> sufix(s.size(),1);
        int count=0;
        v[s[0]-'a']=true;
        for(int i=1;i<s.size();i++){
            int val=s[i]-'a';
            if(v[val]==false){
                prefix[i]=prefix[i-1]+1;
                v[val]=true;
            }
            else{
                prefix[i]=prefix[i-1];
            }
        }
        for(int i=0;i<26;i++){
            v[i]=false;
        }
        v[s[s.size()-1]-'a']=true;
        for(int i=s.size()-2;i>=0;i--){
            int val=s[i]-'a';
            if(v[val]==false){
                sufix[i]=sufix[i+1]+1;
                v[val]=true;
            }else{
                sufix[i]=sufix[i+1];
            }
        }
        for(int i=1;i<s.size();i++){
            if(sufix[i]==prefix[i-1]){
                count++;
            }
        }
        return count;
    }
};
/*
bool goodSplit(vector<int> freqA, vector<int> freqB) {
	int a1 = 0, a2 = 0;
	for(int i = 0; i < 26; i++) {
		if(freqA[i])
			a1++;
		if(freqB[i]) 
			a2++;
	}

	return a1 == a2;
}
	
int numSplits(string s) {
	vector<int> freqA(26, 0), freqB(26, 0);
	int ans = 0;
	for(char ch : s)
		freqB[ch - 'a']++;

	for(char ch : s) {
		freqA[ch - 'a']++;
		freqB[ch - 'a']--;
		if(goodSplit(freqA, freqB))
			ans++;
	}

	return ans;
}
*/
