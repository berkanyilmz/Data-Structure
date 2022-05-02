class Node
{
public:
    Node *back, *next;
    int number;

    Node(int number)
    {
        this->number = number;
        back = nullptr;
        next = nullptr;
    }
};