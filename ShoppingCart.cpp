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
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      if (cartItems[i].GetName() == item.GetName()) {
         if (!(cartItems[i].GetDescription() == "" && cartItems[i].GetPrice() == 0 && cartItems[i].GetQuantity() == 0)) {
            //modify stuff
            string desc; //new description
            int p, q; //new price and quantity
            cout << "Enter item description: " << endl;
            getline(cin, desc);
            item.SetDescription(desc);
            cin >> p;
            cout << "Enter item price: " << endl;
            item.SetPrice(p);
            cin >> q;
            cout << "Enter item quantity: " << endl;
            item.SetQuantity(q);
         }
      }
   }
   cout << "Item not found in cart. Nothing modified." << endl;
}
      
int ShoppingCart::GetNumItemsInCart(){
  return cartItems.size();
  
}

double ShoppingCart::GetCostOfCart(){
  double cartPrice=0.0;
  for(ItemToPurchase e:cartItems){
    cartPrice= cartPrice + (e.GetPrice() * e.GetQuantity());
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
