class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> unique;
        for(int i =0 ; i<board.size(); i++){
            for(int j =0 ; j<board[i].size(); j++){
                if(board[i][j]=='.')continue;
               
                 if(unique.count(board[i][j])){
                 return false;
                 }
                 else{
                    unique.insert(board[i][j]);
                 }

            }
            unique.clear();
        }
        for(int j =0 ; j<board[0].size(); j++){
            for(int i =0 ; i<board.size(); i++){
                if(board[i][j]=='.')continue;
               
                 if(unique.count(board[i][j])){
                 return false;
                 }
                 else{
                    unique.insert(board[i][j]);
                 }

            }
            unique.clear();
        }

        for(int i=0 ; i<=6 ; i=i+3){
            for(int j =0 ; j<=6 ; j=j+3){
                unique.clear();

                for( int row =i ; row<i+3 ;row++){
                    for( int col = j ; col<j+3 ;col++){

                        if(board[row][col]=='.'){
                            continue;
                        }
                         if (unique.count(board[row][col])){
                          
                            return false;

                        }
                    else{
                        unique.insert(board[row][col]);
                    }


                    }

                }

            }

        }

        return true;
    }
};
 