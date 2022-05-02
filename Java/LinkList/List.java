package list;

public class List {

    Node head, tail;

    public List() {
        this.head = null;
        this.tail = null;
    }

    boolean isEmpty() {
        return head == null;
    }

    boolean search(int value) {
        if (!isEmpty()) {
            Node temp = head;
            while (temp != null) {
                if (temp.number == value)
                    return true;
                temp = temp.next;
            }
        }
        return false;
    }

    void addHead(Node node) {
        if (isEmpty()) {
            head = node;
            tail = node;
        } else {
            node.next = head;
            head = node;
        }
    }

    void addTail(Node node) {
        if (isEmpty()) {
            head = node;
            tail = node;
        } else {
            tail.next = node;
            tail = node;
        }
    }

    void add(Node node, int after) {
        if (isEmpty()) {
            head = null;
            tail = null;
        }
        else if (search(after)) {
            if (node.number == head.number)
                addHead(node);
            else if(node.number == tail.number)
                addTail(node);
            else {
                Node temp = head;
                while (temp.number != after)
                    temp = temp.next;

                node.next = temp.next;
                temp.next = node;
            }
        }
        else {
            System.out.println("Value is not in list !");
        }
    }

    Node delHead() {
        if (isEmpty()) {
            System.out.println("List is empty !");
            return null;
        } else {
            Node deleted = head;
            head = head.next;
            return deleted;
        }
    }

    Node delTail() {
        if (isEmpty()) {
            System.out.println("List is empty");
            return null;
        }
        else if(head.next == null) {
            Node deleted = head;
            head = null;
            tail = null;
            return deleted;
        }
        else {
            Node temp = head;

            while (temp.next.next != null)
                temp = temp.next;

            Node deleted = tail;
            tail = temp;
            tail.next = null;
            return deleted;
        }
    }

    Node del(int value) {
        if (isEmpty()) {
            System.out.println("List is empty !");
            return null;
        }
        else if (search(value)) {
            Node previous = null;
            Node temp = head;

            while (temp.number != value) {
                previous = temp;
                temp = temp.next;
            }

            Node deleted = temp;
            previous.next = temp.next;
            return deleted;
        } else {
            System.out.println("Value is not in list");
            return null;
        }
    }

    void show() {
        Node temp = head;

        while (temp != null) {
            System.out.println(temp.number);
            temp = temp.next;
        }
    }

}
