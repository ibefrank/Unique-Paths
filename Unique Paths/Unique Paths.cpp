// Unique Paths.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the number of unique paths in an m x n grid
int uniquePaths(int m, int n) {
    // Create a 2D vector initialized with 1s
    // dp[i][j] will store the number of unique paths to reach cell (i, j)
    vector<vector<int>> dp(m, vector<int>(n, 1));

    // Fill the dp table using bottom-up dynamic programming
    for (int i = 1; i < m; ++i) {          // Start from row 1 since row 0 is already filled with 1s
        for (int j = 1; j < n; ++j) {      // Start from column 1
            // The robot can come either from the top (i-1, j) or from the left (i, j-1)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    // The value at the bottom-right cell is the total number of unique paths
    return dp[m - 1][n - 1];
}

int main() {
    int m, n;

    // Prompt the user for input
    cout << "Enter grid dimensions (m n): ";
    cin >> m >> n;

    // Output the result
    cout << "Unique paths: " << uniquePaths(m, n) << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
