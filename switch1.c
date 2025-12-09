#include <stdio.h>

int main() {
    char Name[50];
    int Service, service_1, service_2, service_3;

    printf("Welcome To Our Bank.\nBefore We Get Started\nPlease Enter Your Name:\n");
    scanf("%s", Name);

    printf("Thank You For Choosing Us, %s\n", Name);

    printf("We Offer Various Services.\n");
    printf("(Press 1 For) Account Related\n");
    printf("(Press 2 For) Loan related\n");
    printf("(Press 3 For) UPI Related\n");
    printf("(Press 4 For) Others\n");
    printf("Enter The Service Number You Are Intrestes In.\n");
    scanf("%d",&Service);
 switch (Service)
 {
 case 1: printf("Enter 1 for Account Opening\nEnter 2 for Account Closing: ");
         scanf("%d",&service_1);
    break;
         switch (service_1)
         {
        case 1: printf("Visit Account Opening Desk\n");
            break;
        case 2: printf("Visit Account Closing Desk\n");
            break;
         default: printf("Choose Either 1 or 2 Only\n");
            break;
         }
         break;        
       
 
 case 2: printf("Enter 1 for Car Loan\nEnter 2 for Home Loan\nEnter 3 for Personal Loan: ");
        scanf("%d",&service_2);
        break;
        switch (service_2)
        {
        case 1: printf("Visit: Car Loan Department\n");
            break;
        case 2: printf("Visit: Home Loan Department\n");
            break;
        case 3: printf("Visit: Personal Loan Department\n");
            break;
        default: printf("Select Between 1 to 3 only.\n");
            break;
        }
        break;              
case 3: printf("Enter 1 for UPI History\nEnter 2 for UPI Blockage\nEnter 3 for Registering New UPI ID: ");
        scanf("%d",&service_3);
        break;
        switch (service_3)
        {
        case 1: printf("Visit: UPI History Section\n");
            break;
        case 2: printf("Visit UPI Blocage Section.\n");
            break;
        case 3: printf("Visit UPI Registration Section.\n");
            break;        
        default: printf("Select Between 1 to 3 Only\n");
            break;
        }
        break;       
default: printf("For Other Services, Please Visit Bank.\n");
    break;
 }

    return 0;
}
