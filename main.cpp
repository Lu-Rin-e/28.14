// https://github.com/Lu-Rin-e/28.14.git
// Catherine Lu
// Katie Frymire

#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   /* Type your code here */
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
   cout<<endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   switch(option) {
      case 'o': {
         cout<<"OUTPUT SHOPPING CART"<<endl;
         theCart.PrintTotal();
         break;
      }
      case 'a': {
         cout<<"ADD ITEM TO CART"<<endl;
         cout<<"Enter the item name:"<<endl;
         string InName;
         cin.ignore();
         getline(cin,  InName);
         //cin.ignore();
         cout<<"Enter the item description:"<<endl;
         string InDescr;
         cin.ignore();
         getline(cin, InDescr);
         //cin.ignore();
         cout<<"Enter the item price:"<<endl;
         int InPrice;
         cin>>InPrice;
         cout<<"Enter the item quantity:"<<endl;
         int InQuant;
         cin>> InQuant;
         //cout << endl;
         
            
         ItemToPurchase item(InName, InDescr, InPrice, InQuant);
         theCart.AddItem(item);
         break;
      }
      case 'd':{
         cout<<"REMOVE ITEM FROM CART"<<endl;
         cout<<"Enter name of item to remove:"<<endl;
         string InName;
         cin.ignore();
         getline(cin,  InName);
         //cin.ignore();
            
         theCart.RemoveItem(InName);
         break;
      }
      case 'c':{
         string itemName;
         int newQuantity;
         cout<<"CHANGE ITEM QUANTITY"<<endl;
         cout<<"Enter the item name:"<<endl;
         cin.ignore();
         getline(std::cin, itemName);
         //cin.ignore();
         cout<<"Enter the new quantity:"<<endl;
         cin >> newQuantity;
         //cin.ignore();
   
         ItemToPurchase modItem(itemName, "", 0, newQuantity);
         theCart.ModifyItem(modItem);
         break;
      }
      case 'i':{
         cout<<"OUTPUT ITEMS' DESCRIPTIONS"<<endl;
         theCart.PrintDescriptions();
         break;
      }
      case 'q':{
         return;
      }
      default: {
         break;
      }
   }
}

int main() {
   /* Type your code here */
   string Username;
   string Userdate;
   char option;

   cout << "Enter customer's name:" << endl;
   getline(cin, Username);
   cout << "Enter today's date:" << endl;
   getline(cin, Userdate);
   cout << endl;
   
   cout<<"Customer name: "<<Username<<endl;
   cout<<"Today's date: "<<Userdate<<endl;
   cout << endl;//needed mostly
   ShoppingCart Cart(Username, Userdate);
   
   PrintMenu();
   
   option = ' ';
   while (option != 'q') {
      cout << "Choose an option:" << endl;
      cin >> option;
      if (option == 'a' || option == 'd' || option == 'c' || option == 'i' || option == 'o') {
         
         ExecuteMenu(option, Cart);
         cout<<endl; //needed
         PrintMenu();
      }
   }
   return 0;
}
