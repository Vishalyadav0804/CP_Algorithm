class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> result(S.size());
        if(S.empty()){
            return result;
        }
		
        int firstIndex = -1;
        
        for( int i = 0 ; i < S.size(); i++){
            if(S[i] == C){
                firstIndex = i ;
                break;
            }
        }
        for( int i = 0 ; i < firstIndex; i++){
            result[i] = firstIndex - i ; 
        }
        int lastS = firstIndex;
        
        
        for(int i = firstIndex+1 ; i < S.size(); i++){
            char x = S[i];

            if( x != C){
                result[i] = i - lastS;
            }else{
                result[i] = 0;
                for( int j = i-1 ; j >= (lastS + i + 1 )/2 ; j --  ){
                    result[j] =  i - j ; 
                }
                lastS = i;
            }
        }
        return result;
        
    }
};
