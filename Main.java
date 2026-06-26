import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {


        Warehouse mywarehouse = new Warehouse();
        Product phone = new Product(1, "Redmi 13 pro", 200, 20);
        Laptop wendose = new Laptop(101, "Dell pro", 250, 20, 16, "i7pro");

        mywarehouse.addProduct(phone);
        mywarehouse.addProduct(wendose);
        
        mywarehouse.showInventory();

        mywarehouse.sellProduct(101, 1);

        mywarehouse.showInventory();
    }
}
