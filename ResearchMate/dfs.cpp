//
//#include <iostream>
//using namespace std;
//
//class DFS {
//    bool visited[5];
//
//public:
//    DFS() {
//        for (int i = 0; i < 5; i++) {
//            visited[i] = false;
//        }
//    }
//
//    void search(int adj[5][5], int node) {
//        visited[node] = true;
//
//        cout << node << " ";
//
//        // Explore every unvisited neighbor of the current node
//        for (int i = 0; i < 5; i++) {
//            if (adj[node][i] == 1 && visited[i] == false) {
//                search(adj, i);
//            }
//        }
//    }
//
//    void resetVisited() {
//        for (int i = 0; i < 5; i++) {
//            visited[i] = false;
//        }
//    }
//
//    void searchAll(int adj[5][5]) {
//        resetVisited();
//
//        cout << "DFS Research Paper Exploration: ";
//
//        // Start DFS from every unvisited vertex
//        for (int i = 0; i < 5; i++) {
//            if (visited[i] == false) {
//                search(adj, i);
//            }
//        }
//
//        cout << endl;
//    }
//};
