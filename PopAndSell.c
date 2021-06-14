#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define SHOP_CAP 150

char dresses[SHOP_CAP] = {'i','i','i','i','i','i','i','i','i','i'};
char pants[SHOP_CAP] = {'i','i','i','i','i','i','i','i'};
char TS[SHOP_CAP] = {'i','i','i','i','i'};
int topd=9;
int topp=7;
int topt=4;
int bought_d=0, bought_p=0, bought_t=0, sold_d=0, sold_p=0, sold_t=0;
const int initiald=10, initialp=8, initialt=5;



void pop(int barcode){

           if(barcode==333)
        {
            if(topd == -1)
            {
                puts("The dresses store is empty!");
            }
            else
            {
                dresses[topd]= NULL;
                sold_d++;
                topd--;
            }
        }
        else if(barcode==444)
        {
            if(topp == -1)
            {
                puts("The pants store is empty!");
            }
            else
            {
                pants[topp]=NULL;
                sold_p++;
                topp--;
            }
        }
        else
        {
            if(topt == -1)
            {
                puts("The T-shirts store is empty!");
            }
            else
            {
                TS[topt]=NULL;
                sold_t++;
                topt--;
            }
        }
}


void sell(int n,int barcode){

         if(count(barcode)==0)
         {
             if(barcode==333)
             {
                puts("The dresses store is empty!");
             }
             else if(barcode==444)
             {
                 puts("The pants store is empty!");
             }
             else
             {
                 puts("The t-shirts store is empty!");
             }
         }
         else
         {
            int const c = count(barcode);
            for(int i=1; i<=n; i++)
            {
                pop(barcode);
                if(count(barcode)==0)
                {
                    break;
                }
            }
            if(n>c)
            {
               if(barcode==333)
               {
                    printf("The dresses store is empty! \n you have %d orders that haven't been sold. \n ", n-c);
               }
               else if(barcode==444)
               {
                    printf("The pants store is empty! \n you have %d orders that haven't been sold. \n ", n-c);
               }
               else
               {
                    printf("The t-shirts store is empty! \n you have %d orders that haven't been sold. \n ", n-c);
               }
            }
        }
}
