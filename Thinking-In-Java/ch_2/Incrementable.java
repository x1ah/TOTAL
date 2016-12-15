import java.util.*;

class StaticTest {
    static int i = 47;
}

class Incrementable {
    static void increment() {
        StaticTest.i++;
    }
    public static void main(String [] args) {
        increment();
        System.out.println(StaticTest.i);
        return;
    }
}
