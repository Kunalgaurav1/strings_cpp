#include<iostream>
#include<vector>


using namespace std;

int main(){

   /*
    string a = "abcd";
   
    add charecters
    a.push_back('$');   //push_back() function is used to put an charecter at the end of the string 


   //insert
  // a.insert(2, "KUNAL");
   */ 


/*
 string a = "abcd";
  //remove charecter
  a.pop_back();

  //by using erase
  a.erase(2, 4);
  cout << a << endl;
*/
    

    //append and addition of two strings

    string a = "abcd";

    string b = "1234";
    
    //ADDITION
    //string sum = a + b; //concatenation of two strings
    //cout << sum;

    //APPEND
    a.append(b);

    cout << a << " " << b; // a me b ki value aa gyi 


    return 0;

}