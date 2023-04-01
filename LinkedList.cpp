//ID:221405
//Name: Asatullaev Fayzulloh


#include <iostream>
using namespace std;

class Node{
public:
int value;
Node *next;
    Node(): value(0), next(nullptr){};
    Node(int x): value(x), next(nullptr){};
    Node(int x, Node *n): value(x), next(n){};
};

class List{
private:
    Node* head;
public:
    List(){head=nullptr;}
    Node* insert_front(int x){
        Node* newnode = new Node(x);
        newnode->next = head;
        head = newnode;
        return head;
    };
    Node* insert_afterMiddle(int x){
        Node* h=head;
        Node* newnode = new Node(x);
        int size=0;
        while(h != nullptr){
            h=h->next;
            size++;
        }
        h=head;
        int mid=size/2;
        while(mid != 0){
            h=h->next;
            mid--;
        }
        newnode->next = h->next;
        h->next = newnode;
        return head;
    };
    Node* insert_back(int x){
        Node* newnode = new Node(x);
        Node* h = head;
        while(h->next != nullptr){
            h=h->next;
        }
        h->next=newnode;
        return head;
    };
    Node* insert_after(int index, int x){
        int i = index;
        Node* h=head;
        Node* newnode = new Node(x);
        while(i != 0){
            h=h->next;
            i--;
        }
        newnode->next = h->next;
        h->next = newnode;
        return head;
    };
    Node* erase_front(){
        Node* e=head;
        head=head->next;
        delete e;
        return head;
    };
    Node* erase_back(){
        Node* h=head;
        while(h->next->next != nullptr){
            h=h->next;
        }
        Node* e=h->next;
        h->next = h->next->next;
        delete(e);
        return head;
    };
    Node* erase_middle(){
        Node* h=head;
        int size=0;
        while(h != nullptr){
            h=h->next;
            size++;
        }
        h=head;
        int mid = (size/2)-1;
        while(mid != 0){
            h=h->next;
            mid--;
        }
        Node* e=h->next;
        h->next = h->next->next;
        delete(e);
        return head;
    };
    Node* erase_after(int index){
        Node* h=head;
        int i=index;
        while(i != 0){
            h=h->next;
            i--;
        }
        Node* e=h->next;
        h->next = h->next->next;
        delete(e);
        return head;
    };
    int searchIndexByValue(int val){
        int index=0;
        Node* h=head;
        while(h != nullptr){
            if (h->value == val){
                return index;
            }
        index++;
        h=h->next;
        }
        return -1;
    };
    int searchValueByIndex(int index){
        Node* h=head;
        int i=0;
        while(h != nullptr){
            if(i == index){
                return h->value;
            }
            h=h->next;
            i++;
        }
        return -1;
    };
    void displayList(){
        Node* h = head;
        while(h != nullptr){
            cout << h->value <<" ";
            h=h->next;
        }
    };
};

int main(int argc, const char * argv[]){
List l;
//test insert_front()
for(int i=1;i<6;i++){
    l.insert_front(i);
}
cout<<"Test insert_front(): ";
    l.displayList();
cout<<endl;

//test insert_afterMiddle()
l.insert_afterMiddle(100);
cout<<"Test insert_afterMiddle(100): ";
    l.displayList();
cout<<endl;
    
//test insert_back()
for(int i=6;i<11;i++){
    l.insert_back(i);
}
cout<<"Test insert_back(): ";
    l.displayList();
cout<<endl;
    
//test erase_middle()
l.erase_middle();
cout<<"Test erase_middle(): ";
    l.displayList();
cout<<endl;
    
//test erase_back()
l.erase_back();
cout<<"Test erase_back(): ";
    l.displayList();
cout<<endl;
    
//test insert_after()
l.insert_after(4, 999);
cout<<"Test insert_after(4,999): ";
    l.displayList();
cout<<endl;
    
//test erase_after()
l.erase_after(4);
cout<<"Test erase_after(4): ";
    l.displayList();
cout<<endl;
    
//test erase_front()
l.erase_front();
cout<<"Test erase_front(): ";
    l.displayList();
cout<<endl;
    
//test searchValueByIndex()
cout<<"Test searchValueByIndex(3): "<<l.searchValueByIndex(3)<<endl;
    
//testsearchIndexByValue()
cout<<"Test searchIndexByValue(3): "<<l.searchIndexByValue(3)<<endl;
    
return 0;
}
