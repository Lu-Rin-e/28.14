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
      cartItems.erase(cartItems.begin()+i-1);
      return;      
    }
  }
  cout<<"Item not found in cart. Nothing removed."<<endl;
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item) {
   for (ItemToPurchase cartItem : cartItems) {
        if (cartItem.GetName() == item.GetName()) {
            if (!item.GetDescription().empty())
                cartItem.SetDescription(item.GetDescription());
            if (item.GetPrice() != 0)
                cartItem.SetPrice(item.GetPrice());
            if (item.GetQuantity() != 0)
                cartItem.SetQuantity(item.GetQuantity());
            return;
        }
    }
    std::cout << "Item not found in cart. Nothing modified." << std::endl;
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
