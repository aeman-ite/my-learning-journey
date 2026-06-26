import java.util.ArrayList;

public class Warehouse {
    private ArrayList<Product> stock;

    //الكونستراكتور لا يستقبل شيء فقط يقوم باضافة اول منتج
    public Warehouse() {
        stock = new ArrayList<>();
    }

    //====دالة اضافة منتج ====
    public void addProduct(Product p) {
        stock.add(p);
        System.out.println("تمت اضافة المنتج " + p.getName() + "بنجاح🤸‍♀️");
    }

    public void showInventory() {
        System.out.println("======المحتويات الموجودة في المستودع =====");
        if (stock.isEmpty()) {

            System.out.println("المستودع فاارغ ");
            return;
        }
        for (Product p : stock) {
            p.display();
        }
    }

    public void sellProduct(int id, int amountToSell) {
        for (Product p : stock) {
            if (p.getId() == id) {
                if (p.getQuantity() >= amountToSell) {
                    int newQuantity = p.getQuantity() - amountToSell;
                    p.setQuantity(newQuantity);
                    System.out.println("تم بيع " + amountToSell + " قطع من " + p.getName());
                    return;
                } else {
                    System.out.println("الكمية المطلوبة غير متاحة");
                    return;
                }

            }


        }
        System.out.println(" لم يتم العثور على المنتج: " + id);

    }

}
