#include <iostream>
#include <queue>


using namespace std;

const int MAX = 1001;
char building[MAX][MAX];
bool visited[MAX][MAX];
bool fireVisited[MAX][MAX];
int N, M; 
int startX, startY; 
int exitX, exitY; 

bool fireContinues = true; 
bool playerContinues = true;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

struct Position {
    int x, y, steps;
};

queue<Position> fireQueue;
queue<Position> playerQueue;


bool bfsFireStep() {
    if (fireQueue.empty()) return false;

    int size = fireQueue.size();
    for (int k = 0; k < size; k++) {
        Position current = fireQueue.front();
        fireQueue.pop();

        for (int i = 0; i < 4; i++) {
            int newX = current.x + dx[i];
            int newY = current.y + dy[i];

            if (newX >= 0 && newX < N && newY >= 0 && newY < M && building[newX][newY] != '#' && !fireVisited[newX][newY]) {
                fireVisited[newX][newY] = true;
                building[newX][newY] = 'F'; 
                Position newPosition = {newX, newY, current.steps + 1};
                fireQueue.push(newPosition);
            }
        }
    }
    return true;
}

bool bfsPlayerStep() {
    if (playerQueue.empty()){
        cout << -1 << endl;
        return false;
    } 

    int size = playerQueue.size();
    for (int k = 0; k < size; k++) {
        Position current = playerQueue.front();
        playerQueue.pop();

        if (current.x == exitX && current.y == exitY) {
            cout << current.steps << endl;
            return false; 
        }

        for (int i = 0; i < 4; i++) {
            int newX = current.x + dx[i];
            int newY = current.y + dy[i];

            if (newX >= 0 && newX < N && newY >= 0 && newY < M && !visited[newX][newY] && building[newX][newY] != '#' && building[newX][newY] != 'F') {
                visited[newX][newY] = true;
                building[newX][newY] = 'P'; 
                Position newPosition = {newX, newY, current.steps + 1};
                playerQueue.push(newPosition);
            }
        }
    }
    return true;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> building[i][j];
            visited[i][j] = false;
            fireVisited[i][j] = false;

            if (building[i][j] == 'S') {
                Position newPosition = {i, j, 0};
                playerQueue.push(newPosition);
                visited[i][j] = true;
            }
            if (building[i][j] == 'E') {
                exitX = i;
                exitY = j;
            }
            if (building[i][j] == 'F') {
                Position newPosition = {i, j, 0};
                fireQueue.push(newPosition);
                fireVisited[i][j] = true;
            }
        }
    }

    while (playerContinues) {
        fireContinues = bfsFireStep(); 
        playerContinues = bfsPlayerStep();  
    }

    return 0;
}