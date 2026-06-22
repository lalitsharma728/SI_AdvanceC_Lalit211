#include<stdio.h>
int main(){
    int ID[10]={101,102,103,104,105,106,107,108,109,110};
    int Qua[10]={10,13,15,4,17,18,19,13,13,12};
    int price[10]={299,250,499,299,150,999,899,600,207,999};
    int offer[10]={25,20,10,50,39,49,45,50,19,40};
    int choice;
    int pu[10];
    int ID_N;
    int k=0;
    int sum=0;
    int off=0;
    int save=0;
     
    int n=1;
    while (n==1){

        printf("--MENU--\n");
        printf("View Inventory Stock(1)\n");
        printf("Purchase Items(2)\n");
        printf("checkout (3)\n");
        printf("To exit(4)\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        if(choice<1||choice>4){
            printf("invaild choice");}
        if(choice==1){
            printf("# ID       =");
            for(int i=0;i<10;i++){
                printf("%d ",ID[i]);
            }
            printf("\n");
            printf("# Quantity =");
            for(int i=0;i<10;i++){
                printf("%d ",Qua[i]);
            }
            printf("\n");
            printf("# Price    =");
            for(int i=0;i<10;i++){
                printf("%d ",price[i]);
            }
            printf("\n");
            printf("# Offer    =");
            for(int i=0;i<10;i++){
                printf("%d ",offer[i]);
            }
            printf("\n");
            continue;
        }
        
        int qu;
        if(choice==2){
            for(int i=0;i<10;i++){
                printf("Enter the ID of Product to ADD Item\n");
                scanf("%d",&ID_N);

                if (ID_N==11)
                {
                   break;
                }

                printf("Enter the Quantity\n");
                scanf("%d",&qu);
                printf("---Enter 11 to EXIT with current Items---\n");

                int found = 0;

                for(int j=0;j<10;j++){
                    if(ID[j] == ID_N){
                        if(qu>Qua[j]||qu<0){
                            printf("Invaild Quantity");
                            break;
                        }
                        pu[k++] = ID[j];
                        save+=offer[j]*qu;
                        off+=price[j]-offer[j];
                        sum += off * qu;
                        Qua[j] -= qu;
                        found = 1;
                        break;
                    }
                }

                if(found == 0){
                    printf("Invalid ID\n");
                } 

            }
            continue;
        }

        if(choice==3){
            printf("YOU ITEMS\n");
            for(int i=0;i<k;i++){
                printf("# %d ",pu[i]);
                printf("\n");
            }
            printf("# Your Total Sum= %d \n",sum);
            printf("# Quantity =%d\n",qu);
            printf("# Your Total save =%d\n",save);
            printf("--Thank you-- \n\n");
            continue;           
        }

        if(choice==4){
            printf("Thank you for your Time");
            break;
        }        
    
    }    
}