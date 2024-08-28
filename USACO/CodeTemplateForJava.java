import java.io.*;

public class CodeTemplateForJava {

    static private final String INPUT = "file.in";
    static private final String OUTPUT = "file.out";

    static void inout() {
        FileInputStream inStream = null;
        PrintStream outStream = null;

        try {
            inStream = new FileInputStream(INPUT);
            outStream = new PrintStream(new FileOutputStream(OUTPUT));
            System.setIn(inStream);
            System.setOut(outStream);
        } catch (Exception e) {
            System.err.println("Error Occurred.");
        }
    }

    public static void main(String args[]) {

        inout();

        // Code Here

    }
}
