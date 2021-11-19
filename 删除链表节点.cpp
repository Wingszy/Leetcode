#include<iostream>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		ListNode*dummyhead = new ListNode();//设置一个头部虚节点
		dummyhead->next = head;
		ListNode*cur = dummyhead;
		while (cur->next != NULL) {
			if (cur->next->val == val) {
				ListNode* tmp = cur->next;
				cur->next = cur->next->next;//创建临时节点存放
				delete tmp;
			}
			else {
				cur = cur->next;
			}
		}
		head = dummyhead->next;//手动删除创建的临时节点
		delete dummyhead;
		return head;
	}
};