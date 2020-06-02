/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


/*
Poblem Statement -> https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3348/

Idea -> LinkedList Traversal
Complexity -> O(n), O(1)


*/
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *p, *q, *r;
        p = node->next;
        q = node;
        r = p->next;
        while(p){
            q->val = p->val;
            if(r){
                q = p;
                p = r;
                r = r->next;
            }
            else
                break;
        }
        q->next = NULL;
    }
};
