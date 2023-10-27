package com.myproject.math;

public class FibonacciGenerator {
    public static void generateFibonacci(int n) {
        int a = 0, b = 1;
        System.out.println("Fibonacci series:");
        for (int i = 0; i < n; i++) {
            System.out.print(a + " ");
            int sum = a + b;
            a = b;
            b = sum;
        }
        System.out.println();
    }
}
