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

     void add(Node node) {
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

    Node del() {
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

    void showForward() {
        Node temp = head;

        do {
            System.out.println(temp.number);
            temp = temp.next;
        } while(temp != head);
    }

    void showBackward() {
        Node temp = head.back;

        do {
            System.out.println(temp.number);
            temp = temp.back;
        } while(temp != head.back);
    }
    }
}
