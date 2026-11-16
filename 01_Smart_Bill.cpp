#include <iostream>
#include <string>

int main(){
    std::string item;
    double price;
    int qty;
    double subtotal;
    double gst;
    double total;

    std::cin >> item >> price >> qty;
    subtotal = price * qty;
    gst = subtotal * 0.18;
    total = subtotal + gst;

    std::cout << "Item: " << item << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Quantity: " << qty << std::endl;
    std::cout << "Subtotal: " << subtotal << std::endl;
    std::cout << "GST (18%): " << gst << std::endl;
    std::cout << "Total: " << total << std::endl;

return 0;
}