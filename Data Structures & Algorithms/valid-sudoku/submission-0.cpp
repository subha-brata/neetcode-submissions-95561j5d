class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& boards) {
        unordered_map<int,set<int>> rows;
        unordered_map<int,set<int>> cols;
        unordered_map<int,set<int>> sq;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if (boards[i][j]=='.') continue;
                if(rows[i].count(boards[i][j])||
                   cols[j].count(boards[i][j])||
                   sq[(i/3)*3+(j/3)].count(boards[i][j]))
                   
                   return false;
                   
                rows[i].insert(boards[i][j]);
                cols[j].insert(boards[i][j]);
                sq[(i/3)*3+(j/3)].insert(boards[i][j]);
            }
        }

        return true;
    }
};
