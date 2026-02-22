#pragma once

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution
{
public:
    static ListNode* addTwoNumbers(const ListNode* l1, const ListNode* l2)
    {
        auto* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            const int32_t l1Num = l1 == nullptr ? 0 : l1->val;
            const int32_t l2Num = l2 == nullptr ? 0 : l2->val;

            int32_t sum = l1Num + l2Num + carry;
            carry = sum / 10;
            sum %= 10;

            auto* newNode = new ListNode(sum);
            tail->next = newNode;
            tail = tail->next;

            l1 = l1 == nullptr ? nullptr : l1->next;
            l2 = l2 == nullptr ? nullptr : l2->next;
        }

        ListNode* result = dummyHead->next;
        delete dummyHead;

        return result;
    }
};
