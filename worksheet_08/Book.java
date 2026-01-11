public class Book  {
    String title;
    Author author;

    public Book (String title, Author author) {
        this.title = title;
        this.author = author;
    }

    public void printBook() {
        System.out.println ("Book: " + this.title +"by "+author.name );
    }
}
