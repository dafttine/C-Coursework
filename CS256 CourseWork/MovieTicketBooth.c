#include <stdio.h>
#include <stdlib.h>

//selling movie theatre tickets
int initChart(char arr[15][30]){
    for(int row = 0; row < 15 ; row++){
        for (int col = 0; col < 30; col++){
            arr[row][col] = '#';
        }
     }

}

float* setRowPricing(){
    float* p;
    p = malloc(15 * sizeof(float));
    printf("Please enter the price for each row:");
    for(int row = 1; row < 16; row++){
        printf("\nRow %d: ", row);
        int rowIndex;
        rowIndex++;
        scanf("%f", &p[rowIndex]);
    }
    printf("The prices you have entered are...");
    for(int row = 1; row < 16; row++){
        printf("\nRow %d : $%.2f",row, *(p+row));
    }
    return p;
}

int printChart(char arr[15][30]){
    printf("Seats\n");
    printf("      123456789012345678901234567890\n");
    int rowIndex = 0;
    for(int row = 1; row < 16 ; row++){
        printf("Row %2d", row);
        for (int col = 0; col < 30; col++){
            printf("%c", arr[rowIndex][col]);
        }
        printf("\n");
        rowIndex++;
    }
    return 0;
}

int displayPrices(float* p){
    for (int i = 1; i < 16; i++){
        printf("Row %d: $%.2f\n",i, *(p+i));
    }
}

int sellingTickets(char arr[15][30], float* pricePtr){
    int cont = 1;
    float price = 0;
    int availablity = 1;
    int row;
    int col;
    printChart(arr);
    while (cont == 1){
        availablity = 1;
        printf("Please select the spot you would like to buy:");
        while(availablity == 1){
        	printf("\ncolumn:");
    		scanf("%d", &col);
    		printf("\nrow:");
            scanf("%d", &row);
            row--;
            col--;
            if(arr[row][col] == '#')
              availablity = 0;
            else
              printf("\nThat seat has already been taken, please select another seat.");

        }
        arr[row][col] = '*';
        row++;
        price += *(pricePtr + row);
        printf("\nWould you like to continue? '1' for yes or '0' for no:");
        scanf("%d", &cont);
    }
    printf("Your total is: $%.2f", price);
    return price;
}

int checkAvailableSeating(char arr[15][30]){
    int availableSeatsTotal = 0;
    int soldSeats = 0;
    int availableSeatsRow = 0;
    int rowIndex = 1;
    for(int row = 0; row < 15; row++){
        printf("\nSeats available in row %d: ",rowIndex);
        for(int col = 0; col < 30; col++){
            if(arr[row][col] == '#'){
              availableSeatsRow++;
            }
            if(arr[row][col] == '*'){
              soldSeats++;
            }
        }
    printf("%d",availableSeatsRow);
    availableSeatsTotal += availableSeatsRow;
    availableSeatsRow = 0;
    rowIndex++;
    }
    printf("\nThere are a total of %d seats sold.", soldSeats);
    printf("\nThere are a total of %d seats available.", availableSeatsTotal);
}

int main(){
    int menu;
    static float totalSales;
    int cont = 1;
    float* pricePtr;
    static float prices[15];
    static char chart[15][30];
    initChart(chart);
    printChart(chart);

    while(cont == 1){
        printf("MENU || Select 1 to set row prices, Select 2 to sell tickets, Select 3 to view sale data, Select 4 to view seating availability, Select 5 to shut down:");
        scanf("%d", &menu);
        switch(menu){
            case 1:
        {
            printf("Setting Row Prices:\n");
            pricePtr = setRowPricing();
            printf("\n");
            break;
        }
        case 2:
        {
           printf("Selling Tickets:\n");
           displayPrices(pricePtr);
           totalSales += sellingTickets(chart, pricePtr);
           printf("\n");
           break;
        }
        case 3:
        {
           printf("View Sale Statistics:\n");
           printf("Total amount in tickets sold: $%.2f", totalSales);
           printf("\n");
           break;
        }
        case 4:
        {
            printf("View Seating availability:\n");
            printChart(chart);
            checkAvailableSeating(chart);
            printf("\n");
            break;
        }
        case 5:
        {
            printf("Shutting down.");
            cont = 0;
            break;
        }

        default:
        {
            printf("You did not enter a valid option.");
            printf("\n");
            break;
        }

        }
    }

}
