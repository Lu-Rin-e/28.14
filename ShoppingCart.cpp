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
  
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item){
  
}
      
int ShoppingCart::GetNumItemsInCart(){
  return cartItems.lenght();
  
}

double ShoppingCart::GetCostOfCart(){
  double cartPrice=0.0;
  for(ItemToPurchase e:cartItems){
    cartPrice= e.GetPrice();
  }
  return cartPrice;
}
      
void ShoppingCart::PrintTotal(){
  if(cartItems.length() ==0){
    cout<<"SHOPPING CART IS EMPTY"<<endl;
  }
  else{
    cout<<cartItems.GetCostOfCart<<endl;
  }
}

void ShoppingCart::PrintDescriptions(){
  
}
