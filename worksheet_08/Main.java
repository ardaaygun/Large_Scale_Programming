public class Main {
    public static void main(String[] args) {
        Author author = new Author("J.K. Rowling");
        Book myBook = new Book("Harry Potter", author);
        myBook.printBook();
    }
}
