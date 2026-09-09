class Solution {
    /**
     * @param {number[][]} matrix
     * @param {number} target
     * @return {boolean}
     */
    searchMatrix(matrix, target) {
        let row = matrix.length, col = matrix[0].length;
        let i=row-1, j=0;
        while(i>=0 && j<col){
            if(matrix [i][j] > target) i--;
            else if (matrix [i][j] < target) j++;
            else return true;
        }
        return false;

    }
}
