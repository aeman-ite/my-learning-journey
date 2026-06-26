#include <iostream>
using namespace std;
struct node {
int data =0; 
node *next;
};

node *head = NULL;
//* دالة اضافة عقدة 
void insertNodeToLinkedlist(int value ){
node *newNode = new node;
node *temp;
//بالنسبة للقيمة فهي تساوي القيمة المرسلة
newNode->data = value;

//اما بالنسبة للمؤشر 
if ( head == NULL){
    head = newNode;
    newNode->next = NULL;
}
else{
    temp = head;
    while (temp->next != NULL){
     temp = temp->next;
  }
temp->next = newNode;
newNode->next = NULL;
 }
}
//دالة اظهار القيم باللينكد ليست
void display(){
    if (head == NULL){
        cout<<"linked is empty";

    }
    else{
        node *temp = head;
        while (temp!= NULL){
            cout<<temp->data<<"\n";
            temp = temp->next;
        }
    }
}
//دالة اضافة عقدة بالبداية
void insertNodeAtBegToLinkedlist(int value){
    node * newNode = new node;
    newNode->data = value;
    newNode ->next = head; 
    head = newNode;
}
//دالة لحذف اول غقدة 
void deleteFirstNodeToLinkedlist(){
    if (head == NULL){
        cout<<"linked list is empty";
    }
    else{
    node *firstNode = head;
    head = head->next;
    firstNode->next = NULL;
    delete(firstNode);
}
}

//دالة لحذف اي عقدة في القائمة
void deletNodeToLinkedlist(int value){
    node * previos ;
    node * current;
previos=head;
current = head;
    if (head == NULL ){
        cout<<"linked list is empty";
    }
else if(current->data == value ){
    head = current ->next;
    current -> next = NULL;
    free(current);
    return;
} 
else{
    while (current ->data != value){
        previos = current;
        current = current->next;
        if(current == NULL){
            cout<<"no fonded data";
            return;
        }
    }
previos ->next = current ->next;
current ->next = NULL;
free(current);

}

}

//دالة لحذف اخر عقدة من القائمة 
void deleteLastNodeToLinkedlist(){
    if (head == NULL){
        cout<<"linked list is empte";
    }
else if(head ->next == NULL){
    delete(head);
    head = NULL;

}
else {
    node *temp = head;
    while (temp->next->next != NULL){
        temp = temp->next;
    }
    delete(temp->next);
    temp ->next = NULL;
}

}

//! DOUBLE LINKEDLIST
struct nodedouble {
    int data;
    nodedouble *nextdouble;
    nodedouble *prev;
};
nodedouble *headDouble = NULL;

void insertNodedoubleLinkedlist(int value){
    nodedouble *newNodedouble = new nodedouble;

    //بالنسبة لقيمة البيانات فهي تساوي االقيمة المرسلة
    newNodedouble->data = value ;
//اما بالنسبة للمؤشرات 
 if(headDouble == NULL){
    headDouble =  newNodedouble ;
    newNodedouble->prev = NULL;
    newNodedouble->nextdouble= NULL;
 }
else {
    nodedouble *temp = headDouble ;
    while (temp->nextdouble != NULL){
           temp = temp->nextdouble;
    }
temp->nextdouble = newNodedouble;
 newNodedouble->prev = temp;
 newNodedouble->nextdouble = NULL; 

}

}
//دالة اظهار العقد
void displayDoublLinkedlist(){
    if(headDouble == NULL){
        cout<<"double linkedlist is empty";
    }
else{
    nodedouble * temp = headDouble;
    while (temp != NULL ){
        cout<<temp->data;
        cout<<"  ";
        temp = temp->nextdouble;
    }
  }
}
//دالة لاضافة عقدة في بداية القائمة
void insertNodeAtBegDoubllinkedlist(int value ){
    nodedouble *newNode = new nodedouble;
     newNode->data = value;
     newNode->nextdouble = NULL;
     newNode->prev = NULL;
     if(headDouble == NULL){
        headDouble = newNode;
     }
     else {
        headDouble->prev = newNode;
        newNode->nextdouble = headDouble;
        headDouble = newNode;
     }
}

