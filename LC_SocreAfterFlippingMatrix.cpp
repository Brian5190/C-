class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0; i < row; i++){
            if(grid[i][0] == 0){
                for(int j = 0; j < col; j ++){
                    grid[i][j] = (grid[i][j] + 1) % 2;
                }
            }
        }
        for(int j = 0; j < col; j++){
            int cout = 0;
            for(int i = 0; i < row; i++){
                cout += grid[i][j];
            }
            if(cout <= row / 2){
                for(int i = 0; i < row; i++){
                    grid[i][j] = (grid[i][j] + 1) % 2;
                }
            }
        }
        int res = 0;
        for(int i = 0; i < row; i++){
            int num = 0;
            for(int j = 0; j < col; j++){
                num = num * 2 + grid[i][j];
            }
            res += num;
        }
        return res;
    }
};