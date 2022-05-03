package datastructure;

public class CircleLinkList {

    Node head;
    int size;

    CircleLinkList() {
        head = null;
        size = 0;
    }

    boolean isEmpty() {
        return head == null;
    }

    boolean isThere(int value) {
        Node temp = head;
        for (int i = 0; i <= size; i++) {
            if (temp.number == value)
                return true;
            temp = temp.next;
        }
        return false;
    }

     void addHead(Node node) {
        if (isEmpty()) {
            head = node;
            head.next = node;
            head.back = node;
        } else {
            node.next = head;
            node.back = head.back;
            head.back = node;
            head = node;
            head.back.next = head;
        }
        size++;
        System.out.println("Adding is successful");
    }

    void addTail(Node node) {
        if (isEmpty()) {
            head = node;
            head.next = node;
            head.back = node;
        } else {
            node.back = head.back;
            head.back.next = node;
            node.next = head;
            head.back = node;
        }
        size++;
        System.out.println("Adding is successful");
    }

    void add(Node node, int after) {
        if (isEmpty()) {
            System.out.println("List is empty");
        }
        else if (isThere(after)) {
            if (node.number == head.back.number) {
                addTail(node);
            }
            else {
                Node temp = head;
                while (temp.number != after)
                    temp = temp.next;

                node.back = temp;
                node.next = temp.next;
                node.next.back = node;
                node.back.next = node;
            }
            size++;
            System.out.println("Adding is successful");
        }
        else {
            System.out.println("Value is not in list");
        }
    }

    Node delHead() {
        if (isEmpty()) {
            System.out.println("List is empty");
            return null;
        }
        Node deleted = head;
        head.back.next = head.next;
        head.next.back = head.back;
        head = head.next;
        size--;
        System.out.println("Deleting is successful");
        return deleted;
    }

    Node delTail() {
        if (isEmpty()) {
            System.out.println("List is empty");
            return null;
        }
        Node deleted = head.back;
        head.back.back.next = head;
        head.back = head.back.back;
        size--;
        System.out.println("Deleting is successful");
        return deleted;
    }

    Node del(int value) {
        if (isEmpty()) {
            System.out.println("List is empty");
            return null;
        }
        else if(isThere(value)) {
            if (head.number == value) {
                size--;
                System.out.println("Deleting is successful");
                return delHead();
            }
            else if (head.back.number == value) {
                size--;
                System.out.println("Deleting is successful");
                return delTail();
            }

            Node temp = head;
            while (temp.number != value)
                temp = temp.next;

            Node deleted = temp;
            temp.back.next = temp.next;
            temp.next.back = temp.back;
            size--;
            System.out.println("Deleting is successful");
            return deleted;
        }
        else {
            System.out.println("Value is not in list");
            return null;
        }
    }

    void showForward() {
        Node temp = head;

        do {
            System.out.println(temp.number);
            temp = temp.next;
        } while(temp != head);
    }

    void showBackward() {
        Node temp = head.back;
        System.out.println(temp.number);
        temp = temp.back;

        while (temp != head.back) {
            System.out.println(temp.number);
            temp = temp.back;
        }
    }
}
