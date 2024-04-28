#include <iostream>
#include "ShoppingCart.h"
using namespace std;

/*string customerName;
      string currentDate;
      vector<ItemToPurchase> cartItems;*/

ShoppingCart::ShoppingCart() {
  customerName="none";
  currentDate="January 1, 2016";  
  
}

ShoppingCart::ShoppingCart(string name, string date){
   customerName=name;
   currentDate=date; 
  
}

string ShoppingCart::GetCustomerName() const{
  return customerName;
  
}

string ShoppingCart::GetDate() const{ 
  return currentDate;
}
      
void ShoppingCart::AddItem(ItemToPurchase item){
  cartItems.push_back(item);

}

void ShoppingCart::RemoveItem(string name){
  for(unsigned int i=0; i<cartItems.size();i++){
    if(cartItems[i].GetName()==name){
      cartItems.erase(cartItems.begin()+i);
      return;      
    }
  }
  cout<<"Item not found in cart. Nothing removed."<<endl;
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item) {
   bool found = false;
    for (ItemToPurchase& e : cartItems) {
        if (e.GetName() == item.GetName()) {
            // Item found in cart
            found = true;
            // Check if parameter has default values for description, price, and quantity
            if (!item.GetDescription().empty()) {
                e.SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                e.SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                e.SetQuantity(item.GetQuantity());
            }
            // Item modified
            std::cout << "Item modified: " << e.GetName() << std::endl;
            break;
        }
    }
    if (!found) {
        std::cout << "Item not found in cart. Nothing modified." << std::endl;
    }
}
    
int ShoppingCart::GetNumItemsInCart(){
  int num = 0;
  for(ItemToPurchase e:cartItems){
    num += e.GetQuantity();
  }
  return num;  
}

double ShoppingCart::GetCostOfCart(){
  double cartPrice = 0.0;
  for(ItemToPurchase e:cartItems){
    cartPrice += (e.GetPrice() * e.GetQuantity());
  }
  return cartPrice;
}
      
void ShoppingCart::PrintTotal(){
   cout<<customerName<<"'s Shopping Cart - "<< currentDate<< endl;
   cout<<"Number of Items: "<< GetNumItemsInCart()<<endl;
   cout<<endl;
   if(cartItems.size() ==0){
    cout<<"SHOPPING CART IS EMPTY"<<endl;
   }
   else{
      for(ItemToPurchase e:cartItems){
      e.PrintItemCost();
    }
  }
   cout<<endl;
   cout<<"Total: $"<<GetCostOfCart()<<endl;
}

void ShoppingCart::PrintDescriptions(){
  cout<<customerName<<"'s Shopping Cart - "<< currentDate<< endl;
  cout<<endl;
  cout<<"Item Descriptions"<<endl;
  for(ItemToPurchase e:cartItems){
      e.PrintItemDescription();
  } 
}
