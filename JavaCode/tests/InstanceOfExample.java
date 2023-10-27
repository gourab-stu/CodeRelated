class Animal {
    public void makeSound() {
        System.out.println("Some generic animal sound");
    }
}

class Dog extends Animal {
    public void makeSound() {
        System.out.println("Woof! Woof!");
    }

    public void fetch() {
        System.out.println("Fetching the ball");
    }
}

class Cat extends Animal {
    public void makeSound() {
        System.out.println("Meow!");
    }

    public void scratch() {
        System.out.println("Scratching...");
    }
}

public class InstanceOfExample {
    public static void main(String[] args) {
        Animal animal1 = new Dog();
        Animal animal2 = new Cat();
        Animal animal3 = new Animal();

        // Using instanceof to check the type of objects
        if (animal1 instanceof Dog) {
            Dog dog = (Dog) animal1;
            dog.makeSound();
            dog.fetch();
        }

        if (animal2 instanceof Cat) {
            Cat cat = (Cat) animal2;
            cat.makeSound();
            cat.scratch();
        }

        if (animal3 instanceof Dog) {
            // This block will not be executed because animal3 is not an instance of Dog
            Dog dog = (Dog) animal3;
            dog.makeSound();
        } else {
            System.out.println("animal3 is not a Dog");
        }
    }
}
