 #include<iostream>
 #include<ctype.h>
 using namespace std;

 int strComp(const char[], const char[]);
 //int strLeng(const char[]);

 int main(){
     char str1[50]="Hello", str2[50]="Hello";
     if(strComp(str1, str2)==0){
         cout<<"both string are equals"<<endl;
         }
     else if(strComp(str1, str2)<0){
         cout<<"first word is smaller than the second word"<<endl;
         // cout<<strComp(str1, str2);
     }
     else{
         cout<<"first word is greater than the second word" <<endl;
         // cout<<strComp(str1, str2);
     }
     return 0;
 }

 /*int strLeng(const char arr[]) {
     int i = 0;
     while (arr[i++] != '\0');
     return i;
 }*/

 // compare function without case sensitive 
 int strComp(const char str1[], const char str2[]){
     int i;
     for (i = 0; str1[i] || str2[i]; i++)
     {
         char c1 = tolower(str1[i]);
         char c2 = tolower(str2[i]);
         if (c1 != c2) {
             return c1 - c2;
         }
     }
     return 0;
 }
 // compare function with case sensitive 
 /*
 int strComp(const char str1[], const char str2[]){
     int i;
     for (i = 0; str1[i] || str2[i]; i++)
     {
         if(str1[i]!=str2[i])
             return str1[i]-str2[i];
     }
     return 0;
 }
 */