#include <stdio.h>

float commercial_calc(int amount);
float domestic_calc(int amount);

int main(void)
{
    char choice, type;
    int amount, claims, pro_fee_c = 80, pro_fee_p = 50, total_p = 0, total_c = 0;
    float total_c_prem = 0, total_p_prem = 0;

    do {
        printf("Please type 'P' for domestic or 'C' for commercial:> ");
        scanf(" %c", &type);
       
        printf("Amount Insured:> ");
        scanf("%d", &amount);
        while (amount < 0){
            printf("Amount error, cannot be negative. Please try again:  ");
            scanf("%d", &amount);
        }
       
        printf("Number of claims:> ");
        scanf("%d", &claims);
        while (claims < 0){
            printf("Claims error, cannot be negative. Please try again:  ");
            scanf("%d", &claims);
        }

        if (type == 'C' || type == 'c') {
           
            premium = commercial_calc(amount) + pro_fee_c;

            printf("\n;Premium Summary\nAmount Insured = %d\n", amount);
            printf("Number of claims = %d\n", claims);

            if (claims == 0){
                bonus = premium*.15;
                premium = (premium - bonus); 
                printf("No claim bonus = %.2f\n", bonus);
                printf("Premium = %.2f\n", premium);
            } else
                printf("Premium = %.2f\n", premium);

            total_c_prem += premium;
            total_c++;   
        } else if (type == 'P' || type== 'p') {

            premium = domestic_calc(amount) + pro_fee_p;
            
            printf("\nPremium Summary\nAmount Insured; = %d\n", amount);
            printf("Number of claims = %d\n", claims);

            if (claims == 0){
                bonus = premium*.1;
                premium = (premium - bonus);
                printf("No claim bonus = %.2f\n", bonus);
                printf("Premium = %.2f\n", premium);
            } else
                printf("Premium = %.2f\n", premium);

            total_p_prem += premium;
            total_p++;
        } else
            printf("\nType error. Please start again and type 'P' for domestic or 'C' for commercial:> \n");

        printf("\nAnother client (y/n) ?\n");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\nSession Summary:");
    printf("\nNumber of Private clients = %d", total_p);
    printf("\nTotal Private client Premiums collected = $%.2f", total_p_prem);
    printf("\nNumber of Commercial clients = %d", total_c);
    printf("\nTotal Commercial client Premiums collected = $%.2f", total_c_prem);

    return 0;
}

float commercial_calc(int amount)
{
    int abv_250, sub_250;
    float premium;

    if (amount > 250000){
        abv_250 = amount - 250000;    // if amount is > $250,000... test1 = 300,000 - 250,000 = 50,000, will be .75%
        sub_250 = amount - abv_250 ;                 //         ... test2 = 300,000 - 50,000 = 250,000, will be .5%
        premium = (abv_250*.0075) + (sub_250*.005);  //         ... premium = sub $250,000 premium + over $250,000 premium
    } else
        premium = amount*.005;                       // if amount is =< $250,000, will be .5%

    return premium; 
}

float domestic_calc(int amount)
{
    int abv_100, sub_100;
    float premium;

    if (amount > 100000){
        abv_100 = amount - 100000;    // if amount is > $100,000... test1 = 150,000 - 100,000 = 50,000, will be .25%
        sub_100 = amount - abv_100 ;                 //         ... test2 = 150,000 - 50,000 = 100,000, will be .3%
        premium = (abv_100*.0025) + (sub_100*.003);  //         ... premium = sub $200,000 premium + over $100,000 premium
    } else
        premium = amount*.003;                       // if amount is =< $100,000, will be .3%

    return premium; 
}