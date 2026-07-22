#include <iostream>
using namespace std;

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void drawBoard() {
    cout << "\n\tTic-Tac-Toe Game\n\n";
    cout << "Player 1 (X)  -  Player 2 (O)\n\n";
    cout << "     |     |     " << endl;
    cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << endl;
    cout << "     |     |     \n" << endl;
}

// NEW: The Win Checking Engine
bool checkWin() {
    // Check all 3 Horizontal rows
    if (board[1] == board[2] && board[2] == board[3]) return true;
    if (board[4] == board[5] && board[5] == board[6]) return true;
    if (board[7] == board[8] && board[8] == board[9]) return true;

    // Check all 3 Vertical columns
    if (board[1] == board[4] && board[4] == board[7]) return true;
    if (board[2] == board[5] && board[5] == board[8]) return true;
    if (board[3] == board[6] && board[6] == board[9]) return true;

    // Check the 2 Diagonals (This is the one you just hit!)
    if (board[1] == board[5] && board[5] == board[9]) return true;
    if (board[3] == board[5] && board[5] == board[7]) return true;

    return false; // If none of the above match, no one has won yet
}

int main() {
    int player = 1; 
    int choice;
    char mark;      
    bool gameWon = false; // Keep track of if someone won

    for (int i = 0; i < 9; i++) {
        drawBoard(); 

        if (player == 1) {
            mark = 'X';
        } else {
            mark = 'O';
        }

        cout << "Player " << player << ", enter a number: ";
        cin >> choice;

        board[choice] = mark;

        // NEW: Check if that move just won the game!
        if (checkWin() == true) {
            drawBoard();
            cout << "===========================" << endl;
            cout << "  PLAYER " << player << " WINS!!! " << endl;
            cout << "===========================" << endl;
            gameWon = true; // Mark the game as won
            break;          // Break out of the 9-turn loop immediately!
        }

        // Swap turns
        if (player == 1) {
            player = 2;
        } else {
            player = 1;
        }
    }

    // If the loop finishes all 9 turns and no one won, it's a draw
    if (gameWon == false) {
        drawBoard();
        cout << "It's a DRAW!" << endl;
    }

    return 0;
}