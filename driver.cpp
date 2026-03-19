#include "LinkedQueue.hpp"
#include <iostream>
using namespace std;

int main() {
    LinkedQueue<int> q;

    try {
        q.front();
    } catch (string& e) {
        cout << e << endl;
    }
    try {
        q.back();
    } catch (string& e) {
        cout << e << endl;
    }

    q.enqueue(-5);
    cout << q.getLength() << " " << q.front() << " " << q.back() << endl;
    q.dequeue();

    try {
        q.front();
    } catch (string& e) {
        cout << e << endl;
    }

    for (int i = 0; i < 10; i++) {
        q.enqueue(i);
    }
    cout << q.getLength() << " " << q.front() << " " << q.back() << endl;
    while (!q.isEmpty()) {
        cout << q.front() << " ";
        q.dequeue();
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        q.enqueue(i);
    }
    LinkedQueue<int> q2 = q;
    LinkedQueue<int> q3;
    q3 = q2;
    q2.clear();
    cout << q2.isEmpty() << " " << q3.getLength() << " " << q3.front() << " " << q3.back() << endl;

    return 0;
}
