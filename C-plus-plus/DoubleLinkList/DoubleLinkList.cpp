#include "Node.cpp"
#include <iostream>

using namespace std;

class DoubleLinkList
{
public:
    Node *head, *tail;

    DoubleLinkList() {
        head = nullptr;
        tail = nullptr;
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    bool isThere(int value) const {
        if (!isEmpty())
        {
            Node *temp = head;
            while (temp != nullptr)
            {
                if (temp->number == value)
                    return true;
                temp = temp->next;
            }
        }
        return false;
    }

    void addHead(Node *node)
    {
        if (isEmpty())
        {
            head = node;
            tail = node;
        } else
        {
            head->back = node;
            node->next = head;
            head = node;
        }
    }

    void addTail(Node *node)
    {
        if (isEmpty())
        {
            head = node;
            tail = node;
        } else
        {
            tail->next = node;
            node->back = tail;
            tail = node;
        }
    }

    void add(Node* node, int after)
    {
        if (isThere(after))
        {
          if (tail->number == after)
              addTail(node);
          else
          {
              Node *temp = head;
              while (temp->number != after)
                  temp = temp->next;


              node->next = temp->next;
              node->back = temp;
              node->next->back = node;
              temp->next = node;
          }
        }
        else
            cout << "Value is not in list" << endl;
    }

    Node *delHead()
    {
        if (isEmpty())
        {
            cout << "List is empty" << endl;
            return nullptr;
        } else
        {
            Node *deleted = head;
            head = head->next;
            head->back->next = nullptr;
            delete head->back;
            head->back = nullptr;
            return deleted;
        }
    }

    Node *delTail()
    {
        if (isEmpty())
        {
            cout << "List is empty" << endl;
            return nullptr;
        } else
        {
            Node *deleted = tail;
            tail = tail->back;
            tail->next->back = nullptr;
            delete tail->next;
            tail->next = nullptr;
            return deleted;
        }
    }

    Node *del(int value)
    {
        if (isEmpty())
        {
            cout << "List is empty" << endl;
            return nullptr;
        }
        else if (!isEmpty() && head->number == value)
        {
            return delHead();
        }
        else if (!isEmpty() && tail->number == value)
        {
            return delTail();
        }
        else if (isThere(value))
        {
            Node *temp = head;
            while (temp->number != value)
                temp = temp->next;

            Node *deleted = temp;
            temp->back->next = temp->next;
            temp->next->back = temp->back;
            temp->next = nullptr;
            temp->back = nullptr;
            delete temp;
            return deleted;
        }
        cout << "Value is not in list" << endl;
        return nullptr;
    }

    void showForward() const
    {
        if (!isEmpty())
        {
            Node *temp = head;
            while (temp != nullptr)
            {
                cout << temp->number << " ";
                temp = temp->next;
            }
            cout << endl;
        } else
        {
            cout << "List is empty" << endl;
        }
    }

    void showBackward() const
    {
        if (!isEmpty())
        {
            Node *temp = tail;
            while (temp != nullptr)
            {
                cout << temp->number << " ";
                temp = temp->back;
            }
            cout << endl;
        } else
        {
            cout << "List is empty" << endl;
        }
    }
};