//دالة طباعه العقد بالعكس
void reversDisplayDoubleLinkedlist(){
    if (headDouble == NULL ){
        cout<<"linked list is empty";
        return;
    }
    nodedouble * temp = headDouble;
    while (temp-> nextdouble!=  NULL ){
        temp = temp->nextdouble;
    }
while (temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->prev;
}
}
//دالة لحذف اول عقدة 
   void deleteFirstNodeDoubleLinkedlist(){
    if (headDouble == NULL ){
        cout <<"linked list is empty";
    }
     else{
        nodedouble * temp = headDouble;
        headDouble = headDouble->nextdouble;
        headDouble->prev = NULL;
        temp ->nextdouble = NULL;
        free(temp);
     }

   }
    
   //! الستاك باستخدام المصفوفة 
     
    const int size = 5;
    int stack[size];
    int top = -1;

    //دالة ال  push لاضافة عناصر الى الستاك
    void push(int value ){
        if (top ==size -1){
            cout <<"stack is overflow";
        }
        else {
            top++;
            stack[top] = value;
        }
    }
    // دالة طباعة العناصر
void displaytoStack(){
    if (top == -1){
        cout<<"stack is empty"<<endl;
    }
else {
    cout<<"value of stack are : ";
    for(int i =top; i>=0; i--){
        cout<<stack[i]<<" ";
        
    }
  }
}
//دالة لحذف اخر عنصر 
void popStack(){
    if (top == -1 ){
        cout<<"stack is empty";
    }
    else{
        // cout<<stack[top];
        top--;
       
    }
}
//دالة لعرض العنصر الاخير 
void peekStack(){
    if (top == -1 ){
        cout<<"<stack is empty";
    }
    else{
        cout<<stack[top];
    }
}
//!الستاك باستخدام اللينكد ليست 
struct nodeStack{
    int dataStack;
    nodeStack *nextStack;
};
nodeStack *topStack = NULL;

//دالة اضافة الععناصر ل اللينكد ليست 

void pushStack(int value){
  nodeStack *newnode = new nodeStack;
  newnode->dataStack = value;
  newnode->nextStack = topStack;
  topStack = newnode;
}
//دالة طباعه الارقام من القائمة
void displayNodeStack(){
    if (topStack == NULL){
        cout<<"linked list is empty";
    }
    else{
        nodeStack* current= topStack;
        cout<<"the value of stck linked list are : ";
        while(current != NULL){
            
            cout<<current->dataStack<<" ";
            current = current->nextStack;
        }
    }
}

//الطابوور 

const int sizeQ = 5;
int queue[sizeQ];
int front = -1 ;
int rear = -1;
//دالة اضافة العناصر للطابور 
void enQueue (int value){
    if (rear == sizeQ - 1){
        cout<<"Queue is full";
    }
    else if (front == -1 && rear == -1 ){
        front =0;
         rear= 0 ;
         queue [rear]=value;
    }
    else{
        rear++;
        queue[rear] = value;
    }
}
//دالة طباعه عناصر الطابور 
void displayQueue(){
    if(front ==-1 && rear ==-1 ){
        cout<<"Queue is empty";
    }
    else {
        cout<<"value's queue : ";
        for(int i =front ; i<=rear; i++){
            cout<<queue[i]<<" , ";
        }
    }
}
//دالة لحذف ال front
void deQueue(){
    int value =0; 
    if (front == -1 && rear == -1){
       cout<<"queue is empty";
    }
    else if (front == rear){
        value = queue[front];
        front =-1 ; 
        rear = -1;
    }
else{
    value = queue [ front ];
    front ++;
}
cout<<"this value is delet : "<<value<<endl;


}

int main()
{
enQueue(8);
enQueue(7);
enQueue(9);
enQueue(5);
enQueue(98);
displayQueue();
deQueue();
displayQueue();
return 0; }
