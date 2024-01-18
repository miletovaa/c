#include <stdio.h>

// Task 1.1
// int main() {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     do {
//         if (n < 3) {
//             printf("The number must be greater than 2.\n");
//         }
//         printf("Enter a number: ");
//         scanf("%d", &n);
//     } while (n < 3);

//     for (int i = 1; i <= n; i++) {
//         printf("o");
//     }
//     for (int i = n-2; i >=1; i--) {
//         printf("\n");
//         for (int j = i; j >= 1; j--) {
//             printf(" ");
//         }
//         printf("o");
//     }
//     printf("\n");
//     for (int i = 1; i <= n; i++) {
//         printf("o");
//     }

//     return 0;
// }

// Task 1.2
// int main() {
//     int n;

//     printf("Enter a number of teams: ");
//     scanf("%d", &n);

//     while (n < 2) {
//         printf("The number must be greater than 1.\n");
//         printf("Enter a number of teams: ");
//         scanf("%d", &n);
//     }

//     for (int i=1; i<=n; i++) {
//         for (int j=i+1; j<=n; j++) {
//             printf("Team %d vs. Team %d \n",i, j);
//         }
//     }

//     return 0;
// }

// Task 1.3 04:48 - 04:53
// 5 MINUTES
// int main() {
//     int n;
//     printf("Enter an even number: ");
//     scanf("%d", &n);

//     while (n % 2 != 0 || n == 0) {
//         printf("A number should be even.");
//         scanf("%d", &n);
//     }

//     for (int i = 1; i <= n; i++) {
//         printf("%d, ", i);
//         printf("%d", n + 1 - i);
//         if (n + 1 - i != 1) printf(", ");
//     }

//     return 0;
// }

// Task 2.1 04:54 - 05:22
// 28 MINUTES
// int getMinutesDegree(int minutes) {
//     if (minutes == 0) return 0;
//     else return minutes / 60.0 * 360;
// }

// int getHoursDegree(int hours) {
//     if (hours == 0) return 0;
//     else return hours / 12.0 * 360;
// }

// int main() {
//     int hours, minutes;

//     printf("Input hours: ");
//     scanf("%d", &hours);

//     while (hours > 12 || hours < 0) {
//         printf("Invalid hours. Input again: ");
//         scanf("%d", &hours);
//     }

//     printf("Input minutes: ");
//     scanf("%d", &minutes);

//     while (minutes > 59 || minutes < 0) {
//         printf("Invalid minutes. Input again: ");
//         scanf("%d", &minutes);
//     }

//     int minutesDegree = getMinutesDegree(minutes);
//     int hoursDegree = getHoursDegree(hours);

//     if (minutesDegree > hoursDegree) {
//         printf("The angle between the hands are %d ", minutesDegree - hoursDegree);
//         printf("and %d degrees", 360 - (minutesDegree - hoursDegree));
//     } else {
//         printf("The angle between the hands are %d ", hoursDegree - minutesDegree);
//         printf("and %d degrees", 360 - hoursDegree - minutesDegree);
//     }

//     return 0;
// }

//  Task 2.2 05:29 - 05:36
// 7 MINUTES
// int isPerfect(int number) {
//     int sum = 0;
//     for (int i = 1; i < number; i++) {
//         if (number % i == 0) {
//             sum += i;
//         }
//     }
//     if (sum == number) return 1;
//     else return 0;
// }

// int main() {
//     int n;

//     printf("input a number: ");
//     scanf("%d", &n);

//     while (n <= 0) {
//         printf("input a valid number");
//         scanf("%d", &n);
//     }

//     if (isPerfect(n) == 1) {
//         printf("%d is perfect", n);
//     } else printf("bye");

//     return 0;
// }

// Task 2.3 05:37 - 05:55
// 18 MINUTES
// int isPhoenix(int year) {
//     if (year % 6 == 0) return 1;
//     else return 0;
// }

// int isBahamut(int year) {
//     if (year % 50 == 0) return 1;
//     else return 0;
// }

// int isLeviathan(int year) {
//     if (year % 6 == 0) {
//         if (year % 100 - 12 >= 0 && year % 100 - 18 < 6 ) return 1;
//         else return 0;
//     } else return 0;
// }

// int main() {
//     int year;

//     printf("Input year: ");
//     scanf("%d", &year);

//     while (year > 9999 || year < 1) {
//         printf("Invalid year. Try again: ");
//         scanf("%d", &year);
//     }
    
