package linklist;

public class DoubleLinkList {

    Node head, tail;

    public DoubleLinkList() {
        this.head = null;
        this.tail = null;
    }

    boolean isEmpty() {
        return head == null;
    }

    boolean isThere(int value) {
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
            head.back = node;
            head = node;
        }
    }

    void addTail(Node node) {
        if (isEmpty()) {
            head = node;
            tail = node;
        } else {
            tail.next = node;
            node.back = tail;
            tail = node;
        }
    }

    void add(Node node, int after) {
        if (isThere(after)) {
            if (tail.number == after) {
                addTail(node);
            }
            else {
                Node temp = head;
                while (temp.number != after)
                    temp = temp.next;

                node.next = temp.next;
                node.back = temp;
                node.next.back = node;
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
            head.back.next = null;
            head.back = null;
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
            Node deleted = tail;
            tail = tail.back;
            tail.next = null;
            return deleted;
        }
    }

    Node del(int value) {
        if (isEmpty()) {
            System.out.println("List is empty !");
            return null;
        }
        else if (head.number == value) {
            return delHead();
        }
        else if (tail.number == value) {
            return delTail();
        }
        else if (isThere(value)) {
            Node temp = head;
            while (temp.number != value)
                temp = temp.next;

            Node deleted = temp;
            temp.back.next = temp.next;
            temp.next.back = temp.back;
            temp.next = null;
            temp.back = null;
            return deleted;
        } else {
            System.out.println("Value is not in list");
            return null;
        }
    }

    void showForward() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.number + " ");
            temp = temp.next;
        }
    }
    void showBackward() {
        Node temp = tail;

        while (temp != null) {
            System.out.print(temp.number + " ");
            temp = temp.back;
        }
    }
}
