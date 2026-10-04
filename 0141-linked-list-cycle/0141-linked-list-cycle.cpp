/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    bool check(vector<ListNode*>&visited,ListNode*curr){
        for(int i=0;i<visited.size();i++){
            if(visited[i]==curr)
            return 1;
        }
        return 0;
    }
public:
    bool hasCycle(ListNode *head) {
        ListNode*curr=head;
        unordered_map<ListNode*,bool>visited;
        while(curr!=NULL){
            if(visited[curr]==1)
            return 1;

            visited[curr]=1;
            curr=curr->next;

            


        }
        return 0;

        
    }
};