#include <stdio.h>
#define boardsize 10

int nextMove(int x, int y, int count, int grid[boardsize][boardsize], int moveX[], int moveY[], int c);
int CheckCell(int x, int y, int grid[boardsize][boardsize]);
int optimize(int x, int y);
int Warns(int x, int y, int grid[boardsize][boardsize], int moveX[], int moveY[]);
void printGrid(int grid[boardsize][boardsize]);

void main() {
	int moveX[] = { 2, 1, 2, 1, -1, -2, -2, -1 };
	int moveY[] = { 1, 2, -1, -2, -2, -1, 1, 2 };
	int grid[boardsize][boardsize];
	int c = 0;
	
	int count = 1;
	int startX = 5;
	int startY = 5;
	
	int weight = 0;
	
	for (int i = 0; i < boardsize; i++) {
		for (int j = 0; j < boardsize; j++) {
			grid[i][j] = optimize(i, j);
		}
	}
	printGrid(grid);


	for (int i = 0; i < boardsize; i++) {
		for (int j = 0; j < boardsize; j++) {
			grid[i][j] = -1;
		}
	}
	printGrid(grid);

	grid[startX][startY] = 0;

	int x = startX;
	int y = startY;
	int newX, newY, X, Y;

	for (int j = 0; j < boardsize * boardsize - 1; j++) {
		for (int k = 0; k < 8; k++) {
			newX = x + moveX[k];
			newY = y + moveY[k];

			if (CheckCell(newX, newY, grid) == 1 && Warns(newX, newY, grid, moveX, moveY) > weight) {
				weight = Warns(newX, newY, grid, moveX, moveY);
				X = newX;
				Y = newY;
			}
		}
		weight = 0;
		grid[X][Y] = count;
		count = count + 1;
		x = X;
		y = Y;
	}

	printGrid(grid);
	//nextMove(x, y, count, grid, moveX, moveY, c);
	//printGrid(grid);
	//grid[2][1] = 1;

	//printf("%d", 1 + moveX[1]);
	
}

int CheckCell(int x, int y, int grid[boardsize][boardsize]) {
	if (x >= 0 && x < boardsize && y >= 0 && y < boardsize && grid[x][y] == -1){
			return 1;
	}
	else
		return 0;
}

int nextMove(int x, int y, int count, int grid[boardsize][boardsize], int moveX[], int moveY[], int c){
	int nextX, nextY;


	if (count % 1 == 0)
		printf("%d \n", count);

	printGrid(grid);

	if (count == 64)
		return 1;

	for (int k = 0; k < 8; k++) {
		nextX = x + moveX[k];
		nextY = y + moveY[k];
		if (CheckCell(nextX, nextY, grid) == 1) {
			grid[nextX][nextY] = count;
			if (nextMove(nextX, nextY, (count + 1), grid, moveX, moveY, c + 1) == 1)
				return 1;
			else
				grid[nextX][nextY] = -1;
		}
	}
	return 0;
}
int optimize(int x, int y) {
	for (int l = 0; l <= 7; l++) {
		if (((x == l || x == 7 - l) && (l <= y && y <= 7 - l)) || ((y == l || y == 7 - l) && (l <= x && x <= 7 - l)))
			return l;
	}
}

int Warns(int x, int y, int grid[boardsize][boardsize], int moveX[], int moveY[]) {
	int c = 0;
	for (int l = 0; l < boardsize; l++) {
		if (CheckCell(x + moveX[l], y + moveY[l], grid) == 0)
			c = c + 1;
	}
	return c;
}

void printGrid(int grid[boardsize][boardsize]){
	for (int i = 0; i < boardsize; i++) {
		for (int j = 0; j < boardsize; j++) {
			printf("%3d ", grid[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}