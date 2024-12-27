#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\t\t\t\tSELECT THE HOTEL\n");
    printf("\t 1. DELHI SWEETS\n");
    printf("\t 2. A2B HOTEL\n");
    printf("\t 3. RK HOTEL\n");
   
    
    int hotel_select;
    scanf("%d", &hotel_select);
    
    switch (hotel_select) {
        case 1: {
            printf("\t\t\tWELCOME TO DELHI SWEETS\n");
            printf("\n");
            printf("SELECT YOUR FAVOURITE FOOD\n");
            printf("1. MUTTON BRIYANI\n2. CHAPPATHI\n3. CHICKEN BRIYANI\n");
            
            int food_selection;
            scanf("%d", &food_selection);
            printf("Processing......\n");
            
            int total_amount = 0;
            int quantity;
            switch (food_selection) {
                case 1:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 200;
                    break;
                case 2:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 20; 
                    break;
                case 3:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 180; 
                    break;
                default:
                    printf("Invalid selection.\n");
                    return 1;
            }
            printf("THE TOTAL AMOUNT TO PAY IS = %d\n", total_amount);
            break;
        }
        case 2: {
            printf("\t\t\tWELCOME TO A2B HOTEL\n");
            printf("\n");
            printf("SELECT YOUR FAVOURITE FOOD\n");
            printf("1. MAGGIE\n2. ICECREAM\n3. DOSA\n");
            
            int food_selection;
            scanf("%d", &food_selection);
            printf("Processing......\n");
            
            int total_amount = 0;
            int quantity;
            switch (food_selection) {
                case 1:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 100; 
                    break;
                case 2:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 30; 
                    break;
                case 3:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 230; 
                    break;
                default:
                    printf("Invalid selection.\n");
                    return 1;
            }
            printf("THE TOTAL AMOUNT TO PAY IS = %d\n", total_amount);
            break;
        }
        case 3: {
            printf("\t\t\tWELCOME TO RK HOTEL\n");
            printf("\n");
            printf("SELECT YOUR FAVOURITE FOOD\n");
            printf("1. CHICKEN PEPPER FRY\n2. FRIED RICE\n3.PANEER SODA\n");
            
            int food_selection;
            scanf("%d", &food_selection);
            printf("Processing......\n");
            
            int total_amount = 0;
            int quantity;
            switch (food_selection) {
                case 1:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 200; 
                    break;
                case 2:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 20; 
                    break;
                case 3:
                    printf("ENTER THE QUANTITY: ");
                    scanf("%d", &quantity);
                    total_amount = quantity * 180; 
                    break;
                default:
                    printf("Invalid selection.\n");
                    return 1;
            }
            printf("THE TOTAL AMOUNT TO PAY IS = %d\n", total_amount);
            break;
        }
        
        default:
            printf("Invalid hotel selection.\n");
            return 1;
    }

    
    srand(time(0));
    int OTP = rand() % 9000 + 1000;
    printf("YOUR OTP IS: %d\n", OTP); 
    printf("ENTER YOUR OTP: ");
    
    int customer_otp;
    scanf("%d", &customer_otp);
    
    if (OTP == customer_otp) {
        printf("YOUR TRANSACTION IS BEING IN PROGRESS....\n");
        printf("COLLECT YOUR ORDER\n");
        printf("\t\t\t**THANK YOU***\n");
        printf("\t\t\t***VISIT AGAIN***\n");
    } else {
        printf("OTP IS WRONG\n");
    }

    return 0;
}
