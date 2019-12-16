#include "function.h"
#include <stdio.h>

int main(){
    char txt[64000];
       char i;
       int j=0;
       while ((i=getc(stdin))!=EOF)
       {
           txt[j]=i;
           j++;
       }
    
       //printf("%s",txt);


      char namesearch[30];
      char *move=txt;
      char *starttxt=txt;
      int place=0;
      while(*move !='\t' && *move != ' '){
          namesearch[place]=*move;
          place=place+1;
          move=move+1;
          starttxt=starttxt+1;
      }

      move=move+1;
      starttxt=starttxt+2;
      while(*starttxt=='\n'||*starttxt=='\t'||*starttxt==' '){
          starttxt=starttxt+1;
      }
      //printf("%s",starttxt);
      if(*move =='a'){
          print_lines(namesearch,starttxt);
      }
      if(*move =='b'){
          print_similar_words(namesearch,starttxt);
      }
     


return 0;


}