#include<stdio.h>

int main(){
	int item1, item2;

	scanf("%d %d", &item1, &item2);

	if (item1 == 1){
        if (item2 == 1){
            printf("Total: R$ 10.00\n");
        } else if (item2 == 2){
            printf("Total: R$ 12.00\n");
        } else if (item2 == 3){
            printf("Total: R$ 12.50\n");
        } else if (item2 == 4){
            printf("Total: R$ 8.50\n");
        } else if (item2 == 5){
            printf("Total: R$ 8.00\n");
        }
	}

	if (item1 == 2){
        if (item2 == 1){
            printf("Total: R$ 12.00\n");
        } else if (item2 == 2){
            printf("Total: R$ 14.00\n");
        } else if (item2 == 3){
            printf("Total: R$ 14.50\n");
        } else if (item2 == 4){
            printf("Total: R$ 10.50\n");
        } else if (item2 == 5){
            printf("Total: R$ 10.00\n");
        }
	}

	if (item1 == 3){
        if (item2 == 1){
            printf("Total: R$ 12.50\n");
        } else if (item2 == 2){
            printf("Total: R$ 14.50\n");
        } else if (item2 == 3){
            printf("Total: R$ 15.00\n");
        } else if (item2 == 4){
            printf("Total: R$ 11.00\n");
        } else if (item2 == 5){
            printf("Total: R$ 10.50\n");
        }
	}

	if (item1 == 4){
        if (item2 == 1){
            printf("Total: R$ 8.50\n");
        } else if (item2 == 2){
            printf("Total: R$ 10.50\n");
        } else if (item2 == 3){
            printf("Total: R$ 11.00\n");
        } else if (item2 == 4){
            printf("Total: R$ 7.00\n");
        } else if (item2 == 5){
            printf("Total: R$ 6.50\n");
        }
	}

	if (item1 == 5){
        if (item2 == 1){
            printf("Total: R$ 8.00\n");
        } else if (item2 == 2){
            printf("Total: R$ 10.00\n");
        } else if (item2 == 3){
            printf("Total: R$ 10.50\n");
        } else if (item2 == 4){
            printf("Total: R$ 6.50\n");
        } else if (item2 == 5){
            printf("Total: R$ 6.00\n");
        }
	}

	return 0;
}

