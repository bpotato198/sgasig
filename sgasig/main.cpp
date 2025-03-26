#include <iostream>
#include <string>
#include <thread>

#define maxmoney 999

using namespace std;

void fartvillage();
void shopkeeper();


int cheats = 0;
int mememoney = 10;

int main() {

   
 string lvlinput;

 
 std::this_thread::sleep_for(3000ms);
 cout << "select a level! LVL1\n";
 getline(cin, lvlinput);

 if (lvlinput == "LVL1") {
    fartvillage();

 }





 

}
void fartvillage() {
   string wheretogo;
   cout << "you are in the village\n";
   cout << "where to go?\n";
   cout << "shopkeeper - 1 mayor - 2\n";
   getline(cin, wheretogo);

   if (wheretogo == "1") {
      shopkeeper();         

   }
   else if (wheretogo == "gvmmon")
   {
      cout << "YOU ARE GETTING CHEATS!! THE SHOP KEEPER WILL QUADRUPLE YOUR PRICES!!\n";
      cheats++;
      fartvillage();
   }
   


}
void shopkeeper() {
   string buysomething;
   if (cheats == 1) {
      cout << "hello dear cheater!\n";
     

   }
   else {
     cout << "welcome to my shop! here are some stuff: \n";

   }
   cout << "the fart sword costs: 10\n";
   getline(cin, buysomething);

   if (buysomething == "tfs") {
      if (mememoney > 9) {
         mememoney -= 10;
         cout << "you bought the fart sword for 10 mememoney!\n";
         shopkeeper();
      }
      else if (mememoney < 9)
      {
         cout << "you cant afford that\n";
         shopkeeper();
      }
      
      
   }
   if (buysomething == "exit") {
       cout << "exiting the shop!..\n";


   }
   
       

}