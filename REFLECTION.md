# Individual Reflections

## Reflection Template (fill individually)

---

### Name: Naufal Nafiz Fathurrahman
**NIM:** 103032500150
**Role: Tester**
**Main Contribution:** Tested the full DLL implementation across all 9 tasks, wrote test scripts for forward/backward traversal, insert, and delete operations, and identified the prev-pointer bug in insertAfter.

**What I learned about next and prev:**
- `next` pointer moves forward in the list (head direction)
- `prev` pointer moves backward in the list (tail direction)
- Both must be updated during insert/delete to avoid broken links

**The hardest part:**
Writing test cases that cover all edge cases — head insertion, tail deletion, and empty list insertion required careful pointer tracing to avoid false positives.

**What AI helped me with:**
AI provided the test script scaffolding and helped me catch a null-pointer dereference in my deleteNode test case, I verified by running the tests with valgrind.

**What I changed or fixed myself:**
- Designed test scripts for all 9 tasks with expected vs, actual output comparison
- Traced the prev pointer bug in insertAfter via test execution
- Added edge case tests for empty list, single node, and two-node scenarios

**GitHub Issue / PR / Commit I contributed:**
- Commit: "Add comprehensive test suite for DLL tasks 1-9"
- Issue: "Bug: backward traversal breaks after insertion in insertAfter"
- Issue: "Test coverage gaps in Tasks 4 and 6 edge cases"

---

### Name: Gyio Rangga Satria Putra
**NIM:** 103032500149
**Role: Documenter**
**Main Contribution:** Authored the user-facing README guide and example usage documentation for the DLL, created the step-by-step tutorial, and wrote the real-world example explaining how circular doubly linked lists are used in browsers.

**What I learned about next and prev:**
- `next` pointer links forward between nodes in the list
- `prev` pointer links backward between nodes, allowing reverse traversal
- In a circular DLL the last node's `next` points to head and head's `prev` points to the last node

**The hardest part:**
Explaining the circular doubly linked list concept to someone who has never seen it before without overwhelming them with pointer diagrams. I had to simplify the real-world analogy to make it stick.

**What AI helped me with:**
AI helped draft the README template and suggested a clearer phrasing for the circular wrap-around explanation. I rewrote the examples and verified the analogy against the code myself.

**What I changed or fixed myself:**
- Wrote README with setup and usage instructions
- Created a step-by-step tutorial covering all 9 tasks
- Wrote a browser-history real-world example showing back/forward navigation
- Added a quick reference guide for insert/delete operations

**GitHub Issue / PR / Commit I contributed:**
- Commit: "Add README with usage guide and 9-task tutorial"
- Commit: "Add real-world browser history example"
- Issue: "Docs: quick reference guide for insert/delete API is incomplete"

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

- Issue #6: Investigated backward traversal and checked `prev` pointer behavior after insertion.