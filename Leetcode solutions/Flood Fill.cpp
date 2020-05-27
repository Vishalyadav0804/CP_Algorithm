class Solution {
public:
    void fill(vector<vector<int>>& image, int i, int j,int color, int newColor,vector<vector<bool>> visited){
        if(i<0||i>=image.size()||j<0||j>=image[0].size()){
            return;
        }
        if(image[i][j] != color || visited[i][j])
            return;
        visited[i][j]=true;
        image[i][j]=newColor;
        fill(image,i+1,j,color,newColor,visited);
        fill(image,i-1,j,color,newColor,visited);
        fill(image,i,j+1,color,newColor,visited);
        fill(image,i,j-1,color,newColor,visited);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image.size()==0){
            return image;
        }
        vector<vector<bool>> visited(image.size(), vector<bool>(image[0].size(), false));
        fill(image,sr,sc,image[sr][sc],newColor,visited);
        return image;
    }
};
