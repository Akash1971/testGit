#include <stdio.h>
#include <stdlib.h>
void ordermenu()
{

    printf("\t\t\tOrderMenu\n");
    printf("\t1. Burger, Price: 150 TK\n");
    printf("\t2. Chicken, Price: 350 TK\n");
    printf("\t3. Drinks, Price: 35 TK per Botal\n");
    printf("\t4. Fried Chicken, Price: 260 Tk\n");
    printf("\t5. Fish item, Price: 120 Tk\n");
    printf("\t6. Sweet item, Price: 150 Tk\n");
    printf("\t7. Rice with dal, Price: 50 Tk\n");
    printf("\t8. Barfi, Price: 130 Tk\n");
    printf("\t\tEnd of the items\n");
}

int main()
{
    int items;
    char order='y';
    float a,b,c,d,e,f,g,h,j,k,l,m,n,o,p,q;
    int food[10];
    float quantity[100];
    float total[100];
    ordermenu();
    printf("\n");
    int x;
    x:
    printf("How many items do you want to take\n");
    scanf("%d", &items);

    int i=0;
    while(i<items){
        int y;
        y:
        printf("%d. Select the item numbers from the given order menu\n",i+1);
        scanf("%d", &food[i]);
        printf("Enter quantity\n");
        scanf("%f", &quantity[i]);
        switch (food[i])
        {
            case 1:
                 a = 150;
                 b = quantity[i];
                 total[i]= a*b;
                 break;
             case 2:
                 c = 350;
                 d = quantity[i];
                 total[i]= c*d;
                 break;
             case 3:
                 e = 35;
                 f = quantity[i];
                 total[i]= e*f;
                 break;
             case 4:
                 g = 260;
                 h = quantity[i];
                 total[i]= g*h;
                 break;
             case 5:
                 q = 120;
                 j = quantity[i];
                 total[i]= q*j;
                 break;
             case 6:
                 k = 150;
                 l = quantity[i];
                 total[i]= k*l;
                 break;
             case 7:
                 m = 50;
                 n = quantity[i];
                 total[i]= m*n;
                 break;
             case 8:
                 o = 130;
                 p = quantity[i];
                 total[i]= o*p;
                 break;
             default:
                printf("Problem in selection. Try again\n");
                goto x;

        }
        i++;
    }
    float sum=0.00;
    for(i=0;i<items;i++)
    {
        sum=sum+total[i];
    }
    printf("Food items price is: %.2f TAKA\n",sum);
    printf("Mandatory 15% vat is applicable\n");
    float vat;
    float discount;
    vat = (sum*15)/100;
    if(sum>500){
        printf("As you have taken food more than 500 TAKA you will get 3 percent discount from our restaurant\n");
        discount = (sum*3)/100;
        printf("Your total amount including vat and discount is: %.2f\n", sum+vat-discount);
    }
    else{
        printf("Your total amount including vat is: %.2f TAKA\n", sum+vat);
    }
    printf("Do you wish to have another order?(y/n): \n");
		fflush(stdin);
		scanf("%c", &order);
		if (order == 'y'|| order == 'y')
        {
            goto x;
        }
        else
        {
            printf("Thanks for visiting\n");
        }


    return 0;
}

