//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//class BFS {
//    int adj[5][5];
//    bool visited[5];
//
//public:
//    BFS() {
//        for (int i = 0; i < 5; i++) {
//            visited[i] = false;
//
//            for (int j = 0; j < 5; j++) {
//                adj[i][j] = 0;
//            }
//        }
//    }
//
//    void addConnection(int a, int b) {
//        adj[a][b] = 1;
//        adj[b][a] = 1;
//    }
//
//    void search(int start) {
//        queue<int> q;
//
//        visited[start] = true;
//        q.push(start);
//
//        cout << "BFS Research Paper Exploration: ";
//
//        while (!q.empty()) {
//            int current = q.front();
//            q.pop();
//
//            cout << current << " ";
//
//            for (int i = 0; i < 5; i++) {
//                if (adj[current][i] == 1 && visited[i] == false) {
//                    visited[i] = true;
//                    q.push(i);
//                }
//            }
//        }
//    }
//};
//
//int main() {
//    BFS g;
//
//    g.addConnection(0, 1);
//    g.addConnection(0, 2);
//    g.addConnection(1, 3);
//    g.addConnection(2, 4);
//
//    g.search(0);
//
//    return 0;
//}
