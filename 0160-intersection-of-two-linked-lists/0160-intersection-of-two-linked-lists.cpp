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
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
       ListNode* tempa=heada;
        ListNode* tempb=headb;
        int len1=0;
        int len2=0;
        while(tempa!=NULL){
            len1++;
            tempa=tempa->next;
        }
          while(tempb!=NULL){
            len2++;
            tempb=tempb->next;
        }
        
        tempa=heada;
        tempb=headb;

        if(len1>len2){
            for(int i=1;i<=(len1-len2);i++){
                tempa=tempa->next;
            }
            while(tempa!=tempb){
                tempa=tempa->next;
                tempb=tempb->next;
            }
            return tempa;
        }

        
        else{
            for(int i=1;i<=(len2-len1);i++){
                tempb=tempb->next;
            }
            while(tempb!=tempa){
                tempa=tempa->next;
                tempb=tempb->next;
            }
            return tempb;
        }
        return NULL;
    }
};