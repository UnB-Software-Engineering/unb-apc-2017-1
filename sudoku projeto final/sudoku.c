/*
Autores:
Ana Paula Marinho Medrado - 150005369 - II
Larissa Siqueira Sales - 160130883 - GG
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
    int value; /*valor de 1 a 9 que fica na cedula do sudoku*/
    int submatrix; /*submatriz a qual ela pertence, varia de 0 a 8*/
}cell;

typedef struct matrix{
    cell matrix[9][9]; /*sudoku: matriz 9x9 (uma matriz  do tipo cedula; cedula eh equivalente a int, double...)*/
}matrix;

typedef struct{
	int x;
	int y;
}coordinate; /*coordenada (i,j)*/


/*le os caracteres de entrada na forma de char*/
matrix *read_puzzle(){
    matrix *sudoku = malloc(sizeof(matrix));
    int i=0, j=0, aux=0;
    char puzzle;
    int current_submatrix=0;

    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            scanf("%c", &puzzle);
            getchar();

            if(puzzle == 'X'){
                sudoku->matrix[i][j].value = 0;
                sudoku->matrix[i][j].submatrix = current_submatrix;
            }
            else{
                sudoku->matrix[i][j].value = puzzle - 48;
                sudoku->matrix[i][j].submatrix = current_submatrix;
            }
            aux++;

            if(aux == 3){
                current_submatrix++;
                aux = 0;
            }
        }
    }
    return sudoku;
}

/*verifica linha*/
int verify_row(matrix *sudoku, int row, int number){
    int j;

    for (j=0; j<9; j++){
        if (sudoku->matrix[row][j].value == number){
            return 0;
        }
    }
    return 1;
}

/*verifica coluna*/
int verify_col(matrix *sudoku, int col, int number){
    int i;

    for (i=0; i<9; i++){
        if (sudoku->matrix[i][col].value == number){
            return 0;
        }
    }
    return 1;
}

/*verifica matriz 3x3*/
int verify_submatrix(matrix *sudoku, int row, int col, int number){
    int i, j;
    int start_row, start_col;

    if (row < 3) {
        start_row = 0;
    } else if (row < 6){
        start_row = 3;
    } else {
        start_row = 6;
    }

    if (col < 3) {
        start_col = 0;
    } else if (col < 6){
        start_col = 3;
    } else {
        start_col = 6;
    }

    for (i = start_row; i < start_row+3; i++){
        for (j = start_col; j < start_col+3; j++){
            if (sudoku->matrix[i][j].value == number){
                return 0;
            }
        }
    }
    return 1;
}

/*verifica se linha, coluna e submatriz são validos*/
int is_valid(matrix *sudoku, int row, int col, int number){
    int is_valid_row = verify_row(sudoku, row, number);
    int is_valid_col = verify_col(sudoku, col, number);
    int is_valid_sub = verify_submatrix(sudoku, row, col, number);

    if (is_valid_row && is_valid_col && is_valid_sub){
        return 1;
    }
    return 0;
}

/*verifica se o sudoku ja esta completo*/
int is_full(matrix *sudoku){
    int i, j;

    for (i=0; i<9; i++){
        for (j=0; j<9; j++){
            if (sudoku->matrix[i][j].value == 0){
                return 0;
            }
        }
    }
    return 1;
}

/*encontra celula vazia e  retorna a coordenada (x.y) dela*/
coordinate find_empty_cell(matrix *sudoku){
	coordinate empty_cell;
	int i, j;

	for (i=0; i<9; i++){
		for (j=0; j<9; j++){
			if (sudoku->matrix[i][j].value == 0){
				empty_cell.x = i;
				empty_cell.y = j;
				return empty_cell;
			}
		}
	}
	return empty_cell;
}

/*imprime a grade e os valores do sudoku*/
void print_puzzle(matrix *sudoku){
    int i=0, j=0;

    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            printf("%d", sudoku->matrix[i][j].value);
            if (j!=9-1){
                printf(" ");
            }

            if ((j + 1) % 3 == 0 && j<9-1){
                printf("| ");
            }
        }
        if ((i + 1) % 3 == 0 && i<9-1){
            printf("\n- - - - - - - - - - -");
        }
        printf("\n");
    }
}

/*calcula solucao pro sudoku (backtracking)*/
int solution(matrix *sudoku){
	int i, j;

	if (is_full(sudoku)){
		print_puzzle(sudoku);
		return 1;
	}

	for (i=1; i<=9; i++){
		coordinate empty_cell = find_empty_cell(sudoku);
		int x = empty_cell.x;
		int y = empty_cell.y;

		if (is_valid(sudoku, x, y, i)){
			sudoku->matrix[x][y].value = i;

            if (solution(sudoku)){
                return 1;
            }

            sudoku->matrix[x][y].value = 0;
		}
	}
	return 0;
}

int main(){
    matrix *sudoku = read_puzzle();
    solution(sudoku);

    return 0;
}
