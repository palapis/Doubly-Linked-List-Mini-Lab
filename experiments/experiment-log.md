Experiment 1 - Create List (Task 2)
 
Input: Append 5 nodes (Song A to E)
Output:
Forward: Song A Song B Song C Song D Song E
Backward: Song E Song D Song C Song B Song A

Experiment 2 - Forward Traversal (Task 3)
 
Pointer used: next
Output:
Forward: Song A Song B Song C Song D Song E

Experiment 3 - Backward Traversal (Task 4)
 
Pointer used: prev
Output:
Backward: Song E Song D Song C Song B Song A


Experiment 4 - Insert Song X (Task 5)
 
Before: A <-> B <-> C <-> D <-> E
Operation: insertAfter("Song B", "Song X")
After: A <-> B <-> X <-> C <-> D <-> E
Forward: Song A Song B Song X Song C Song D Song E
Backward: Song E Song D Song C Song X Song B Song A


Experiment 5 - Delete Song C (Task 6)
 
Before: A <-> B <-> X <-> C <-> D <-> E
Operation: deleteNode("Song C")
After: A <-> B <-> X <-> D <-> E
Forward: Song A Song B Song X Song D Song E
Backward: Song E Song D Song X Song B Song A
Connections changed: B->next = X, D->prev = X

---

Experiment 6 - Browser History (Task 7)
 
Before: real-world example
After: Forward: google.com youtube.com stackoverflow.com
Backward: stackoverflow.com youtube.com google.com

---

Experiment 7 - Predict Before Run (Task 8)
 
Prediction: A <-> B <-> D
Actual: Song A Song B Song D
Match: YES


Experiment 8 - Break and Fix (Task 9)
Bug: forgot to update prev pointer in insertAfter
Result: backward traversal breaks at insertion point
Fix: set newNode->prev = cur AND cur->next->prev = newNode
