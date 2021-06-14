#include <stdio.h>
#include <stdlib.h>

char dresses[SHOP_CAP] = {'i','i','i','i','i','i','i','i','i','i'};
char pants[SHOP_CAP] = {'i','i','i','i','i','i','i','i'};
char TS[SHOP_CAP] = {'i','i','i','i','i'};
int topd=9;
int topp=7;
int topt=4;
int bought_d=0, bought_p=0, bought_t=0, sold_d=0, sold_p=0, sold_t=0;

void push(int barcode){
    if(barcode==333)
    {
          if(topd == SHOP_CAP-1)
          {
             puts("The dresses store is full!");
          }
          else
          {
             topd++;
             dresses[topd]='i';
             bought_d++;
           }
    }
    else if(barcode==444)
    {
        if(topp == SHOP_CAP-1)
          {
             puts("The pants store is full!");
          }
          else
          {
             topp++;
             pants[topp]='i';
             bought_p++;
          }
    }
    else
    {
      if(topt == SHOP_CAP-1)
          {
             puts("The T-shirts store is full!");
          }
          else
          {
              topt++;
              TS[topt]='i';
              bought_t++;
          }
    }
}


void buy(int n,int barcode){

    const int remain= SHOP_CAP - count(barcode);
    int r= remain;
    if(r>0){
        for(int i=1; i<=n; i++)
        {
            push(barcode);
            r--;
            if(r==0)
            {
                break;
            }
        }
        if(n>remain)
        {
           if(barcode==333)
           {
                printf("The dresses store is full! \n Now you have %d dresses \n %d are excess\n", count(barcode),n-remain);
           }
           else if(barcode==444)
           {
                printf("The pants store is full! \n Now you have %d pants \n %d are excess\n", count(barcode),n-remain);
           }
           else
           {
                printf("The T-shirts store is full! \n Now you have %d T-shirts \n %d are excess\n", count(barcode),n-remain);
           }
        }
    } else{
        if(barcode==333)
             {
                puts("The dresses store is full!");
             }
             else if(barcode==444)
             {
                 puts("The pants store is full!");
             }
             else
             {
                 puts("The t-shirts store is full!");
             }
    }
}
