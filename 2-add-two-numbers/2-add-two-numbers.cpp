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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* l3 = new ListNode(0);// dummuy node
        int carry=0;
        ListNode* head =l3;
        while(l1 && l2)
        {
                       //9      //7      0     
            int value= l1->val+l2->val+carry; //16
            carry=value/10; //16/10=6
            l3->next= new ListNode(value%10);
            l3=l3->next;
            l1=l1->next;
            l2=l2->next;
        }
         while(l1 >l2)
        {
                       
            int value= l1->val+carry; //16
            carry=value/10; //16/10=6
            l3->next= new ListNode(value%10);
            l3=l3->next;
            l1=l1->next;
         
        }
        while(l2>l1 )
        {
                       
            int value= l2->val+carry; //16
            carry=value/10; //16/10=6
            l3->next= new ListNode(value%10);
            l3=l3->next;
            l2=l2->next;
         
        }
        if(carry){
            l3->next =new ListNode(carry);
        }
        return head->next; //l3 reach at end
        
        
        
    }
};