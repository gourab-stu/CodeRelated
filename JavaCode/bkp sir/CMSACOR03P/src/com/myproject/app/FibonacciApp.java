package com.myproject.app;
import com.myproject.math.FibonacciGenerator;

public class FibonacciApp {
    public static void main(String[] args) {
        int n = 10; // Number of Fibonacci terms to generate
        FibonacciGenerator.generateFibonacci(n);
    }
}
