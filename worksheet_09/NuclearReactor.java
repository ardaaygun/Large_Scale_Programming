public class NuclearReactor {

    private double coreTemperature;
    private String status;

    public NuclearReactor(double initialTemp) {
        this.coreTemperature = initialTemp;
        this.status = "NORMAL";
    }


    public String getStatus() {
        return status;
    }


    public void increasePower() {
        if (status.equals("MELTDOWN WARNING")) {
            System.out.println("Error: Safety protocols engaged. Cannot increase power.");
            return;
        }

        coreTemperature += 600.0;
        System.out.println("Power increasing... Temp: " + coreTemperature);

        if (coreTemperature > 2000.0) {
            status = "MELTDOWN WARNING";
            System.out.println("Reactor Status: " + status);
        }
    }


    public void adjustControlRods(double level) {
        coreTemperature -= level * 100;
        if (coreTemperature < 0) {
            coreTemperature = 0;
        }
    }


    public static void main(String[] args) {
        NuclearReactor reactor = new NuclearReactor(900.0);

        reactor.increasePower();
        reactor.increasePower();
        reactor.increasePower();
    }
}
