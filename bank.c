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

    printf("Enter The Number Of The Service You Are Interested In: ");
    scanf("%d", &Service);

    if (Service == 1) {
        printf("Enter 1 for Account Opening\nEnter 2 for Account Closing: ");
        scanf("%d", &service_1);

        if (service_1 == 1) {
            printf("Visit: Account Opening Desk\n");
        } else {
            printf("Visit: Account Closing Desk\n");
        }
    }

    else if (Service == 2) {
        printf("Enter 1 for Car Loan\nEnter 2 for Home Loan\nEnter 3 for Personal Loan: ");
        scanf("%d", &service_2);

        if (service_2 == 1) {
            printf("Visit: Car Loan Department\n");
        } else if (service_2 == 2) {
            printf("Visit: Home Loan Department\n");
        } else {
            printf("Visit: Personal Loan Department\n");
        }
    }

    else if (Service == 3) {
        printf("Enter 1 for UPI History\nEnter 2 for UPI Blockage\nEnter 3 for Registering New UPI ID: ");
        scanf("%d", &service_3);

        if (service_3 == 1) {
            printf("Visit: UPI History Section\n");
        } else if (service_3 == 2) {
            printf("Visit: UPI Blockage Desk\n");
        } else {
            printf("Visit: UPI Registration Counter\n");
        }
    }

    else {
        printf("For Other Services, Please Visit Bank.\n");
    }

    return 0;
}
