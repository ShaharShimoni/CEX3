#include <stdio.h>
// ‫‬‬‫‪‬‫‪‬#define LINE 256
// #define WORD 30

void shift_element(int *arr,int i){
    int *temp1=arr+1;
    int number=*temp1;
    int number2=0;
    for(int j=0;j<i;j++){
      temp1=temp1+1;
      
       number2=*temp1;
   
    
       *temp1=number;
       number=number2;

    }
    
}

int getline1 (char s[]){
       int county=0;
       char *move=s;
       while(*move != '\n'){
           county=county+1;
           move=move+1;
       }
       return county;

   }
int getword (char w[]){
    int county=0;
    char *move=w;
    while(*move != '\n'&& *move != '\t'){
           county=county+1;
           move=move+1;
       }
    return county;

} 

int substring1(char *str1, char *str2){

    char *move1=str1;
    char *move2=str2;
    
    while(*move1 !='\0'){
    if(*move2 =='\0'){
        return 1;
    }
    if(*move2 != *move1){
        if(move2==str2){
            move1=move1+1;
        }
        else{
            move2=str2;
        }
    }
    else{
        move1=move1+1;
        move2=move2+1;


    }
    
    
    }


    if(*move2=='\0'){
        return 1;
    }
    else{
        return 0;
    }

}

void insertion_sort(int *arr,int length){
    int *tempstart=arr;
    int *tempend=arr+1;
    int count=0;
    int flag=0;

    for(int i=0;i<length-1;i++){
        while(*tempstart>*tempend && flag==0){
            tempstart=tempstart-1;
            count=count+1;
            if(tempstart+1==arr){
                flag=1;
            }
            
        }
        int saveend=*tempend;
        
        
        shift_element(tempstart,count);
        
        if(count>=1){
         *(tempstart+1)=saveend;
        }
        tempstart=tempstart+count+1;
        tempend=tempend+1;
        count=0;
        flag=0;
        

    }



}

int similar (char *s,char *t, int n){
     char *moves=s;
     char *movet=t;
     int count=0;
     while(*movet != '\0'){
        if(*moves==*movet){
            moves=moves+1;
            movet=movet+1;
        }
        else{
            count=count+1;
            moves=moves+1;
        }

     }
     
         while(*moves !='\0'){
             count=count+1;
             moves=moves+1;
         }

         if(count==n){
             return 1;
         }
         else{
             return 0;
         }

         
     }


     void print_lines(char *str,char *txt){

        
       
    //    char txt[64000];
    //    char i;
    //    int j=0;
    //    while ((i=getc(stdin))!=EOF)
    //    {
    //        txt[j]=i;
    //        j++;
    //    }
       
      
      
        char *movetxt =txt;
       int place=0;

        while ( *movetxt != '\0')
         {
             char line[256]={0}; 
              while(*movetxt !='\n'&& *movetxt !=EOF){    
                
                  line[place]=*movetxt;
                  place=place+1;
                  movetxt=movetxt+1;
              }
              
            
              if(substring1(line,str)==1){
                  printf("%s\n",line);

              }
            
              place=0;
              if(*movetxt !='\0'){
              movetxt=movetxt+1;  
              }
               


         }

        
         





     }

     void print_similar_words(char *str,char *txt){

    //    char txt[64000];
    //    char i;
    //    int j=0;
    //    while ((i=getc(stdin))!=EOF)
    //    {
    //        txt[j]=i;
    //        j++;
    //    }
   
       // printf("%s",txt);

       char *move =txt;
       int place=0;
       while(*move !='\0'){
           char word[30]={0};
          
           while(*move !='\t'&&*move !=' '&&*move !='\n'){
                 word[place]=*move; 
                 place=place+1;
                 move=move+1;
                 
                 
           }
           
          
           if(similar(word,str,1)==1||similar(word,str,0)==1){
               printf("%s\n",word);
           }
           if(*move !='\0'){
           
           move=move+1;
           }
           
           
           place=0;


       }
       
      
       





     }













