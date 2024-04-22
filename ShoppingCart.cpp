#include <iostream>
#include "ShoppingCart.h"
using namespace std;

ShoppingCart::ShoppingCart(){
  customerName="";
  currentDate="";  
  
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
      cartItems.erase(i);
      return;      
    }
  }
  cout<<"Item not found in cart. Nothing removed."<<endl;
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item){
  
}
      
int ShoppingCart::GetNumItemsInCart(){
  return cartItems.size();
}

double ShoppingCart::GetCostOfCart(){
  double cartPrice=0.0;
  for(ItemToPurchase e:cartItems){
    cartPrice+=e.GetPrice();
  }
  return cartPrice;
}
      
void ShoppingCart::PrintTotal(){
  if(cartItems.size() ==0){
    cout<<"SHOPPING CART IS EMPTY"<<endl;
  }
  else{
    cout<<customerName<<"'s Shopping Cart - "<< currentDate<< endl;
    cout<<"Number of Items: "<< cartItems.GetNumItemsInCart()<<endl;
    cout<<endl;
    for(ItemToPurchase e:cartItems){
      e.PrintItemCost();
    }
    cout<<endl;
    cout<<"Total: "<<cartItems.GetCostOfCart()<<endl;
  }
}

void ShoppingCart::PrintDescriptions(){
  cout<<customerName<<"'s Shopping Cart - "<< currentDate<< endl;
  cout<<endl;
  cout<<"Item Descriptions"<<endl;
  for(ItemToPurchase e:cartItems){
      e.PrintItemDescription();
  } 
}
