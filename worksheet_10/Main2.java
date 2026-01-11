class DataBackup implements Runnable {
    private String dbName;

    public DataBackup(String dbName) {
        this.dbName = dbName;
    }

    @Override
    public void run() {
        try {
            System.out.println("Backing up " + dbName + "...");
            Thread.sleep(2000);
            System.out.println(dbName + " backup complete.");
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

public class Main2 {
    public static void main(String[] args) {
        DataBackup backupTask = new DataBackup("UserDB");
        Thread backupThread = new Thread(backupTask);

        backupThread.start();
        System.out.println("Main thread continuing other tasks...");
    }
}