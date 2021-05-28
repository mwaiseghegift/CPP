#include <iostream>
using namespace std;

int main()
{
   int i;
   char str[100];

   cout << "Enter the message you want to decrypt:\t";
   cin >> str;
   //encrypted message
         for(i = 0; (i < 100 && str[i] != '\0'); i++){
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value
            cout << "\nEncrypted string: " << str << endl;
            break;
         }

      //Decrypted message

         for(i = 0; (i < 100 && str[i] != '\0'); i++){
            str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value
            cout << "\nDecrypted string: " << str << endl;
            break;
        }
   return 0;
}