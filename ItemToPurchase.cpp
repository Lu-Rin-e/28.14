/* Type your code here */
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H


#include <string>
using namespace std;

  ItemToPurchase() {
    itemName = "";
    itemDescription = "";
    itemPrice = 0;
    itemQuantity = 0;
  }
  ItemToPurchase(string name, string description, int price, int quantity = 0) {
    itemName = name;
    itemDescription = description;
    itemPrice = price;
    itemQuantity = quantity;
  }
  void SetName(string name) {
    itemName = name;
  }
  void SetDescription(string description) {
    itemDescription = description;
  }
  void SetPrice(int price) {
    itemPrice = price;
  }
  void SetQuantity(int quantity) {
    itemQuantity = quantity;
  }
      
  string GetName() const {
    return itemName;
  }
  string GetDescription() const {
    return itemDescription;
  }
  int GetPrice() const {
    return itemPrice;
  }
  int GetQuantity() const {
    return itemQuantity;
  }
      
  void PrintItemCost() {
    //Bottled Water 10 @ $1 = $10
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << endl;
  }
  void PrintItemDescription() {
    //Bottled Water: Deer Park, 12 oz.
    cout << itemName << ": " << itemDescription << endl;
  }
   
   /* string itemName;
      string itemDescription;
      int itemPrice;
      int itemQuantity;*/
};