//     if (isPhoenix(year) == 1) {
//         printf("Phoenix has come forth! - Wish for health!\n");
//     }

//     if (isBahamut(year) == 1) {
//         printf("Bahamut has come forth! - Wish for wisdom!\n");
//     }

//     if (isLeviathan(year) == 1) {
//         printf("Leviathan has come forth! - Wish for peace!\n");
//     }

//     return 0;
// }

// Task 2.4 06:22 - 06:31
// 9 MINUTES
// int getMinutes(int hours, int minutes) {
//     return (hours * 60.0) + minutes;
// }

// int main() {
//     int currentHour, currentMinute, deadlineHour, deadlineMinute;

//     printf("Input current hour: ");
//     scanf("%d", &currentHour);

//     while (currentHour > 24 || currentHour < 0) {
//         printf("Invalid current hour. Try again: ");
//         scanf("%d", &currentHour);
//     }

//     printf("Input current minute: ");
//     scanf("%d", &currentMinute);

//     while (currentMinute > 59 || currentMinute < 0) {
//         printf("Invalid current minute. Try again: ");
//         scanf("%d", &currentMinute);
//     }

//     printf("Input deadline hour: ");
//     scanf("%d", &deadlineHour);

//     while (deadlineHour > 24 || deadlineHour < 0) {
//         printf("Invalid deadline hour. Try again: ");
//         scanf("%d", &deadlineHour);
//     }

//     printf("Input deadline minute: ");
//     scanf("%d", &deadlineMinute);

//     while (deadlineMinute > 59 || deadlineMinute < 0) {
//         printf("Invalid current minute. Try again: ");
//         scanf("%d", &deadlineMinute);
//     }

//     int deadline = getMinutes(deadlineHour, deadlineMinute);
//     int current = getMinutes(currentHour, currentMinute);

//     printf("You have %d minutes left!", deadline - current);

//     return 0;
// }

// Task 3.1 06:32 - 06:52
// 20 MINUTES
// struct Inventory {
//     int pickaxes, swords, beads;
// };

// void addToInventory(struct Inventory *inventory) {
//     printf("Number of pickaxes: ");
//     scanf("%d", &inventory->pickaxes);

//     while (inventory->pickaxes < 0) {
//         printf("Number of pickaxes: ");
//         scanf("%d", &inventory->pickaxes);
//     }

//     printf("Number of long swords: ");
//     scanf("%d", &inventory->swords);

//     while (inventory->swords < 0) {
//         printf("Number of long swords: ");
//         scanf("%d", &inventory->swords);
//     }

//     printf("Number of beads: ");
//     scanf("%d", &inventory->beads);

//     while (inventory->beads < 0) {
//         printf("Number of beads: ");
//         scanf("%d", &inventory->beads);
//     }
// };

// int calculateTiamats(struct Inventory *inventory) {
//     int tiamats = 0;
//     while (
//         inventory->pickaxes - 1 >= 0 
//         && inventory->swords - 1 >= 0 
//         && inventory->beads - 2 >= 0
//     ) {
//         inventory->pickaxes--;
//         inventory->swords--;
//         inventory->beads = inventory->beads - 2;
//         tiamats++;
//     }
//     return tiamats;
// };

// void printInventory(struct Inventory *inventory) {
//     printf("Remaining pickaxes: %d\n", inventory->pickaxes);
//     printf("Remaining swords: %d\n", inventory->swords);
//     printf("Remaining beads: %d\n", inventory->beads);
// }

// int main() {
//     struct Inventory *inventory;

//     addToInventory(inventory);
//     printf("Number of tiamats you can craft: %d\n", calculateTiamats(inventory));
//     printInventory(inventory);

//     return 0;
// }

// Task 3.2 06:53 - 07:08 
// 15 MINUTES
// struct Grid {
//     int rows, cols;
// };

// void inputGrid(struct Grid *grid) {
//     printf("Insert cols: ");
//     scanf("%d", &grid->cols);

//     printf("Insert rows: ");
//     scanf("%d", &grid->rows);
// }

// int getSquaresForSize(struct Grid *grid, int size) {
//     int number = 0;

//     for (int i = 0; i < grid->rows; i++) {
//         if (i + size <= grid->rows) {
//             for (int j = 0; j < grid->cols; j++) {
//                 if (j + size <= grid->cols) {
//                     number++;
//                 }
//             }
//         }
//     }

//     return number;
// }

