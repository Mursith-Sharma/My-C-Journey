#include<stdio.h>
void print_arr();
void set_arr_to(int num);
void set_col_to(int col, int val);
void set_row_to(int row, int val);

int arr[8][8];

int main()
{
    int rc = 1;
  printf("Each house in the matrix has a terrorist...\n");
  set_arr_to(rc);
  print_arr();
    printf("2. How many choppers to send?  ");
    int no;
    scanf("%d",&no);
    int r=8;
    int c=7;
    int add = 15;
    for(int i=1;i<=no;i++)
    {
        int row,col;
    int val=0;
    printf("Enter the coordinates to land the chopper [x,y = 1-8] #%d (x,y): ",no);
    scanf("%d,%d",&row,&col);
            set_row_to(row,val);
      set_col_to(col,val);
      print_arr();
      r--;
      c--;
      int temp = r+c;
      int u = add + temp;
      add = u;
    }

                printf("%d terrorist have been arrest by landing at \n",add);

                    printf("\n..........................\n");
    printf("CONGRATS SOLDIERS, MISSION COMPLETED SUCCESSFULLY");
    printf("\n..........................\n");

}


void print_arr(){
  for(int i=1; i<=8; i++){
                for (int j=1; j<=8; j++){
                        printf("%d  ", arr[i][j]);
                }
                printf("\n");
        }
}

void set_arr_to(int num){
  for(int i=1; i<=8; i++){
                for(int j=1; j<=8; j++){
                        arr[i][j] = num;
                }
        }
}

void set_col_to(int col, int val){
  for(int i=1; i<=8; i++){
    arr[i][col] = val;
  }
}

void set_row_to(int row, int val){
  for(int i=1; i<=8; i++){
                arr[row][i] = val;
        }
}


###########################################################################################################################################################

#include<stdio.h>
void set_individual(int row, int col, int val);
void print_arr();
void set_arr_to(int num);
void set_col_to(int col, int val);
void set_row_to(int row, int val);

int arr[8][8];

int main(){
	int option = 0;
	while(1){
		printf("1. Change all values\n");
		printf("2. Change a single row.\n");
		printf("3. Change a single column.\n");
		printf("4. Change individual coordinates\n");
		printf("5. Exit\n Enter your choice: ");
		scanf("%d", &option);
		if(option >= 6 || option < 1){
			printf("Invalid option, try again\n");
			continue;
		} else if (option == 1) {
			int val;
			printf("Enter the value you want to set: ");
			scanf("%d", &val);
			set_arr_to(val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 3) {
			int col, val;
			printf("Enter the column you want to modify: ");
			scanf("%d", &col);
			printf("Enter the value you want to set for column %d: ", col);
			scanf("%d", &val);
			set_col_to(col, val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 2) {
			int row, val;
			printf("Enter the row you want to modify: ");
			scanf("%d", &row);
			printf("Enter the value you want to set for row %d: ", row);
			scanf("%d", &val);
			set_row_to(row, val);
			printf("Value set, printing now...\n");
			print_arr();
		} else if (option == 4) {
			int row; int col; int val;
			printf("Enter the row: ");
			scanf("%d", &row);
			printf("Enter the col: ");
			scanf("%d", &col);
			printf("Enter the value to set in arr[%d][%d]: ", row, col);
			scanf("%d", &val);
			set_individual(row, col, val);
			printf("Value set, printing now...\n");
                        print_arr();
		} else if (option == 5){
			printf("Exitting...\n");
			break;
		} else {
			continue;
		}
	}

}

void print_arr(){
	for(int i=0; i<8; i++){
                for (int j=0; j<8; j++){
                        printf("%d  ", arr[i][j]);
                }
                printf("\n");
        }
}

void set_arr_to(int num){
	for(int i=0; i<8; i++){
                for(int j=0; j<8; j++){
                        arr[i][j] = num;
                }
        }
}

void set_col_to(int col, int val){
	for(int i=0; i<8; i++){
		arr[i][col] = val;
	}
}

void set_row_to(int row, int val){
	for(int i=0; i<8; i++){
                arr[row][i] = val;
        }
}

void set_individual(int row, int col, int val){
	arr[row][col] = val;
}
