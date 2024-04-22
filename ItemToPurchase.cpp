/* Type your code here */
#include "ItemToPurchase.h"

#include <string>
using namespace std;

  ItemToPurchase::ItemToPurchase() {
    itemName = "";
    itemDescription = "";
    itemPrice = 0;
    itemQuantity = 0;
  }
  ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity = 0) {
    itemName = name;
    itemDescription = description;
    itemPrice = price;
    itemQuantity = quantity;
  }
  void ItemToPurchase::SetName(string name) {
    itemName = name;
  }
  void ItemToPurchase::SetDescription(string description) {
    itemDescription = description;
  }
  void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
  }
  void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
  }
      
  string ItemToPurchase::GetName() const {
    return itemName;
  }
  string ItemToPurchase::GetDescription() const {
    return itemDescription;
  }
  int ItemToPurchase::GetPrice() const {
    return itemPrice;
  }
  int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
  }
      
  void ItemToPurchase::PrintItemCost() {
    //Bottled Water 10 @ $1 = $10
    std::cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << std::endl;
  }
  void ItemToPurchase::PrintItemDescription() {
    //Bottled Water: Deer Park, 12 oz.
    std::cout << itemName << ": " << itemDescription << std::endl;
  }
   
   /* string itemName;
      string itemDescription;
      int itemPrice;
      int itemQuantity;*/
}
