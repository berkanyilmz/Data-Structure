package datastructure;

public class Node {
    int number;
    Node next, back;

    public Node(int number) {
        this.number = number;
        next = null;
        back = null;
    }
}
