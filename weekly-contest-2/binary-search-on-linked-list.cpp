#include <bits/stdc++.h>
using namespace std;
#define ll long long
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int sz = 0;
int count()
{
    return sz;
}
node *head = NULL;
node add(int value)
{
    node *newnode = new node(value);
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
    sz++;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void sort_linkedlist(node *&head)
{
    if (head == NULL)
        return;
    node *temp1 = head;

    while (temp1 != NULL)
    {
        node *temp2 = temp1->next;

        while (temp2 != NULL)
        {

            if (temp1->val > temp2->val)
            {

                swap(temp1->val, temp2->val);
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}
node *middle_node(node *start, node *end)
{
    if (start == NULL)
        return NULL;

    node *slow = start;
    node *fast = start;

    while (fast != end && fast->next != end)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

node *binary_search(node *head, int target)
{
    node *start = head;
    node *end = NULL;

    while (start != end)
    {

        node *mid = middle_node(start, end);

        if (mid == NULL)
            return NULL;

        if (mid->val == target)
        {
            return mid;
        }

        else if (target < mid->val)
        {
            end = mid;
        }

        else
        {
            start = mid->next;
        }
    }

    return NULL;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int v;
        cin >> v;
        add(v);
    }
    sort_linkedlist(head);
    print(head);
    cout << "\n";
    node *newnode = binary_search(head, 100);
    if (newnode != NULL)
    {
        cout << newnode->val << " \n";
    }
    else
    {
        cout << " the target value is not in linked list" << "\n";
    }
    return 0;
}