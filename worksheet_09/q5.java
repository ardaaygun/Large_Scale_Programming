
abstract class SpyGadget {
    public abstract void activate();
}


class LaserWatch extends SpyGadget {
    @Override
    public void activate() {
        System.out.println("LaserWatch: Cutting through steel door...");
    }
}


class SmokeBomb extends SpyGadget {
    @Override
    public void activate() {
        System.out.println("SmokeBomb: Creating visual cover...");
    }
}


public class q5 {
    public static void main(String[] args) {


        SpyGadget[] gadgets = {new LaserWatch(), new SmokeBomb()};

        for (SpyGadget gadget : gadgets) {
            gadget.activate();
        }
    }
}
