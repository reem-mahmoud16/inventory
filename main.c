int count(int barcode){
    int i=0,c=0,j=0,p=0,k=0,t=0;
    if(barcode==333)
    {
        while(dresses[i] != '\0')
        {
            c++;
            i++;
        }
        return c;
    }
    else if(barcode==444)
    {
        while(pants[j]!='\0')
        {
            p++;
            j++;
        }
        return p;
    }
    else
    {
        while(TS[k]!='\0')
        {
            t++;
            k++;
        }
        return t;
    }

}
 void inventory(){


   FILE *fp = fopen("inventory.txt", "w");
   fprintf(fp,"\t Dresses \t Pants \t T-shirts \n\n");
   fprintf(fp,"Buy \t %d \t\t %d \t %d \t \n\n" , bought_d , bought_p , bought_t);
   fprintf(fp,"Sell \t %d \t\t %d \t %d \t \n\n" , sold_d , sold_p , sold_t);
   fprintf(fp,"Remain \t %d \t\t %d \t %d \t \n\n" , count(333) , count(444) , count(555));
   fclose(fp);




}
