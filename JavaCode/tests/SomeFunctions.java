import java.util.Scanner;       // Scanner class is used to take all kinds of inputs

public class SomeFunctions
{
    public static Scanner s=new Scanner(System.in);
    public static void main(String[] args)
    {
        // // *************************************************** INTEGER LITERALS ************************************************************
        // // in java there are 4 types of integers -
        // //  (i) Decimal (default) --> any integer that is simply written is a decimal integer. i.e. -1, -109, 87, 908646 etc
        // //  (ii) Binary           --> to specify a binary number we need to start the number with 0b or 0B. i.e. 0b100, 0B1010 etc
        // //  (iii) Octal           --> to specify an octal number we need to start the number with 0. i.e. 01055, 045, 032 etc
        // //  (iv) Hexadecimal      --> to specify an hex number we need to start the number with 0x or 0X. i.e. 0x10f, 0X4ab, 0x13F etc
        // // we can use underscores '_' in integer literals but it gets cancelled after compilation
        // // example --> int a = 1_22_33;
    
        // int dec = 1_22_33;
        // System.out.println("dec = "+dec);                            // dec = 1222333
        // System.out.printf("decimal value is = %d\nNew line", dec);   // \n --> it is an escape sequence that prints a new line
        // System.out.printf("\noctal value is = %o", dec);             // %o --> format specifier of octal number
        // System.out.printf("\nhex value is = %x", dec);               // %x --> format specifier of hexadecimal number
        
    
        // // ************************************************* FLOATING POINT LITERALS ************************************************************
        // // in java there are 2 types of floating point literals -
        // //  (i) Float             --> used for small single precision floating point number, size 4 byte
        // //  (i) Double (default)  --> used for large double precision floating point number, size 8 bytes
        // // 3.14 is a double number by default (use of d or D is optional), if we need to make it float we have to put f or F at the end
        // // we can use underscore '_' here also, but it should be put in the middle of two number
        // // example of float  --> float f1=3.14f;    // f or F is used to denote it is a float number
        // // example of float  --> float f2=54.14F;
        // // example of double --> double d1=6.022d;  // d or D is used to denote it is a double number
        // // example of double --> double d2=9.81D;
        // // example of double --> double d3=3.1459;  // if nothing is specified then double is the default value for all floating point numbers
        
        // float f1=3.14f;
        // float f2=54.14F;
        // // float f2=54.14;      // --> this will throw an error stating that "cannot convert from double to float"
        // double d1=6.022d;
        // double d2=9.81D;
        // double d3=3.1_____4__5__9;       // --> this will not throw an error as it is, by default, a double
        // System.out.println("value of f1 = "+f1);
        // System.out.printf("value of f2 = %f", f2);      // this line will not print 54.14 bcz the JVM will not store exactly 54.14 but a little bit lower value
        // System.out.printf("\nvalue of d1 = %f", d1);    // %f --> format specifier of any floating point number
        // System.out.printf("\nvalue of d2 = %f", d2);    // by using %f we can see the exact value that the JVM is storing
        // System.out.printf("\nvalue of d3 = %f", d3);    // if we do not use %f, as we use here at line no 94, we will get the exact value that we have assigned using '=' operator
        // double c1=22.0/7.0;     // d or D is not required, compiler will see both 22.0 and 7.0 as double literals
        // float c2=22.0f/7.0f;    // f or F is required, because by default, compiler will see both 22.0 and 7.0 as double literals
        // System.out.printf("\nvalue of pi1 = %f", c1);
        // System.out.printf("\nvalue of pi2 = %f\n", c2);
        // System.out.println(f1+" + "+f2+" + "+d1+" + "+d2+" + "+d3+" + "+" = "+(f1+f2+d1+d2+d3));


        // // **************************************************** BOOLEAN LITRALS ***********************************************************
        // // the boolean datatype can store only 2 possible values, namely true and false
        // // note that, true is not equal to 1 and false is not equal to 0
        // // it is true and false not "true" and "false"
        // // there is a Boolean class also for special support regarding boolean literals
        // boolean a, b;
        // a=(10>9);
        // b=(10<9);
        // // int n=a;     // --> this will throw an error stating "cannot convert from boolean to int"
        // System.out.printf("condition a is %b", a);  // %b --> format specifier for boolean literals
        // System.out.println("\ncondition b is "+b);
        // if(a)           // no need to write a==true, if a is true it will execute and if it is not true it will not execute
        //     System.out.println("This will execute as condition a is true");
        // if(b)
        //     System.out.println("This will not execute as condition b is false");
        // boolean n;
        // System.out.print("Enter an integer to print Hello World: ");
        // n=s.hasNextInt();   // hasNextInt() --> reads input from keyboard and returns true if input is integer otherwise returns false
        // if(n)
        //     System.out.println("Hello World");
        // String str1="", str2=null, str3="Java";     // for string, only null is considered as false
        // // first true will be in capital letter as the format specifier is in capital letter
        // System.out.printf("%B, %b, %b", str1, str2, str3);  // TRUE, false, true


        // // *********************************************** TAKING USER INPUTS **********************************************************
        // // nextByte()       --> to take Byte input
        // // nextShort()      --> to take Short input
        // // nextInt()        --> to take int input
        // // nextLong()       --> to take Long input
        // // nextFloat()      --> to take Float input
        // // nextDouble()     --> to take Double input
        // // nextBoolean()    --> to take Boolean input

        // System.out.print("Enter a byte: ");
        // byte a=s.nextByte();                    // taking a byte input
        // System.out.print("Enter a short: ");
        // short b=s.nextShort();                  // taking a short input
        // System.out.print("Enter an int: ");
        // int c=s.nextInt();                      // taking an int input
        // System.out.print("Enter a long: ");
        // long d=s.nextLong();                    // taking a long input
        // System.out.print("Enter a float: ");
        // float e=s.nextFloat();                  // taking a float input
        // System.out.print("Enter a double: ");
        // double f=s.nextDouble();                // taking a double input
        // System.out.print("Enter a boolean: ");
        // boolean h=s.nextBoolean();              // taking a boolean input

        // // Java has a special support for character literals

        // System.out.print("Enter two char: ");
        // char g1=s.next().charAt(0);
        // String str1=s.next();
        // char g2=str1.charAt(0);

        // // System.out.print("Enter a word: ");      // CONFUSED
        // // String str2=s.next();                    // CONFUSED
        // // System.out.print("Enter a string: ");    // CONFUSED
        // // String str3=s.nextLine();                // CONFUSED

        // System.out.println("The byte is "+a);
        // System.out.println("The short is "+b);
        // System.out.println("The int is "+c);
        // System.out.println("The long is "+d);
        // System.out.println("The float is "+e);
        // System.out.println("The double is "+f);
        // System.out.println("The boolean is "+h);
        // System.out.println("The char are '"+g1+"' and '"+g2+"'");

        // // System.out.print("The word is "+str2);   // CONFUSED
        // // System.out.print("The string is "+str3); // CONFUSED
    }
}