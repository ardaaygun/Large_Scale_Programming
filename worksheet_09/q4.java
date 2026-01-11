

class LoginMethod {
    public void authenticate() {
        System.out.println("Standard authentication");
    }
}

class FaceID extends LoginMethod {
    @Override
    public void authenticate() {
        System.out.println("Scanning facial geometry... Access Granted.");
    }
}

class PINCode extends LoginMethod {
    @Override
    public void authenticate() {
        System.out.println("Verifying 4-digit sequence... Access Granted.");
    }
}

public class q4 {
    public static void main(String[] args) {

        LoginMethod login;

        login = new FaceID();
        login.authenticate();

        login = new PINCode();
        login.authenticate();
    }
}
