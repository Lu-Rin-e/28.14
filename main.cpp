// git repository link
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
   cout<<"Choose an option: "<<endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
  while( option!='q'){
      if( option=='a'){
         cout<<"ADD ITEM TO CART"<<endl;
         cout<<"Enter the item name:"<<endl;
         string InName;
         getline(cin,  InName);
         cout<<"Enter the item description:"<<endl;
         string InDescr;
         getline(cin, InDescr);
         cout<<"Enter the item price:"<<endl;
         int InPrice;
         cin>>InPrice;
         cout<<"Enter the item quantity:"<<endl;
         int InQuant;
         cin>> InQuant;
         ItemToPurchase item(InName, InDescr, InPrice, InQuant);
         theCart.AddItem(item);
      }
      else if( option=='d'){
         
      }
      else if( option=='c'){
         
      }
      else if( option=='i'){
         
      }
      else if( option=='o'){
         
      }
      else { }
}
   
}

int main() {
   /* Type your code here */
   string name;
   string date;
   char option;

   cout << "Enter customer's name:" << endl;
   getline(cin, name);
   cout << "Enter today's date:" << endl;
   getline(cin, date);
   cout << endl;
   ShoppingCart Cart(name, date);
   PrintMenu();
   cin >> option;
   ExecuteMenu(option, Cart);
   
   
   
   return 0;
}
