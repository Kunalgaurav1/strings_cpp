/*


#include <iostream>
#include <string>
using namespace std;

   int main() {
   int n;

    string str2;
    cin >> n;
    cin.ignore(1);

     getline(cin, str2);
   cout << "You entered: " << n << " and " << str2 << endl;
}
*/


//use of > operator in string 
/*

#include<iostream>
using namespace std;

int main(){

    string str1 = "apple";
    string str2 = "banana";

    if(str1>str2){
        cout << " str1 is greater than str2" << endl;

    }
    else{
        cout << "str2 is greater than str1" << endl;
    }

    //output me else wala part print hoga kyunkki yeha pe lexical order follow kiya jata hai jisme kya hota hai ki jo value phle chali usko ek value de di jayegi and dusre wale ko dursi value so agr hum yeha pe dekhe to str 1 ko 1 de diya gya kyunki wo phle chala hai aur str2 ko 2 kyunki wo dusri baar me chala hai so is hisab se (2>1) wali statement shi ho rhi hai 
    return 0;
}
*/


//Accessibility in strings
// isme 2 kaam hum krte hai  pahla ki hum data retrive kr skte hai by using stringName[] , dusra hum uss string ko manipulate kr skte hai by this way stringName[3] = "d"; ye krne pe jo v string hoga uske 3rd index pe vlaue overwrite ho jayega 


/*

#include<iostream>
using namespace std;

int main(){

    string name = "kunal";
    
    cout << "first char " << name[0] << endl;
    cout << "second char " << name[2] << endl;
    cout << "any char " << name[5] << endl;
    cout <<  "any char " << name.at(5) << endl;


    // string ko access do tarike se kr skte hai ek to jo normal hota hai wo tarika aur ek stringName.at(); ka use kr ke ..... agr hum kisi aise index ko access kr rhe hai jo ki exist nhi kr rha hai wo perticular string k liye to kuch v print nhi hoga pr isi jagah pe agr hum stringName.at() function ka use kre to wo batayega ki there is an error ki "out of range "  


    return 0;
}
*/



//Transversal in string 

// hum do tarike se loop ko iterate kr skte hai phle to for loop use krenge aur ye string k size tak chalega and dusra RANGE BASED FOR LOOP  for(char ch : string ); ye use krke ....isme kya hota hai ki ye ek char var bana deta hai and usme ek ek char string se nikalta hai aur string me jata hai aur niche fr hum usko print krte hai 


/*

#include<iostream>
#include<string>
using namespace std ;

int main(){

    string str = "kunal";

    for(int i = 0; i<str.length(); i++){
        char ch = str[i];
        cout << "Charecter at index  " << i << " " <<  ch << endl;
    }

    for(char ch : str){
        cout << "Charecter : " << ch << endl;
    }


    return 0;
}
*/


//Operations on string 
/*

#include<iostream>
#include<string>

using namespace std;

int main(){

    string str = "Chandrayaan" ;

    //push_back()-- >> ye jo v string hota hai uske last me ek charecter append kr deta hai manje add kr deta hai

    //str.push_back('3');


    //dusra hai insert( hum iska use krke v string me add kr skte hai
    // aur ye ek charecter v aur substring v add krne me saksham hota hai 

    //str.insert(4, "hey guys");
    


    // agr humko koi char hatana ho last se then we use ppo_back()
    // str.pop_back(); 

    //ek tarika aur hai hatane ka i.e we can use erase function 
   // str.erase(4,2); // first hum lete hai index jaha se hatana shuru krte hai and second hum lete hai ki jitna charecter hatana ho 

   //kisi do string ko add krne ke do tarike hote hai pahla + operator use kr lo aur dusra ki kisi ek string me dusre ko append kra do 
   // + operator

   string str1 = "delhi";

   string result = str + str1 ;

   str1.append(str);

    cout << result << endl;

    cout << str1;



    return 0;


}
*/




