#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

class Solution
{
public:
    void swapPairs(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *tail = nullptr;
        while (temp != nullptr && temp->next != nullptr)
        {
            ListNode *Next = temp->next;
            if (temp == head)
            {
                head = Next;
                head->next = temp;
                head->next->next = Next->next;
                // std::cout << head->val << "\n";
            }
            else if (Next->next != nullptr)
            {
                temp->next = Next->next;
                temp->next->next = Next;
                std::cout << temp->val << "\n";
            }
            temp = temp->next;
        }
        // return head;
    }
};

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    std::cout << "Original List: ";
    printList(head);

    Solution solution;
    solution.swapPairs(head);

    std::cout << "Swapped List: ";
    printList(head);

    return 0;
}
