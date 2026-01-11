public class SmartKitchen {
    public void cook(String dish) {
        System.out.println("Preparing " + dish +"...");
    }
    public void cook(String dish, int minutes) {
        System.out.println("Slow cooking " + dish + " for " + minutes + " mins");

    }
    public void cook(String dish , boolean isSpicy) {
        String spicyMode = isSpicy ? "On" : "Off";
        System.out.println("Preparing " + dish + " (Spicy Mode: " + spicyMode + ")");

    }

    public static void main(String[] args) {
        SmartKitchen kitchen = new SmartKitchen();
        kitchen.cook("Toast");
        kitchen.cook("Stew", 120);
        kitchen.cook("Tacos", true);
    }
}
