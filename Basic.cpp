#include<iostream>
#include <string>
using namespace std;

void removechar(string input, char c){

    int len = input.length();

    for(int i = 0; i<len; i++){
        if(input.at(i) != c){
            cout << input.at(i);
        }else{
            continue;
        }
    }

}



bool checkPalindrome(string str) {

    int i=0; 
    int len = str.length();
    while(i<len){
        if(str.at(i)==str.at(len-1)){
            i++;
            len--;
        }else{
            return false;
        }
    }

    return true;
    
}

int main(){

/*

    char name[100];
    cin.getline(name,100);
*/


/*
   string name ;
   getline(cin,name);

*/


//important concepts 
/*

   string name;
   int age;

   cin >> age;
   
   cin.ignore(1);
   getline(cin, name);

   cout << name << " " << age << endl;
*/

/*

   string a  = "aishabh"; 
   string b  = "rishapppbk";

   int ans = (a > b);   // isme ye dekha jaa rha hai ki first char kiska bda hai hai , jaise ki isme a ka firs charecter chota hai aur b ka first charecter bda hai to a > b krne pe output 0 aayega 
   cout << ans << endl;
*/

/*

   string name;
   getline(cin, name);

   int len = name.length();
   
   for(int i = 0; i<len-1; i++){

   cout << name.at(i) ;
   }

   cout << endl;
*/

    // another way to do above is 
    /*
    string name;
    cin >> name;
    for(char ch : name){
        cout << ch << " " ;
    }
    */

   //remove charecter

   /* 
   
   string input;
   getline(cin, input);

   char c;
   cin >> c;

   removechar(input, c);
   */

  string str;

  getline(cin, str);

 int ans =  checkPalindrome(str);

 cout << ans << endl;



   







    return 0;
}