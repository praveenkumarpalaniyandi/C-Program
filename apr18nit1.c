#include <stdbool.h>

bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    int m = boardSize;
    int n = *boardColSize;
    int len = strlen(word);
    bool visited[m][n];
    memset(visited, false, sizeof visited);

    bool dfs(int i, int j, int k) {
        if (k == len) {
            return true;
        }
        if (i < 0 || i >= m || j < 0 || j >= n) {
            return false;
        }
        if (visited[i][j] || board[i][j] != word[k]) {
            return false;
        }
        visited[i][j] = true;
        bool found = dfs(i+1, j, k+1) || dfs(i-1, j, k+1) || dfs(i, j+1, k+1) || dfs(i, j-1, k+1);
        visited[i][j] = false;
        return found;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (dfs(i, j, 0)) {
                return true;
            }
        }
    }

    return false;
}
