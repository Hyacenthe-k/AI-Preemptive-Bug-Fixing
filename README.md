AI Preemptive Bug Fixing

 Task Overview
Used AI (cluade and chatgpt) to conduct a structured code review of a vulnerable C function
for adding nodes to a singly linked list.

 Files
- `vulnerable.c` — Original code containing logical and memory safety flaws
- `fixed.c` — AI-generated corrected function with all flaws resolved

 AI Tool Used
ChatGPT (GPT-4) / claude sonnet — prompted with a Senior C Developer role

 Bugs Identified
1. Logical Error — Loop traverses past the last node; local pointer reassignment doesn't update the list
2. Memory Safety — No NULL check after malloc; causes segfault on allocation failure
