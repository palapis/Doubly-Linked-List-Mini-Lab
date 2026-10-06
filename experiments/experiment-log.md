Experiment 1 - Create List (Task 2)
<img width="940" height="952" alt="image" src="https://github.com/user-attachments/assets/ef23ba5d-da56-4b4b-b471-5e05ffd1473d" />

Input: Append 5 nodes (Song A to E)
Output:
Forward: Song A Song B Song C Song D Song E
Backward: Song E Song D Song C Song B Song A

Experiment 2 - Forward Traversal (Task 3)
 <img width="770" height="539" alt="image" src="https://github.com/user-attachments/assets/c2d55e7c-93c8-4cb2-b428-2657bc13aad7" />

Pointer used: next
Output:
Forward: Song A Song B Song C Song D Song E

Experiment 3 - Backward Traversal (Task 4)
 <img width="778" height="520" alt="image" src="https://github.com/user-attachments/assets/e89b5f3c-cbd5-44ff-aff8-7ffdf481dc8d" />

Pointer used: prev
Output:
Backward: Song E Song D Song C Song B Song A


Experiment 4 - Insert Song X (Task 5)
 <img width="940" height="490" alt="image" src="https://github.com/user-attachments/assets/be0fc743-cd7e-4812-8f9c-2d0acde61a4f" />

Before: A <-> B <-> C <-> D <-> E
Operation: insertAfter("Song B", "Song X")
After: A <-> B <-> X <-> C <-> D <-> E
Forward: Song A Song B Song X Song C Song D Song E
Backward: Song E Song D Song C Song X Song B Song A


Experiment 5 - Delete Song C (Task 6)
 <img width="940" height="480" alt="image" src="https://github.com/user-attachments/assets/08975364-e1b2-42c9-ac30-125a3623fd1d" />

Before: A <-> B <-> X <-> C <-> D <-> E
Operation: deleteNode("Song C")
After: A <-> B <-> X <-> D <-> E
Forward: Song A Song B Song X Song D Song E
Backward: Song E Song D Song X Song B Song A
Connections changed: B->next = X, D->prev = X

---

Experiment 6 - Browser History (Task 7)
 <img width="940" height="151" alt="image" src="https://github.com/user-attachments/assets/62ee0c59-eda8-4012-b8a2-296eeef1b705" />

Before: real-world example
After: Forward: google.com youtube.com stackoverflow.com
Backward: stackoverflow.com youtube.com google.com

---

Experiment 7 - Predict Before Run (Task 8)
 <img width="940" height="116" alt="image" src="https://github.com/user-attachments/assets/92fe9796-39bd-4d82-ac6b-f00c06bf0ad9" />
Prediction: A <-> B <-> D
Actual: Song A Song B Song D
Match: YES


Experiment 8 - Break and Fix (Task 9)
Bug: forgot to update prev pointer in insertAfter
Result: backward traversal breaks at insertion point
Fix: set newNode->prev = cur AND cur->next->prev = newNode


---

Experiment 9 - Insert Song Y (Pelapis)
Before: A <-> B <-> C <-> D <-> E
Operation: insertAfter("Song C", "Song Y")
After: A <-> B <-> C <-> Y <-> D <-> E

Forward: Song A Song B Song C Song Y Song D Song E
Backward: Song E Song D Song Y Song C Song B Song A
