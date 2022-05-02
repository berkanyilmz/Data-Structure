package queue;

public class Queue {

    Node head, tail;

    public Queue() {
        head = null;
        tail = null;
    }

    boolean isEmpty() {
        boolean flag = head == null;
        return flag;
    }

    void add(Node node) {
        if (isEmpty()) {
            head = node;
            tail = node;
        } else {
            head.next = node;
            head = node;
        }
    }

    Node del() {
        if (isEmpty()) {
            System.out.println("Queue is empty !");
            return null;
        } else {
            Node deleted = tail;
            tail = tail.next;
            return deleted;
        }
    }

    void show() {
        if (isEmpty()) {
            System.out.println("Queue is empty !");
        } else {
            Node temp = tail;

            while (temp != null) {
                System.out.println(temp.number);
                temp = temp.next;
            }
        }
    }
}
