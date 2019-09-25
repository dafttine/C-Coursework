/*
 * HWK3.c
 *
 *  Created on: Apr 18, 2018
 *      Author: Kristine
 */

#include <stdio.h>
#include <math.h>

int getRadius(){
	float radius;
	scanf("%f", &radius);
	if (radius < 0)
	{
	  printf("\nError: please enter a positive value:");;
	  radius = getRadius();
	}
	return radius;
}

int getHeight(){
	float height;
	scanf("%f", &height);
	if (height < 0)
	{
	  printf("\nError: please enter a positive value:");;
	  height = getHeight();
	}
	return height;
}

int getBase(){
	float base;
	scanf("%f", &base);
	if (base < 0)
	{
	  printf("\nError: please enter a positive value:");;
	  base = getBase();
	}
	return base;
}

int getLength(){
	float length;
	scanf("%f",&length);
    if (length < 0)
	{
	  printf("\nError: please enter a positive value:");;
	  length = getLength();
	}
  return length;
}

int getWidth(){
	float width;
	scanf("%f", &width);
	if (width < 0)
	{
	  printf("\nError: please enter a positive value:");;
	  width = getWidth();
	}
	return width;
}

int A1(){
	int a;
	printf("Geometry Calculator\n");
	printf("\t1.Calculate the Area of a Circle\n");
	printf("\t2.Calculate the Area of a Rectangle\n");
	printf("\t3.Calculate the Area of a Triangle\n");
	printf("\t4.Quit\n");
	printf("\nEnter your choice (1-4):");

	scanf("%d", &a);

    switch(a){
	 case 1:
	  {
		  float r;
		  const float PI = 3.14159;
		  printf("You have chosen area of a circle,\n Please provide radius: ");
		  r = getRadius();
		  float area = PI * pow(r,2);
		  printf("Area of circle with radius %.0f : %.0f", r, area);
		  break;
	  }

	  case 2:
	  {
		  float length, width, area;
		  printf("You have chosen area of a Rectangle\n");
		  printf("Please provide length: ");
		  length = getLength();
		  printf("\nPlease provide width: ");
		  width = getWidth();
		  area = length * width;
		  printf("Area of Rectangle with length %.0f and width %.0f: %.0f", length, width, area);
		  break;
	  }

	  case 3:
	  {
		  float base, height, area;
		  printf("You have chosen area of a Triangle\n");
		  printf("Please provide base: ");
		  scanf("%f", &base);
		  printf("\nPlease provide height: ");
		  scanf("%f", &height);
		  area = base * height * .5;
		  printf("Area of Rectangle with base %.0f and height %.0f: %.0f", base, height, area);
		  break;

	  }
	  case 4:
	  {
		  printf("Session has ended.");
		  break;
	  }

	  default:
	  {
		  printf("You have entered an invalid option.\n");
		  A1();
		  break;
	  }
    }
	 return 0;

}

int getPrevPop(){
	float prevPop;
	scanf("%f", &prevPop);
	if (prevPop < 2)
	{
	  printf("\nError: please enter a starting size greater than 2:");;
	  getPrevPop();
	}
	return prevPop;
}

int getBirth(){
    float birth;
	scanf("%f", &birth);
	if (birth < 0)
	{
	  printf("\nError: please enter a positive value:");
	  birth = getBirth();
	}
	return birth;
}

int getDeath(){
    float death;
	scanf("%f", &death);
	if (death < 0)
	{
	  printf("\nError: please enter a positive value:");
	  death = getBirth();
	}
	return death;
}

int getNumYears(){
	float numYears;
	scanf("%f", &numYears);
	if (numYears < 2)
	{
	  printf("\nError: please enter at least 1 year:");
	  getNumYears();
	}
	return numYears;
}

int Population(){

	float newPop, prevPop, birth, death, numYears;
	int year = 1;
	printf("\nWhat is the starting size of a population:");
	prevPop = getPrevPop();
	printf("What is the annual birth rate:");
	birth = getBirth();
	printf("What is the annual death rate:");
	death = getDeath();
	printf("What is the number of years to display:");
	numYears = getNumYears();
	printf("Beneath is the population in the next %.0f years with a previous population size of %.0f, death rate of %.0f, and birth rate of %.0f.\n",numYears, prevPop, death, birth);
	for(int i = 0; i < numYears; i+=1){
	  newPop = prevPop + (birth * prevPop) - (death * prevPop);
	  prevPop = newPop;
	  printf(" %d year(s): %.0f\n", year, newPop);
	  year += 1;
	}
	return 0;
}

int getRow(){
	int row;
	 printf("Please select a row for your move [1-3]:");
	 scanf("%d", &row);
	 if(row > 3 || row < 1){
	   printf("\nPlease make sure your row value is (1-3).");
	   row = getRow();
	 }
	return row-1;
}

int getCol(){
	int col;
	printf("Please select a col for your move [1-3]:");
	  scanf("%d" , &col);
	  if (col>3 || col<1){
		  printf("Please make sure your column value is (1-3).");
		  col = getCol();
	  }
	return col-1;
}

int checkSpace(char arr[3][3], int row, int col){
	  if(arr[row][col]=='*'){
	    return 0;
	  }
	  else{
	    printf("This spot is already taken, choose another spot.\n");
		return 1;
	  }
}

int winCheck(char board[3][3]){
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1]!='*')
            return 1;

        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&& board[0][i]!='*')
            return 1;

        if((board[0][0] == board[1][1] && board[1][1] == board[2][2]&& board[2][2]!='*') || (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2]!='*'))
            return 1;
    }

}

void displayBoard(char arr[3][3]){
	for(int i = 0; i<3;i++){
		for(int j = 0; j<3;j++){
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
}

int TicTacToe(){
	int row, col, check;
	int winStatus;
	int turns = 0;
	char board[3][3] = {        {'*','*','*'},
			            {'*','*','*'},
			            {'*','*','*'}
			   };

    while(turns<9){
	  check = 1;
	  while(check == 1){
	    row = getRow();
	    col = getCol();
	    check = checkSpace(board, row, col);
	  }
		
	  board[row][col] = 'X';
	  displayBoard(board);
	  turns++;
	  
	  if(turns == 9){
	    printf("It's a tie!");
	      break;
	  }
	  
	  winStatus = winCheck(board);
	    
          if(winStatus == 1){
	    printf("Player X has won!");
            break;
	  }
	  check = 1;
	  
	  while(check == 1){
	    row = getRow();
	    col = getCol();
	    check = checkSpace(board, row, col);
	  }
      
      board[row][col] = 'O';
      displayBoard(board);
      turns++;
      winStatus = winCheck(board);
	  if(winStatus == 1){
	    printf("Player O has won!");
	    break;
	    }
	  if(turns==9){
	    printf("It's a tie!");
	    break;
	  }
	  
     }
	  return 0;
}

int* reverse(int arr[], int length)
{
    int *a = arr;
    int *b = arr + length - 1;
    while (a < b) {
         int c = *a;
         *a = *b;
         *b = c;
        a++;
        b--;
    }
    return arr;
}

int ReverseArray(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;
    printf("\nOriginal Array:\n");
    for (int i = 0; i < length; i++)
        printf("%d\t",arr[i]);
    reverse(arr, length);
    int *len = arr + length;
    int *position = arr;
    printf("\nReversed Array:\n");
    for (position = arr; position < len; position++)
        printf("%d\t",*position);
    return 0;
}

int main(){
   A1();
   Population();
   TicTacToe();
   ReverseArray();

   return 0;
}
