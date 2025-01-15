#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype> // For isdigit and ispunct
using namespace std;

char alphnum[] = "0123456789"
                 "!@#$%^&*"
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                 "abcdefghijklmnopqrstuvwxyz";
int strLen = sizeof(alphnum) - 1;

char GenRand() {
    return alphnum[rand() % strLen];
}

int main() {
    int n, c = 0, s = 0;
    srand(time(0));
    
    cout << "Enter the length of the password required(atleast 7 ): ";
    cin >> n;
    cout << endl;
    
    string D;
    if(n>6){
        do {
        D.clear();
        c = s = 0;
        
        for (int z = 0; z < n; z++) {
            char C = GenRand();
            D += C;
            if (isdigit(C)) {
                c++;
            }
            if (ispunct(C)) { // Check for any special character
                s++;
            }
        }
    } while (n > 2 && (s == 0 || c == 0)); // Ensure at least one digit and one special character for n > 2

    cout << "Your Password is: " << D << endl;
    }
    else{
        cout<<"Please enter a valid length for password"<<endl;
    }
    cout << endl << "                 THANK YOU";
    return 0;
}




//documentation: 



// char GenRand() {
//     return alphnum[rand() % strLen];
// }
// explainantion:-This function is designed to randomly select a character from the alphnum array,
//  which contains a mix of digits, special characters, uppercase letters, and lowercase letters.
//sizeof(alphnum) - 1 gives the total number of characters in the array (strLen).





//rand():- rand() generates a random integer in the range [0, 32767],
// <cstdlib> is the header file in which this fuction is kept.

//srand(time(0)):-To make the output appear more random, srand() is used to set the seed.
//Using the current time ensures that the sequence changes each time the program is executed.
// and time(0) is passed for changing of time in each second.



//  D.clear(); Clears the existing string without creating a new one

//isdigit() is a standard library function declared in the <cctype> header file.
// Returns non-zero (true) if the character is a digit (0-9).
// Returns zero (false) if the character is not a digit.


//ispunct();
// It determines if the character is a punctuation symbol.
// Punctuation characters are any printable characters that are not alphanumeric 
// (i.e., not a letter or digit) and not a space.
//punctuation characters:-! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ { | } ~ 




