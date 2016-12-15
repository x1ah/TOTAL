import java.util.*;

class Test {
    public static void foo (int i) {
        System.out.println("hello foo");
    }
}

class ProList {
    public static void main(String [] args) {
        // System.getProperties().list(System.out);
        System.out.println(System.getProperty("Test"));
    }
}
