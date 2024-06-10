#include <iostream>
#include <vector>
using namespace std;

int T, N, M;
vector<vector<int>> matrix;
int num_islands;

void Try(int x, int y) {
    // Mark the cell as visited
    matrix[x][y] = 0;

    // Explore the 8 neighboring cells
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && matrix[nx][ny] == 1) {
            Try(nx, ny);
        }
    }
}

int main() {
    cin >> T;
    while (T--) {
        cin >> N >> M;
        matrix.assign(N, vector<int>(M));

        // Input the matrix
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> matrix[i][j];
            }
        }

        // Count the number of islands
        num_islands = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (matrix[i][j] == 1) {
                    // If encounter a 1, increment the number of islands and explore neighboring cells to mark as visited
                    Try(i, j);
                    ++num_islands;
                }
            }
        }

        cout << num_islands << endl;
    }

    return 0;
}

// chi dung 2 test