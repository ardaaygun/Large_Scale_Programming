class RocketLaunch extends Thread {
    private String missionName;

    public RocketLaunch(String missionName) {
        this.missionName = missionName;
    }

    @Override
    public void run() {
        try {
            for (int i = 5; i >= 1; i--) {
                System.out.println(missionName + ": T-minus " + i);
                Thread.sleep(1000);
            }
            System.out.println(missionName + ": LIFTOFF!");
        } catch (InterruptedException e) {
            System.out.println(missionName + " interrupted.");
        }
    }
}

public class Main1 {
    public static void main(String[] args) {
        RocketLaunch apollo = new RocketLaunch("Apollo");
        RocketLaunch voyager = new RocketLaunch("Voyager");

        apollo.start();
        voyager.start();
    }
}