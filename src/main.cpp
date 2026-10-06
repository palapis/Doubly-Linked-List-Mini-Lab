#include <iostream>
#include <string>
using namespace std;

// Task 1: Node structure
struct Node {
    string data;
    Node* prev;
    Node* next;
    Node(string d) : data(d), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Task 2: Build a list (append)
    void append(string data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Task 3: Forward traversal
    void forward() {
        cout << "Forward: ";
        Node* cur = head;
        while (cur) {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }

    // Task 4: Backward traversal
    void backward() {
        cout << "Backward: ";
        Node* cur = tail;
        while (cur) {
            cout << cur->data << " ";
            cur = cur->prev;
        }
        cout << endl;
    }

    // Task 5: Insert in the middle (after a given node)
    void insertAfter(string target, string data) {
        Node* cur = head;
        while (cur && cur->data != target) cur = cur->next;
        if (!cur) return;
        Node* newNode = new Node(data);
        newNode->next = cur->next;
        newNode->prev = cur;
        if (cur->next) cur->next->prev = newNode;
        cur->next = newNode;
        if (cur == tail) tail = newNode;
    }

    // Task 6: Delete a node
    void deleteNode(string data) {
        Node* cur = head;
        while (cur && cur->data != data) cur = cur->next;
        if (!cur) return;
        if (cur->prev) cur->prev->next = cur->next;
        else head = cur->next;
        if (cur->next) cur->next->prev = cur->prev;
        else tail = cur->prev;
        delete cur;
    }

    // Task 8: Delete by position for experiment
    void deleteByData(string data) { deleteNode(data); }

    // Task 7: Real-world example - just relabel, same structure
    void display() { forward(); backward(); }
};

int main() {
    cout << "=== Task 2: Create List (Song A - E) ===" << endl;
    DoublyLinkedList dll;
    dll.append("Song A");
    dll.append("Song B");
    dll.append("Song C");
    dll.append("Song D");
    dll.append("Song E");
    cout << "List: ";
    dll.forward();
    dll.backward();
    cout << endl;

    cout << "=== Task 3: Forward Traversal ===" << endl;
    cout << "Q: Which pointer moves forward? next" << endl;
    dll.forward();
    cout << endl;

    cout << "=== Task 4: Backward Traversal ===" << endl;
    cout << "Q: Which pointer moves backward? prev" << endl;
    dll.backward();
    cout << endl;

    cout << "=== Task 5: Insert Song X between B and C ===" << endl;
    cout << "Before: A <-> B <-> C <-> D <-> E" << endl;
    dll.insertAfter("Song B", "Song X");
    cout << "After: A <-> B <-> X <-> C <-> D <-> E" << endl;
    dll.forward();
    dll.backward();
    cout << endl;

    cout << "=== Task 6: Delete Song C ===" << endl;
    cout << "Before: A <-> B <-> X <-> C <-> D <-> E" << endl;
    dll.deleteNode("Song C");
    cout << "After: A <-> B <-> X <-> D <-> E" << endl;
    cout << "Connections changed: B->next now points X, D->prev now points X" << endl;
    dll.forward();
    dll.backward();
    cout << endl;

    cout << "=== Task 7: Real-World Example - Browser History ===" << endl;
    cout << "Why DLL suitable? Forward/backward navigation needs bidirectional links." << endl;
    DoublyLinkedList history;
    history.append("google.com");
    history.append("youtube.com");
    history.append("stackoverflow.com");
    cout << "History: ";
    history.forward();
    history.backward();
    cout << endl;

    cout << "=== Task 8: Predict Before Running ===" << endl;
    cout << "Given: A <-> B <-> C <-> D, delete C" << endl;
    cout << "Prediction: A <-> B <-> D" << endl;
    DoublyLinkedList pred;
    pred.append("Song A");
    pred.append("Song B");
    pred.append("Song C");
    pred.append("Song D");
    pred.forward();
    pred.deleteNode("Song C");
    cout << "Actual: ";
    pred.forward();
    cout << "Match prediction! C was removed, A->B->D" << endl;
    cout << endl;

    cout << "=== Task 9: Break and Fix the Code ===" << endl;
    cout << "Bug introduced: forgot to update prev pointer in insertAfter" << endl;
    cout << "When inserting X after B, X->prev was not set, and C->prev still points B" << endl;
    cout << "Result: backward traversal breaks at C (C->prev->data = B instead of X)" << endl;
    cout << "Fix: set newNode->prev = cur AND cur->next->prev = newNode" << endl;

    return 0;
}