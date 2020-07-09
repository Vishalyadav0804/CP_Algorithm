class Solution {
public:
    // Disributes all the left-over spaces evenly across the words.
    string makestring(vector<string>& temp, int ct, int tot, int maxW)
    {
        string res="";

        // If only one word, put all spaces after it.
        if(ct==1){
            res = temp[0] + string(maxW-tot,' ');
            return res;
        }

        bool first=false; // First Word
        for(auto wrd:temp){
            if(!first) {res+=wrd; first=true;}
            else{
                // More spaces to the left as much as possible.
                double left=(1.0*(maxW-tot))/(ct-1);
                int space=(int)(ceil(left)); // Number of spaces
                res+= string(space,' ')+wrd;
                tot+=space;
                ct--;
            }   
        }
        return res;
    }

    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n=words.size();
        int ct=0, tot=0;
        vector<string> temp,ans;
        for(int i=0;i<n;i++){
            string str=words[i];
            if(ct==0){
                tot+=str.length();
                ct++;
                temp.push_back(str);
            }
            else{
                if(tot+str.length()+1 <= maxWidth){ // 1 for extra space
                    ct++;
                    tot+=str.length()+1;
                    temp.push_back(" "+str);
                }
                else{
                    string res=makestring(temp,ct,tot,maxWidth);
                    ans.push_back(res);
                    temp.clear();
                    ct=0; tot=0;
                    i--;
                }
            }
        }

		// Code for handling the last line.
        string str="";
        for(auto wrd:temp) str+=wrd;
        ans.push_back(str+string(maxWidth-tot,' '));
        return ans;
    }
};
