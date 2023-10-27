package Shape;

public class Rectangle extends Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public double area() {
        return length * width;
    }

    @Override
    public double volume() {
        return 0; // Rectangles are 2D shapes, so volume is not applicable
    }

    @Override
    public double perimeter() {
        return 2 * (length + width);
    }

    @Override
    public double surfaceArea() {
        return 0;
    }

    @Override
    public double circumference() {
        return 0;
    }
}
