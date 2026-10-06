# AI Interaction Notes

## Interaction 1: Code Generation
**AI Help:** Provided Node struct with prev/next/data fields, DLL class with head/tail pointers, insertAfter() and deleteNode() implementations.

**What We Changed/Tested:** Restructured code into task-specific sections, added browser history example, added prediction comparison, compiled with g++ -std=c++17, ran successfully.

## Interaction 2: Bug Debugging (Task 9)
**Prompt:** "In my DLL insertAfter function, after inserting a node, backward traversal shows incorrect order. What's wrong?"

**AI Help:** Identified missing prev pointer updates in insertAfter — newNode->prev and cur->next->prev both need updating.

**What We Changed:** Applied fix, recompiled, backward traversal now works correctly.

## Reflection
We used AI to generate starter code and debug pointer bugs. We verified by compiling and running the program, then testing edge cases manually.