// int getSquaresTotal(struct Grid *grid) {
//     int maxSquareSize;
//     if (grid->rows > grid->cols) {
//         maxSquareSize = grid->cols;
//     } else maxSquareSize = grid->rows;

//     int total = 0;
//     for (int i = 1; i <= maxSquareSize; i++) {
//         total += getSquaresForSize(grid, i);
//     }
//     return total;
// }

// int main() {
//     struct Grid *grid;

//     inputGrid(grid);

//     int total = getSquaresTotal(grid);

//     printf("Total: %d", total);

//     return 0;
// }


#include <string.h>
#include <stdlib.h>

struct Account {
    int accountNumber, accountType;
    char holderName[255];
    float balance;
};

void addAccount(struct Account **database, int *numAccounts) {
    (*numAccounts)++;
    *database = (struct Account *)realloc(*database, *numAccounts * sizeof(struct Account));

    printf("Enter account number: ");
    scanf("%d", &(*database)[*numAccounts - 1].accountNumber);

    getchar();

    printf("Enter holder's name: ");
    char name[255];
    gets(name);
    strcpy((*database)[*numAccounts - 1].holderName, name);

    printf("Enter initial balance: ");
    scanf("%f", &(*database)[*numAccounts - 1].balance);

    printf("Select account type:\n 1 - Current\n 2 - Savings\n 3 - Pension\n 4 - Youth\n");
    scanf("%d", &(*database)[*numAccounts - 1].accountType);
};

void displayAccount(struct Account account) {
    printf("\nAccount Number: %d\n", account.accountNumber);
    printf("Holder's Name: %s\n", account.holderName);
    printf("Initial Balance: %.2f\n", account.balance);
    printf("Account Type: ");
    switch(account.accountType){
        case 1:
            printf("Current");
            break;
        case 2:
            printf("Savings");
            break;
        case 3:
            printf("Pension");
            break;
        case 4:
            printf("Youth");
            break;        
    }
}

void displayAccountDetails(struct Account *database, int numAccounts) {
    int accountIndex = -1, accountToDisplay;

    printf("Account To Display: ");
    scanf("%d", &accountToDisplay);

    for (int i = 0; i < numAccounts; i++) {
        if (database[i].accountNumber == accountToDisplay) {
            accountIndex = i;
            break;
        }
    }

    if (accountIndex != -1) {
        displayAccount(database[accountIndex]);
    } else {
        printf("account does not exist");
    }
}

void depositAmount(struct Account *database, int numAccounts) {
    int accountNumber, depositAmount, accountIndex = -1;
    printf("Account number: ");
    scanf("%d", &accountNumber);
    
    printf("Deposit amount: ");
    scanf("%d", &depositAmount);

    for (int i = 0; i < numAccounts; i++) {
        printf("%d\n", database[i].accountNumber);
        if (database[i].accountNumber == accountNumber) {
            accountIndex = i;
            break;
        }
    }

    if (accountIndex != -1) {
        database[accountIndex].balance += depositAmount;
    } else {
        printf("account does not exist");
    }
}

void withdrawAmount(struct Account *database, int numAccounts) {
    int accountNumber, widthdrawAmount, accountIndex = -1;
    printf("Account number: ");
    scanf("%d", &accountNumber);
    
    printf("Widthdraw amount: ");
    scanf("%d", &widthdrawAmount);

    for (int i = 0; i < numAccounts; i++) {
        printf("%d\n", database[i].accountNumber);
        if (database[i].accountNumber == accountNumber) {
            accountIndex = i;
            break;
        }
    }

    if (accountIndex != -1) {
        database[accountIndex].balance -= widthdrawAmount;
    } else {
        printf("account does not exist");
    }
}

int main () {
    int numAccounts = 0, menuOption;
    struct Account *database;
    database = (struct Account *)malloc(sizeof(struct Account));

    printf("Hello! Welcome\n");

    while (1) {
        printf("\n\nSelect an option:\n 1 - Add account\n 2 - Display account details\n 3 - Deposit\n 4 - Widthdraw\n");
        scanf("%d", &menuOption);

        switch(menuOption){
            case 1:
                addAccount(&database, &numAccounts);
                break;
            case 2:
                displayAccountDetails(database, numAccounts);
                break;
            case 3:
                depositAmount(database, numAccounts);
                break;
            case 4:
                withdrawAmount(database, numAccounts);
                break;
            case 5:
                free(database);
                return 0;
            default:
                printf("Invalid option");
                break;
        }
    }
}
