class RelayRunner extends Thread {
    private String runnerName;
    private int speed;

    public RelayRunner(String runnerName, int speed) {
        this.runnerName = runnerName;
        this.speed = speed;
    }

    @Override
    public void run() {
        try {
            System.out.println(runnerName + " took the baton.");
            Thread.sleep(speed);
            System.out.println(runnerName + " passed the baton.");
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

public class Main3 {
    public static void main(String[] args) {
        RelayRunner r1 = new RelayRunner("Runner 1", 1000);
        RelayRunner r2 = new RelayRunner("Runner 2", 1000);
        RelayRunner r3 = new RelayRunner("Runner 3", 1000);

        try {
            r1.start();
            r1.join();

            r2.start();
            r2.join();

            r3.start();
            r3.join();

            System.out.println("Race Finished!");
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}