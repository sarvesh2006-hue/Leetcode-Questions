/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*curra=headA,*currb=headB;
        int count1=0,count2=0;
        while(curra){
            count1++;
            curra=curra->next;
        }
        while(currb){
            count2++;
            currb=currb->next;
        }
        curra=headA;
        currb=headB;
        while(count1>count2){
            count1--;
            curra=curra->next;
        }
        while(count2>count1){
            count2--;
            currb=currb->next;
        }
        while(curra!=currb){
            curra=curra->next;
            currb=currb->next;
        }
        if(!curra)
        return NULL;

        return curra;
            
        

        
    }
};