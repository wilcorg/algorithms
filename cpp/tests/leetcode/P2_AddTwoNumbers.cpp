#include <leetcode/P2_AddTwoNumbers.hpp>

using TaskTestCase = TestCase<std::pair<std::vector<int32_t>, std::vector<int32_t>>, int32_t>;

class AddTwoNumbersTests : public testing::TestWithParam<TaskTestCase>
{
protected:
    ListNode* linkedListFromVector(const std::vector<int32_t>& vec)
    {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for (const auto num : vec) {
            if (head == nullptr) {
                head = new ListNode(num);
                tail = head;
            } else {
                tail->next = new ListNode(num);
                tail = tail->next;
            }
        }

        return head;
    }

    int32_t numberFromLinkedList(const ListNode* listNode)
    {
        int32_t result = 0;
        while (listNode != nullptr) {
            result = result*10 + listNode->val;
            listNode = listNode->next;
        }

        return result;
    }

    void deleteLinkedList(const ListNode* listNode)
    {
        const ListNode* head = listNode;

        while (head->next != nullptr) {
            const ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        delete head;
    }
};

INSTANTIATE_TEST_SUITE_P(
    AddTwoNumbersTestsParametrized,
    AddTwoNumbersTests,
    testing::Values(
        TaskTestCase{{{2, 4, 3}, {5, 6, 4}}, 708},
        TaskTestCase{{{0}, {0}}, 0},
        TaskTestCase{{{9, 9, 9, 9, 9, 9, 9}, {9, 9, 9, 9}}, 89990001}
    )
);

TEST_P(AddTwoNumbersTests, Parametrized)
{
    const auto [input, expected] = GetParam();

    const ListNode* l1 = linkedListFromVector(input.first);
    const ListNode* l2 = linkedListFromVector(input.second);
    const auto result = numberFromLinkedList(Solution::addTwoNumbers(l1, l2));

    EXPECT_EQ(result, expected);

    deleteLinkedList(l1);
    deleteLinkedList(l2);
}
