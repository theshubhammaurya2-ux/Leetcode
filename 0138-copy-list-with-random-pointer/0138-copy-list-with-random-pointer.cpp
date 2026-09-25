/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
              //step 1
          Node*dummy=new Node(0);
          Node*tempc=dummy;
          Node*temp=head;
          while(temp!=NULL){
             Node*a=new  Node(temp->val);
             tempc->next=a;
             tempc=tempc->next;
             temp=temp->next;
          }
           Node*b=dummy->next;
           Node*a=head;
           //step2 make a map of origianl,dublicate
         unordered_map< Node*, Node*>m;  
            Node* tempa=a;
            Node* tempb=b;
           while(tempa!=NULL){
            m[tempa]=tempb;
            tempa=tempa->next;
            tempb=tempb->next;
           }
          for(auto x:m){
             Node*o=x.first;
             Node*d=x.second;
             if(o->random!=NULL){
                Node*orand=o->random;
                Node*dubrand=m[o->random];
                d->random=dubrand;
              }
          }
          return b;  
    }
};