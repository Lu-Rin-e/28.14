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
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
  while( option!='q'){
     cout<<"Choose an option: "<<endl;
      if( option=='a'){
         ItemToPurchase item();
         cout<<"ADD ITEM TO CART"<<endl;
         cout<<"Enter the item name:"<<endl;
         getline(cin, item.SetName() );

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
   string customerName;
   string date;
   char option;
   ShopingCart theCart();
   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);
   theCart.SetName(customName);
   cout << "Enter today's date:" << endl;
   getline(cin, date);
   theCart.SetDate(date);
   cout << endl;

   PrintMenu();
   cin >> option;
   
   
   return 0;
}
