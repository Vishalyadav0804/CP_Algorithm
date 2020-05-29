/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> v=binaryMatrix.dimensions();
        int row=v[0];
        int col=v[1];
        int i=0,j=col-1,count=0;
        while(i<row && j>=0){
            if(binaryMatrix.get(i, j)==1){
                j--;
                count++;
            }
            else if(binaryMatrix.get(i, j)==0){
                i++;
            }
        }
        if(count>0)
            return j+1;
        return -1;
    }
};
