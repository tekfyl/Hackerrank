/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    Node *curr=head;
    while(curr != NULL){
        cout << curr->data << endl;
        curr = curr->next;
    }
}

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
   Node *temp=new Node; temp->data = data; temp->next=NULL;
    if(head == NULL) head = temp;
    else{
        Node *t=head;
        while(t->next != NULL) t=t->next;
        t->next = temp;
    }
    return head;
}

/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
   Node *temp=new Node; temp->data = data; temp->next = NULL;
    temp->next = head;
    head = temp;
    return head;
}

/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *temp = new Node;
    temp->data = data; temp->next = NULL;
    if(position == 0){
        temp->next = head;
        head = temp;
    }
    else{
        Node *t = head;
        for(int i=0; i<position-1; i++){
            t = t->next;
        }
        temp->next = t->next;
        t->next = temp;
    }
    return head;
}

/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position == 0) return head->next;
    else{
        Node *t = head;
        for(int i=0; i<position-1; i++){
            t=t->next;
        }
        t->next = t->next->next;
    }
    return head;
}

/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head == NULL) return ;
    ReversePrint(head->next);
    cout << head->data << endl;
}

/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head == NULL || head->next == NULL) return head;
    else{
        Node *newNode = head->next;
        head->next = NULL;
        Node *newHead = Reverse(newNode);
        newNode->next = head;
        return newHead;
    }
}

/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL && headB ==NULL) return 1;
    else if(headA == NULL || headB == NULL) return 0;
    if(headA->data == headB->data) return CompareLists(headA->next, headB->next);
    else return 0;
}

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL) return headB;
    else if(headB == NULL) return headA;
    if(headA->data <= headB->data){
        headA->next = MergeLists(headA->next, headB);
    }
    else{
        Node *t = headB;
        headB = headB->next;
        t->next = headA;
        headA = t;
        headA->next = MergeLists(headA->next, headB);
    }
    return headA;
}

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *curr, *res;
    curr = res = head;
    int index=0;
    while(curr->next != NULL){
        curr=curr->next;
        index++;
        if(index>positionFromTail) res=res->next;
    }
    return res->data;
}

/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *c = head;
    while(c->next != NULL){
        c->data == c->next->data ? c->next=c->next->next : c=c->next;
    }
    return head;
}

/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node *s,*f;
    s = f= head;
    while(f!=NULL && f->next!=NULL){
        f=f->next->next;
        s = s->next;
        if(s==f) return 1;
    }
    return 0;
}

/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node *a, *b;
    a =headA; b=headB;
    while(a!=b){
        if(a==NULL) a=headB;
        else a=a->next;
        if(b==NULL) b=headA;
        else b=b->next;
    }
    return a->data;
}


