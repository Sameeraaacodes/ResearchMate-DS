//
//#include <iostream>
//using namespace std;
//
//class Graph {
//    int adj[5][5];
//
//public:
//    Graph() {
//        for (int i = 0; i < 5; i++)
//            for (int j = 0; j < 5; j++)
//                adj[i][j] = 0;
//    }
//
//    void addConnection(int a, int b) {
//        adj[a][b] = 1;
//        adj[b][a] = 1;
//    }
//
//    void display() {
//        cout << "Research Paper Connections:\n";
//
//        for (int i = 0; i < 5; i++) {
//            for (int j = 0; j < 5; j++)
//                cout << adj[i][j] << " ";
//
//            cout << endl;
//        }
//    }
//
//    void showRelated(int paper) {
//        cout << "Related papers to Paper " << paper << ": ";
//
//        for (int i = 0; i < 5; i++) {
//            if (adj[paper][i] == 1)
//                cout << i << " ";
//        }
//
//        cout << endl;
//    }
//};
//
//int main() {
//    Graph g;
//
//    g.addConnection(0, 1);
//    g.addConnection(0, 2);
//    g.addConnection(1, 3);
//    g.addConnection(2, 4);
//
//    g.display();
//
//    g.showRelated(0);
//
//    return 0;
//}
