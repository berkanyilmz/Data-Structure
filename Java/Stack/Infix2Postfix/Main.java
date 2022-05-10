package datastructure;

public class Main {

    public static void main(String[] args) {
        PrefixPostfix pp = new PrefixPostfix();
        String expression = pp.infixToPostfix("4+10*5+(4+20)");
        pp.postfixCalculation(expression);
    }
}
