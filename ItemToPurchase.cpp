/* Type your code here */
#include <iostream>
#include "ItemToPurchase.h"

#include <string>
using namespace std;

  //class constructors
    //default constructor
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

  //mutators
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

  //getters
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

  //print functions
  void ItemToPurchase::PrintItemCost() {
    //Bottled Water 10 @ $1 = $10
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << endl;
  }
  void ItemToPurchase::PrintItemDescription() {
    //Bottled Water: Deer Park, 12 oz.
    cout << itemName << ": " << itemDescription << endl;
  }
   
   /* string itemName;
      string itemDescription;
      int itemPrice;
      int itemQuantity;*/
}
