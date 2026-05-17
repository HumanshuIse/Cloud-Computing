#include <bits/stdc++.h>
using namespace std;

const int N = 4;

//
// ------------------------------------
// BACKTRACKING APPROACH
// ------------------------------------
//

char board1[N][N];

// Check if queen placement is safe
bool isSafe(int row, int col)
{
    // Check upper column
    for(int i = 0; i < row; i++)
    {
        if(board1[i][col] == 'Q')
        {
            return false;
        }
    }

    // Check left diagonal
    for(int i = row, j = col;
        i >= 0 && j >= 0;
        i--, j--)
    {
        if(board1[i][j] == 'Q')
        {
            return false;
        }
    }

    // Check right diagonal
    for(int i = row, j = col;
        i >= 0 && j < N;
        i--, j++)
    {
        if(board1[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

// Backtracking function
bool solveBacktracking(int row)
{
    if(row == N)
    {
        return true;
    }

    for(int col = 0; col < N; col++)
    {
        if(isSafe(row, col))
        {
            // Place queen
            board1[row][col] = 'Q';

            // Recur
            if(solveBacktracking(row + 1))
            {
                return true;
            }

            // Backtrack
            board1[row][col] = '.';
        }
    }

    return false;
}

//
// ------------------------------------
// BRANCH AND BOUND APPROACH
// ------------------------------------
//

char board2[N][N];

bool column[N];
bool leftDiagonal[2 * N];
bool rightDiagonal[2 * N];

// Branch and Bound function
bool solveBranchBound(int row)
{
    if(row == N)
    {
        return true;
    }

    for(int col = 0; col < N; col++)
    {
        // Fast checking using arrays
        if(column[col] == false &&
           leftDiagonal[row - col + N] == false &&
           rightDiagonal[row + col] == false)
        {
            // Place queen
            board2[row][col] = 'Q';

            // Mark arrays
            column[col] = true;

            leftDiagonal[row - col + N] = true;

            rightDiagonal[row + col] = true;

            // Recur
            if(solveBranchBound(row + 1))
            {
                return true;
            }

            // Backtrack
            board2[row][col] = '.';

            // Unmark arrays
            column[col] = false;

            leftDiagonal[row - col + N] = false;

            rightDiagonal[row + col] = false;
        }
    }

    return false;
}

//
// ------------------------------------
// MAIN FUNCTION
// ------------------------------------
//

int main()
{
    //
    // Initialize Boards
    //

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            board1[i][j] = '.';
            board2[i][j] = '.';
        }
    }

    //
    // BACKTRACKING OUTPUT
    //

    cout << "Using Backtracking:\n\n";

    if(solveBacktracking(0))
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cout << board1[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "No Solution\n";
    }

    //
    // BRANCH AND BOUND OUTPUT
    //

    memset(column, false, sizeof(column));

    memset(leftDiagonal, false,
           sizeof(leftDiagonal));

    memset(rightDiagonal, false,
           sizeof(rightDiagonal));

    cout << "\nUsing Branch and Bound:\n\n";

    if(solveBranchBound(0))
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cout << board2[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "No Solution\n";
    }

    return 0;
}