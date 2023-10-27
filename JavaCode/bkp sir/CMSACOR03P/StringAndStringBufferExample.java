public class StringAndStringBufferExample {
    public static void main(String[] args) {
        // Demonstrating String class functions
        String str = "Hello, world!";
        System.out.println("Original String: " + str);
        
        // Using setCharAt()
        StringBuilder strBuilder = new StringBuilder(str);
        strBuilder.setCharAt(7, 'W');
        System.out.println("After setCharAt(): " + strBuilder);
        
        // Using concat()
        String concatenated = str.concat(" Welcome");
        System.out.println("After concat(): " + concatenated);
        
        // Using equals()
        String compareStr = "Hello, World!";
        Boolean isEqual = str.equals(compareStr);
        System.out.println("Using equals(): " + isEqual);
        
        // Demonstrating StringBuffer class functions
        StringBuffer stringBuffer = new StringBuffer("Java");
        System.out.println("Original StringBuffer: " + stringBuffer);
        
        // Using setLength()
        stringBuffer.setLength(2);
        System.out.println("After setLength(): " + stringBuffer);
        
        // Using append()
        stringBuffer.append(" Programming");
        System.out.println("After append(): " + stringBuffer);
        
        // Using insert()
        stringBuffer.insert(5, " is");
        System.out.println("After insert(): " + stringBuffer);
    }
}
