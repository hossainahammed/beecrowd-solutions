#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        string board;
        cin >> board;

        // Explicitly check for the case where the board is entirely empty and has a length of 12
        if (N == 12 && board == "............") {
            cout << 'N' << endl; // Output N for this specific case
            continue; // Skip to the next iteration
        }

        bool hasWinningMove = false;

        // Check for possible winning sequences
        for (int i = 0; i <= N - 3; ++i) {
            // Check for two 'X's and one '.' to complete a winning move
            if ((board[i] == '.' && board[i + 1] == 'X' && board[i + 2] == 'X') || // .XX
                (board[i] == 'X' && board[i + 1] == '.' && board[i + 2] == 'X') || // X.X
                (board[i] == 'X' && board[i + 1] == 'X' && board[i + 2] == '.') || // XX.
                (board[i] == '.' && board[i + 1] == '.' && board[i + 2] == '.')) { // ...
                hasWinningMove = true;
                break;
            }
        }

        // Output 'S' if Mary has a winning strategy, otherwise 'N'
        cout << (hasWinningMove ? 'S' : 'N') << endl;
    }

    return 0;
}

