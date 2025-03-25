# 🔢 Add Two Numbers (Linked List)

## 📜 Problem Statement
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each node contains a single digit. Add the two numbers and return the sum as a linked list.

### 📌 Example
#### 🔹 Input:
```
l1 = [2,4,3], l2 = [5,6,4]
```
#### 🔹 Output:
```
[7,0,8]
```
#### 🔹 Explanation:
```
342 + 465 = 807
```

## 🛠 Solution Explanation
The solution is implemented using a C++ program that performs the addition of two numbers stored in reverse order as linked lists.

### 💡 Approach:
1. 🖱 Use a pointer to iterate through both linked lists.
2. ➕ Add corresponding digits along with a `carry` value.
3. 🔄 Create a new linked list to store the sum.
4. 🎯 If a carry remains after processing both lists, append it as a new node.

### 📝 Code Implementation
```cpp
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0); // Dummy node to simplify logic
        ListNode* tail = &dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }
        return dummy.next;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Example usage
int main() {
    // Creating linked list 342 -> [2 -> 4 -> 3]
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Creating linked list 465 -> [5 -> 6 -> 4]
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);
    printList(result);  // Output: 7 0 8

    return 0;
}
```

### ⏳ Complexity Analysis
- **⏱ Time Complexity:** `O(max(N, M))`, where `N` and `M` are the lengths of the two linked lists.
- **💾 Space Complexity:** `O(max(N, M))`, as we create a new linked list to store the result.

### 🔍 Edge Cases Considered:
- 📏 Different lengths of input linked lists.
- 🔄 Presence of carry-over in the last digit.
- 🟢 Single-digit numbers (e.g., `[0]` and `[0]`).

This implementation efficiently computes the sum while handling all possible cases correctly. 🚀

