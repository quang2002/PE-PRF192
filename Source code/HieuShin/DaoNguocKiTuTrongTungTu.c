#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * ham tinh do dai cua chuoi
 */
int string_length(char s[]) {
   int i=0;
 
   while(s[i]!='\0')
      i++;
 
   return i;    
}
 
/**
 * ham dao nguoc chuoi
 */
void string_reverse(char str[]) {
   int i, j, len;
   char ch;
 
   j = len = string_length(str) - 1;
   i = 0;
 
   while(i < j) {
      ch = str[j];
      str[j] = str[i];
      str[i] = ch;
      i++;
      j--;
   }
}
 
/**
 * ham main
 */
int main (void) {
   char s1[100];
   gets(s1);
   char reverse[100]="";
   char temp[50];
   int i, j, n;
 
   n = string_length(s1);
 
   for(i = 0; i < n; i++) {
 
      for(j = 0; i < n && s1[i]!=' '; ++i,++j) {
         temp[j] = s1[i];
      }
       
      temp[j] = '\0';
 
      string_reverse(temp);
 
      strcat(reverse, temp);
      strcat(reverse, " ");
   }
    
   printf("Chuoi ban dau:\n %s", s1);
   printf("\nChuoi sau khi da dao nguoc:\n %s",reverse);
    
   return 0;
}