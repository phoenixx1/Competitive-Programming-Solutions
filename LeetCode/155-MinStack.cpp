class MinStack {
public:
    int data;
    MinStack *next;
    MinStack *head = NULL;
    MinStack() {
        
    }
    void push(int x) {
        MinStack *temp = head; 
        MinStack *newNode = new MinStack();
        newNode->data = x;
        newNode->next = NULL;
        head = newNode;
        newNode->next = temp;
    }
    void pop() {
        //for memory management purpose not needed in this code
        //MinStack *temp = head;
        head = head->next;
        // temp->next = NULL;
        // free(temp);
    }
    int top() {
        return head->data;
    }
    int getMin() {
        int minValue = INT_MAX;
        MinStack *temp = head;
        while(temp != NULL){
            if(temp->data < minValue){
                minValue = temp->data;
            }
            temp = temp->next;
        }
        return minValue;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */