public class BitwiseOperator {
    public static void main(String[] args) {
        int a = 3, b = 2;
        System.out.println("a = "+a+", b = "+b);
        System.out.println("a & b = "+(a&b));
        System.out.println("a | b = "+(a|b));
        System.out.println("~a = "+~a);
        System.out.println("~b = "+~b);
        System.out.println("a XOR b = "+(a^b));
        System.out.println("a XNOR b = "+~(a^b));
        System.out.println("a & "+0x0f+" = "+(a&0x0f));
        System.out.println("a | "+0x0f+" = "+(a|0x0f));
        System.out.println("a & "+0x00+" = "+(a&0x00));
        System.out.println("a | "+0x00+" = "+(a|0x00));
        System.out.println("a << b = "+(a<<b));
        System.out.println("a >> b = "+(a>>b));
        System.out.println("a = a << b = "+(a<<=b));
        System.out.println("a = "+a+", b = "+b);
        System.out.println("a = a >> b = "+(a>>=b));
        System.out.println("a = "+a+", b = "+b);
        System.out.println("a = a & b = "+(a&=b));
        System.out.println("a = "+a+", b = "+b);
        System.out.println("a = a | b = "+(a|=b));
        System.out.println("a = "+a+", b = "+b);
        System.out.println("a = a XOR b = "+(a^=b));
        System.out.println("a = "+a+", b = "+b);
        System.out.println("a = a XNOR b = "+(a^=b));
        System.out.println("a = "+a+", b = "+b);
    }
}
