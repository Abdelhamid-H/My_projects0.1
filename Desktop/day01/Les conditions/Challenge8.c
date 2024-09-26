#include <stdio.h>

int main() {
    
   int note;
   printf("Veuillez entrer votre note: ");
   scanf("%d", &note);
   
   if(note < 10){
      printf("Recalé.");
   }
   else if( 10 <= note && note < 12){
       printf("Passable.");
   }
   else if( 12 >= note && note < 14){
      printf("Assez bien.");
   }
   else if( 14 <= note && note < 16){
      printf("Assez bien.");
   }
   else if(note >= 16){
      printf("très bien.");
   }   
      
    return 0;
}