#include <iostream>
using namespace std;



//Matthew Robles

bool ok(int board[][8]) {
    for (int c = 7; c>0; c--){
        int r = 0;
        while (board[r][c] != 1) {// For each queen on the chessboard
            r++;                // Figure out the position of the queen in that column
        }
        // Perform the 3 tests (row, up-diagonal, down-diagonal), and if any of the tests fail, return false
        int i;
        for (i = 0; i < c; i++) {
            if (board[r][i] == 1) {
                return false;
            }
        }
        for (i = 1; (((r - i) >= 0) && ((c - i) >= 0)); i++) {
            if (board[r - i][c - i] == 1) {
                return false;
            }
        }
        for (i = 1; (((r + i) <= 7) && ((c - i) >= 0)); i++) {
            if (board[r + i][c - i] == 1) {
                return false;
            }
        }
    }

        return true;   // Return true after all of the tests pass for every queen}
}    
void print(int board[][8]) {
    static int solution = 0;
    cout << endl; 
    cout << "Solution #" << ++solution << ":\n";
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j)
            if(board[i][j]==0)cout<<"- ";
            else cout<<"Q ";
        cout << endl;
    }
}
int main() {
    int board[8][8] = {};
    // i0 is the position of the queen in column #0, i1 is the position of the queen in column #1, etc.
    for (int i0 = 0; i0 < 8; ++i0)
        for (int i1 = 0; i1 < 8; ++i1)
            for (int i2 = 0; i2 < 8; ++i2)
                for (int i3 = 0; i3 < 8; ++i3)
                    for (int i4 = 0; i4 < 8; ++i4)
                        for (int i5 = 0; i5 < 8; ++i5)
                            for (int i6 = 0; i6 < 8; ++i6)
                                for (int i7 = 0; i7 < 8; ++i7) {
                                    // Place the 8 queens on the chessboard:
                                    board[i0][0] = 1; // place a queen in position i0 of column 0
                                    board[i1][1] = 1;              // place a queen in position i1 of column 1
                                    board[i2][2] = 1;              
                                    board[i3][3] = 1;
                                    board[i4][4] = 1;
                                    board[i5][5] = 1;
                                    board[i6][6] = 1;
                                    board[i7][7] = 1;

                                    if (ok(board)) {
                                        print(board);    
                                    }
                                    board[i0][0] = 0;
                                    board[i1][1] = 0;
                                    board[i2][2] = 0;
                                    board[i3][3] = 0;
                                    board[i4][4] = 0;
                                    board[i5][5] = 0;
                                    board[i6][6] = 0;
                                    board[i7][7] = 0;
                                    
                                }
    return 0;
}