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
          cout<<"REMOVE ITEM FROM CART"<<endl;
         cout<<"Enter name of item to remove:"<<endl;
         string InName;
         getline(cin,  InName);
         theCart.RemoveItem(InName);
      }
      else if( option=='c'){
         
      }
      else if( option=='i'){
         cout<<"OUTPUT ITEMS' DESCRIPTIONS"<<endl;
         cout<<theCart.GetCustomerName()<<"'s Shopping Cart - "<<theCart.GetDate()<<endl;
         cout << endl;
         theCart.PrintDescriptions();
      }
      else if( option=='o'){
         
      }
      else { }
   
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
   cout << endl;
   ShoppingCart Cart(Username, Userdate);
   
   
   PrintMenu();
   cout<<endl;
   cout<<"Choose an option:"<<endl;
   cin >> option;
   while(option!='q'){
      ExecuteMenu(option, Cart);
      cout<<"Choose an option:"<<endl;
      cin>>option;
   }
      
   
   
   
   return 0;
}
