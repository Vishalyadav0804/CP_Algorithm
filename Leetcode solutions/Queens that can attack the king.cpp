class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        int arr[8][8]={0};
        for(int i=0;i<queens.size();i++)
        {
            arr[queens[i][0]][queens[i][1]]=1;
        }
        vector<vector<int>>ret;
        for(int i=king[0]+1;i<8;i++)
        {
            
            if(arr[i][king[1]]==1)
            {
                vector<int>num;    
                num.push_back(i);
                num.push_back(king[1]);
                ret.push_back(num);
                break;
            }
        }
        for(int i=king[0]-1;i>=0;i--)
        {
            
            if(arr[i][king[1]]==1)
            {
                vector<int>num;    
                num.push_back(i);
                num.push_back(king[1]);
                ret.push_back(num);
                break;
            }
        }
        for(int i=king[1]+1;i<8;i++)
        {
            
            if(arr[king[0]][i]==1)
            {
                vector<int>num;    
                num.push_back(king[0]);
                num.push_back(i);
                ret.push_back(num);
                break;
            }
        }
        for(int i=king[1]-1;i>=0;i--)
        {
            if(arr[king[0]][i]==1)
            {
                vector<int>num;
                num.push_back(king[0]);
                num.push_back(i);
                ret.push_back(num);
                break;
            }
        }
        int x=king[0]+1;
        int y=king[1]+1;
        while(x<8 && y<8)
        {
            if(arr[x][y]==1)
            {
                vector<int>num;
                num.push_back(x);
                num.push_back(y);
                ret.push_back(num);
                break;
            }
            x++;
            y++;
        }
        x=king[0]+1;
        y=king[1]-1;
        while(x<8 && y>=0)
        {
            if(arr[x][y]==1)
            {
                vector<int>num;
                num.push_back(x);
                num.push_back(y);
                ret.push_back(num);
                break;
            }
            x++;
            y--;
        }
        x=king[0]-1;
        y=king[1]-1;
        while(x>=0 && y>=0)
        {
            if(arr[x][y]==1)
            {
                vector<int>num;
                num.push_back(x);
                num.push_back(y);
                ret.push_back(num);
                break;
            }
            x--;
            y--;
        }
        x=king[0]-1;
        y=king[1]+1;
        while(x>=0 && y<8)
        {
            if(arr[x][y]==1)
            {
                vector<int>num;
                num.push_back(x);
                num.push_back(y);
                ret.push_back(num);
                break;
            }
            x--;
            y++;
        }
        return ret;
    }
};
