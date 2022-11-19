#include "iostream"
using namespace std;

struct Node {
    int value;
    Node* next;
};

struct List {
    Node* first;
    Node* last;
};

void PushEnd ( int val, List* data);
void PushFront ( int val, List* data);
void PrintList (List data);
void DeleteList (List data);
void ReverseList (List* data);

int main ()
{
    List data;
    data.first = NULL;
    data.last = NULL;
    int val;
    for (int i = 0; i < 4; i++)
    {
        cin >> val;
        PushEnd (val, &data);
    }
    //cout << data.first << data.last << endl;
    cout << "The list" << endl;
    PrintList (data);
    ReverseList (&data);
    cout << "The reverse" << endl;
    PrintList (data);
    DeleteList (data);
}

void PushEnd ( int val, List* data)
{
    Node* num = new Node;
    num->value = val;
    num->next = NULL;
    if (data->first == NULL)
    {
        data->first = num;
        data->last  = num;
        //cout <<"First node " << data->first <<" " << data->last << endl;
    }
    else
    {
        data->last->next = num;
        data->last = num;
        //cout <<"Next nodes " << data->first <<" " << data->last << endl;
    }
}

void PushFront ( int val, List* data)
{
    Node* num = new Node;
    num->value = val;
    num->next=NULL;
    if (data->first == 0)
    {
        data->first = num;
        data->last  = num;
    }
    else
    {
        num->next = data->first;
        data->first = num;
    }
}

void PrintList (List data)
{
    if (data.first == NULL) return;
    else
    {
        Node* pointer = data.first;
        while (pointer != NULL)
        {
            cout << pointer->value << endl;
            pointer = pointer->next;
        }
    }
}

void DeleteList (List data)
{
    if (data.first == NULL) return;
    else
    {
        Node* pointer = data.first;
        Node* free = NULL;
        while (pointer != NULL)
        {
            free = pointer;
            pointer = pointer->next;
            delete (free);
        }
    }
}

void ReverseList (List* data)
{
    if (data->first == NULL) return;
    else
    {
        Node* here = data->first;
        Node* before = NULL;
        Node* after = data->first->next;
        int cycle = 0;
        while (here != NULL)
        {
            if (here != NULL && before != NULL && after != NULL)
            {
                cout <<  cycle << " cycle starts" << " here = " << here->value << " before = " << before->value << " after =  " << after->value << endl;
            }
            after = here->next;
            here->next = before;
            before = here;
            here = after;
            cycle++;
        }
    data->first = before;
    cout << cycle << " cycle over " <<  " before = " << before->value << endl;
    }

}
