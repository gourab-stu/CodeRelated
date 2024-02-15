package Shape;

public class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double area() {
        return Math.PI * radius * radius;
    }

    @Override
    public double volume() {
        return 0; // Circles are 2D shapes, so volume is not applicable
    }

    @Override
    public double circumference() {
        return 2 * Math.PI * radius;
    }
    
    @Override
    public double perimeter() {
        return 0;
    }

    @Override
    public double surfaceArea() {
        return 0;
    }
}
