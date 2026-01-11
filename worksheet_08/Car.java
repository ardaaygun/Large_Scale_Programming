public class Car {
    String make;
    String model;
    int year;
    static int car_counter = 0;
    int id;


    public Car(String make, String model, int year) {
        this.make = make;
        this.model = model;
        this.year = year;
        car_counter++;
        this.id = car_counter;
    }

    public void displayInfo(){
        System.out.println("Car "+id+": " + make+model+" ("+year+")" );
    }

    public static void main(String[] args) {
        Car car1 = new Car("Toyota", " Corolla", 2020);
        car1.displayInfo();
        Car car2 = new Car("Forda", " Mustang", 2022);
        car2.displayInfo();


    }
}
