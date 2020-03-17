/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::subtract(ListNode* A) {
	stack<int> stc ;

	ListNode * tmp = A ;

	while ( tmp != NULL ){
		stc.push( tmp->val ) ;
		tmp = tmp->next ;
	}

	tmp = A ;

	int count = stc.size()>>1 ;

	while( count ) {
		count-- ;
		tmp->val = stc.top() - tmp->val ;
		stc.pop() ;
		tmp = tmp->next ;
	}

	return A ;
}
