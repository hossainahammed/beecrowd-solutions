#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        string board;
        cin >> board;

        bool hasWinningMove = false;


        for (int i = 0; i <= N - 3; ++i) {

            if ((board[i] == '.' && board[i+1] == 'X' && board[i+2] == 'X') ||
                (board[i] == 'X' && board[i+1] == '.' && board[i+2] == 'X') ||
                (board[i] == 'X' && board[i+1] == 'X' && board[i+2] == '.')) {
                hasWinningMove = true;
                break;
            }
        }


        cout << (hasWinningMove ? 'S' : 'N') << endl;
    }

    return 0;
}
