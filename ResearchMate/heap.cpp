
#include <iostream>
#include <string>
using namespace std;

class Heap {
    int score[10];
    string title[10];
    int size;

    void heapifyUp(int index) {
        // Move the paper upward while its score is greater than its parent
        while (index > 0) {
            int parent = (index - 1) / 2;

            if (score[index] > score[parent]) {
                swap(score[index], score[parent]);
                swap(title[index], title[parent]);

                index = parent;
            }
            else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        // Move the paper downward to restore the Max Heap property
        while (true) {
            int largest = index;
            int left = 2 * index + 1;
            int right = 2 * index + 2;

            if (left < size && score[left] > score[largest]) {
                largest = left;
            }

            if (right < size && score[right] > score[largest]) {
                largest = right;
            }

            if (largest != index) {
                swap(score[index], score[largest]);
                swap(title[index], title[largest]);

                index = largest;
            }
            else {
                break;
            }
        }
    }

public:
    Heap() {
        size = 0;
    }

    void insert(int paperScore, string paperTitle) {
        if (size == 10) {
            cout << "Heap is full!" << endl;
            return;
        }

        score[size] = paperScore;
        title[size] = paperTitle;

        heapifyUp(size);
        size++;

        cout << "Paper inserted successfully." << endl;
    }

    void displayTopPaper() {
        if (size == 0) {
            cout << "Heap is empty." << endl;
            return;
        }

        cout << "Highest Priority Paper: "
            << title[0] << " (Score: " << score[0] << ")" << endl;
    }

    void extractMax() {
        if (size == 0) {
            cout << "Heap is empty." << endl;
            return;
        }

        cout << "Removed Paper: " << title[0]
            << " (Score: " << score[0] << ")" << endl;

        score[0] = score[size - 1];
        title[0] = title[size - 1];

        size--;

        if (size > 0) {
            heapifyDown(0);
        }
    }

    void display() {
        if (size == 0) {
            cout << "Heap is empty." << endl;
            return;
        }

        cout << "\nResearch Papers by Heap Array:\n";

        for (int i = 0; i < size; i++) {
            cout << title[i] << " - Score: " << score[i] << endl;
        }
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    Heap h;

    h.insert(85, "Artificial Intelligence");
    h.insert(95, "Machine Learning");
    h.insert(70, "Deep Learning");
    h.insert(60, "Data Science");
    h.insert(80, "Neural Networks");

    cout << "\nCurrent Heap:";
    h.display();

    cout << "\n";
    h.displayTopPaper();

    cout << "\nExtracting Maximum:\n";
    h.extractMax();

    cout << "\nHeap After Extraction:";
    h.display();

    return 0;
}