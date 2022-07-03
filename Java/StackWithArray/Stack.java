public class Stack {
    int top;
    int size;
    Node arr[] = null;

    public Stack(int size) {
        this.size = size;
        top = -1;
        arr = new Node[size];
    }

    boolean isEmpty() {
        return top == -1;
    }

    boolean isFull() {
        return top == size;
    }

    Node peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        System.out.println("Stack is empty !");
        return null;
    }

    void push(Node node) {
        if (!isFull()) {
            arr[++top] = node;
        }
        else {
            System.out.println("Stack is Full");
        }
        System.out.println("Node added");
    }


    Node pop() {
        if (!isEmpty()) {
            System.out.println("Node deleted");
            return arr[top--];
        }
        System.out.println("Stack is empty !");
        return null;
    }

    void printStack() {
        if (!isEmpty()) {
            for (int i = top; i > -1; i--) {
                System.out.print(arr[i].val + " ");
            }
            System.out.println();
        }
        else {
            System.out.println("There is nothing to show");
        }
    }
}
