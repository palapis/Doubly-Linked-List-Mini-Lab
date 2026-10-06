# Individual Reflections

## Reflection Template (fill individually)

---

### Name: Naufal Nafiz Fatturahman
### NIM: 103032500150

**My main contribution:**  
I contributed to updating the experiment log, documenting the traversal and operations, adding new images and outputs, and improving the project documentation.

**What I learned about next and prev:**  
I learned how the `next` and `prev` pointers work in a doubly linked list and how they are used to traverse the list in both forward and backward directions.

**The hardest part:**  
The hardest part was understanding the traversal process and making sure the `next` and `prev` pointers were correctly connected during different operations.

**What AI helped me with:**  
AI helped me understand doubly linked list operations, explain the traversal process, and improve the documentation and experiment log.

**What I changed or fixed myself:**  
I updated the experiment log, added new traversal and operation results, added images and outputs, renamed the experiment log file to Markdown format, and updated the AI notes.

**GitHub Issue / PR / Commit I contributed:**  
- Update experiment log with new traversal and operations
- Update experiment log with new images and outputs
- Update and rename experiment-log.txt to experiment-log.md
- Update experiment-log.txt
- Update AI-NOTES.md
---

### Name: Gyio Rangga Satria Putra
### NIM: 103032500149

**My main contribution:**  
I contributed to updating the README, correcting the task descriptions, updating the run-output, and improving the reflection documentation.

**What I learned about next and prev:**  
I learned how the `next` and `prev` pointers work in a doubly linked list and how they are used to move forward and backward between nodes.

**The hardest part:**  
The hardest part was understanding the relationship between the `next` and `prev` pointers, especially when performing operations that change the connections between nodes.

**What AI helped me with:**  
AI helped me understand doubly linked list concepts, check my implementation, explain errors, and improve the project documentation.

**What I changed or fixed myself:**  
I updated the README and run-output, corrected the task descriptions, updated the reflection, and removed unnecessary executable files from the repository.

**GitHub Issue / PR / Commit I contributed:**  
- Update README formatting for task descriptions
- Update run-output.txt with new tasks and corrections
- Update REFLECTION.md with contributions and fixes
- Revise contributor reflections and documentation
- Updated reflection entries for contributors, corrected names, and improved documentation
- Delete src/main.exe
- Update README.md
---

### Name: Fazli Baktiadi
**NIM:** 103032500153
**Role: Documenter(2)**
**Main Contribution:** Wrote technical documentation for the circular doubly linked list, described node structure, documented every function API, created a UML diagram of the DLL class, and maintained the experiment log.


**What I learned about next and prev:**
- `next` pointer moves forward in the list (head direction)
- `prev` pointer moves backward in the list (tail direction)
- Both must be updated during insert/delete to avoid broken links

**The hardest part:**
Making sure documentation matches the actual implementation behavior exactly — the circular nature with sentinel head/tail made some edge cases tricky to describe accurately, especially the wrap-around cases.

**What AI helped me with:**
AI helped generate the UML diagram syntax for the DLL class, and helped verify my function API descriptions against the code. I cross-checked all descriptions manually.

**What I changed or fixed myself:**
- Wrote full documentation of node structure, function APIs, and usage examples
- Created a UML diagram showing head/next/prev relationships
- Maintained the experiment log with results for each of the 9 tasks
- Added a real-world circular history use case (browser tabs)

**GitHub Issue / PR / Commit I contributed:**
- Commit: "Add UML diagram and API documentation for DLL"
- Commit: "Document experiment log and results"
- Issue: "Docs: need clearer description of head/tail sentinel node convention"


---

### Name: Nigel William Pieters
**NIM:** 103032540003
**Role: Reviewer**
**Main Contribution:** Conducted code review against all requirements, verified correctness for edge cases, reviewed documentation for clarity, checked compile flags for portability, and reported gaps in the task spec mapping.

**What I learned about next and prev:**
- `next` pointer traverses head-first
- `prev` pointer traverses tail-first
- Both must be consistent in circular structure — head->prev = tail and tail->next = head

**The hardest part:**
Catching the insertAfter prev pointer bug — the AI had the right structure but missed updating the new node's prev to point to the previous node. Required manually tracing the pointer links for 4 nodes.

**What AI helped me with:**
AI reviewed the original code statically and flagged inconsistent head/tail pointer handling in deleteNode. I manually reproduced the scenario in a debugger and confirmed the bug before reporting it.

**What I changed or fixed myself:**
- Traced pointer links manually through insertAfter for edge cases
- Reproduced the deleted-at-head bug in the debugger
- Documented the spec coverage gap for Task 7 (delete by position)
- Ran g++ with -Wall -Wextra to catch sign-compare and unused variable warnings

**GitHub Issue / PR / Commit I contributed:**
- Commit: "Review: fix head/tail inconsistency in deleteNode"
- Commit: "Review notes: add warning flags and clean unused vars"
- Issue: "Review: Task 7 spec mismatch - delete by position needs bounds check"

---

### Name: Mathew Glenn Abram Pakpahan
**NIM:** 103032500154
**Role: Builder**
**Main Contribution:** Built the circular doubly linked list from scratch in C++, compiled with g++, set up the CMake build, integrated all 9 task implementations into main.cpp, and resolved the prev pointer bug in insertAfter.

**What I learned about next and prev:**
- `next` pointer moves forward (head direction)
- `prev` pointer moves backward (tail direction)
- In circular DLL, head->prev links to the last node and last node's next links back to head

**The hardest part:**
Getting insertAfter to correctly update four pointer connections (new->next, new->prev, prev->next, curr->prev) in the right order — the circular wrap-around made the off-by-one mistake very subtle.

**What AI helped me with:**
AI provided the initial code structure and diagnosed the prev pointer bug in insertAfter. I verified the fix by recompiling with g++ and running all 9 tasks.

**What I changed or fixed myself:**
- Structured the code into a DLL class with head/tail tracking
- Added all 9 task sections with clear output labels
- Fixed the insertAfter prev pointer bug after AI diagnosis
- Added browser history real-world example
- Set up CMake build configuration for reproducible compiles

**GitHub Issue / PR / Commit I contributed:**
- Commit: "Add complete DLL implementation with all 9 tasks"
- Commit: "Fix prev pointer bug in insertAfter"
- Commit: "Add CMake build configuration"
- Issue: "Bug: backward traversal breaks after insertion"
