/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if ( (head == NULL) || (head->next == NULL) || (head->next->next == NULL))
            return ;
        stack<ListNode*> stk ;
        ListNode* ptr = head ;
        int size = 0; // size of stk
        while (ptr != NULL){
            stk.push(ptr) ;
            size ++ ;
            ptr = ptr->next ;
        }
        ListNode* ptr_2 = head ;
        for (int i=0; i<size/2; i++){
            ListNode* element = stk.top() ;
            stk.pop() ;
            element->next = ptr_2->next ;
            ptr_2->next = element ;
            ptr_2 = ptr_2->next->next ;
        }
        ptr_2->next = NULL ;
    }
};

/*

insert element between ptr_2 and its next :

ptr2 -> [element] -> (ptr_2-next)

*/
