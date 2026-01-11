public class q1 {
    int[] numbers ;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    public void conditional (){
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] > 0){
                positive++;
                System.out.println("Processing: " + numbers[i] + "-> " + "Positive: ");
            }
            else if (numbers[i] < 0){
                negative++;
                System.out.println("Processing: " + numbers[i] + "-> " + "Negative ");
            }
            else if (numbers[i] == 0){
                System.out.println("Processing: " + numbers[i] + "-> " + "Zero ");
                zero++;
            }

        }
        System.out.println("Total Positive: " + positive +
                "\nTotal Negative: " + negative + "\nTotal Zero: " + zero);
    }

    public static void main(String[] args) {
        q1 array = new q1();
        array.numbers =new int[] {-5,0 ,10 ,3};
        array.conditional();
    }
}
