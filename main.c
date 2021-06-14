#include <stdio.h>
#include <stdlib.h>

void print(){

        int k;
   FILE *fp = fopen("inventory.txt","r");

      while((k=fgetc(fp))!=EOF){
        printf("%c",k);
      }
    printf("\n");

       if(fp==NULL){
        printf("this file is not opened");
       }
     fclose(fp);


}
