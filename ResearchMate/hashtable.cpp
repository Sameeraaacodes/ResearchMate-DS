
#include <iostream>
using namespace std;

class HashTable {
    int id[10];
    string title[10];

public:
    HashTable() {
        for (int i = 0; i < 10; i++) {
            id[i] = -1;
            title[i] = "";
        }
    }

    int hashFunction(int key) {
        return key % 10;
    }

    void insert(int key, string name) {
        int index = hashFunction(key);

        while (id[index] != -1) {
            index = (index + 1) % 10;
        }

        id[index] = key;
        title[index] = name;
    }

    void search(int key) {
        int index = hashFunction(key);
        int start = index;

        while (id[index] != -1) {
            if (id[index] == key) {
                cout << "Paper Found: " << title[index] << endl;
                return;
            }

            index = (index + 1) % 10;

            if (index == start)
                break;
        }

        cout << "Paper Not Found" << endl;
    }
};

int main() {
    HashTable h;

    h.insert(101, "Artificial Intelligence");
    h.insert(102, "Machine Learning");
    h.insert(111, "Deep Learning");

    h.search(111);
    h.search(105);

    return 0;
}
