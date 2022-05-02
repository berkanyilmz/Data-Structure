package stack;

public class Main {

    public static void main(String[] args) {
        Stack stack = new Stack();

        stack.push(new Node(2));
        stack.push(new Node(1));
        stack.push(new Node(3));
        stack.push(new Node(7));
        stack.push(new Node(8));
        stack.push(new Node(6));
        stack.show();
        System.out.println();
        Node del = stack.pop();
        System.out.println("Deleted node : " + del.number);
        stack.show();
    }
}
