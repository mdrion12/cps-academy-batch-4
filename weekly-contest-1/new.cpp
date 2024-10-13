#include<bits/stdc++.h>
using namespace std;

// Node class definition
class node
{
public:
    int val;
    node* next;

    // Constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a node at the end of the linked list
void insert_linked_list(node*& head, int V)
{
    node* newnode = new node(V);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

// Function to insert a node at any position in the linked list
void insert_at_any_position(node* head, int position, int val)
{
    node* newnode = new node(val);
    node* temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
        if(temp==NULL)
        {
            cout<<endl<<"Invalid index :"<<position<<endl;
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
    cout << "Inserted at any position" << endl;
}

// Function to insert a node at the head of the linked list
void insert_at_head(node*& head, int v)
{
    node* newnode = new node(v);
    newnode->next = head;
    head = newnode;
    cout << "Inserted at head" << endl;
}

// Function to display the linked list
void display(node* head)
{
    cout << "Here is your linked list: ";
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Function to delete the linked list at any position
void delete_any_position(node *head,int p)
{
    node *temp=head;
    for(int i=1;i<=p-1;i++)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            cout<<endl<<"Invalid index :"<<p<<endl;
            return;
        }
    }
    if(temp->next==NULL)
    {
         cout<<endl<<"Invalid index :"<<p<<endl;
            return;
    }
    node *deletenode=temp->next;
    temp->next=temp->next->next;
    delete deletenode;
    cout<<"node is deleted:"<<endl;
}
// Function to delete the linked list head;
void delete_head(node *&head)
{
    if(head==NULL)
    {
         cout<<endl<<" HEAD IS NOT AVAILABLE :"<<endl;
            return;
    }
    node* deletenode=head;
    head=head->next;
    delete deletenode;
    cout<<" head is deleted"<<endl;
}
int main()
{
    node* head = NULL;

    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print values" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: delete any position" << endl;
        cout << "Option 6: delete head" << endl;
        cout << "Option 7: terminated" << endl;


        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter value: ";
            int value;
            cin >> value;
            insert_linked_list(head, value);
        }
        else if (op == 2)
        {
            display(head);
        }
        else if (op == 3)
        {
            cout << "Enter the position: ";
            int pos;
            cin >> pos;
            cout << "Enter the value to insert: ";
            int v;
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_any_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int p;
          cout<<"enter the position that you deleted"<<endl;
          cin>>p;
          delete_any_position(head,p);
          if(p==0)
          {
            delete_head(head);
          }
        }
        else if(op==6)
        {
           delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }

    return 0;
}
