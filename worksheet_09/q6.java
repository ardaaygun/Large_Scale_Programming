
class RecyclingBin<T> {

    private T wasteItem;


    public void throwAway(T item) {
        this.wasteItem = item;
        System.out.println("Discarded " + item);
    }


    public T emptyBin() {
        T item = wasteItem;
        wasteItem = null;
        return item;
    }
}


public class q6 {
    public static void main(String[] args) {


        RecyclingBin<String> stringBin = new RecyclingBin<>();
        stringBin.throwAway("Plastic Bottle");


        RecyclingBin<Integer> integerBin = new RecyclingBin<>();
        integerBin.throwAway(1010);


        System.out.println("Emptied String Bin: " + stringBin.emptyBin());
        System.out.println("Emptied Integer Bin: " + integerBin.emptyBin());
    }
}
