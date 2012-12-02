#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 10

using namespace std;

int matrix[MAX_SIZE][MAX_SIZE];
int size;

void change_row(int a, int b)
{
    int temp;
    for(int i = 0; i < size; i++)
    {
        temp = matrix[a][i];
        matrix[a][i] = matrix[b][i];
        matrix[b][i] = temp;
    }
}

void change_col(int a, int b)
{
    int temp;
    for(int i = 0; i < size; i++)
    {
        temp = matrix[i][a];
        matrix[i][a] = matrix[i][b];
        matrix[i][b] = temp;
    }
}

void inc()
{
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            matrix[i][j] = (matrix[i][j]+1)%10;
}

void dec()
{
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++){
            matrix[i][j]--;
            if(matrix[i][j] == -1)
                matrix[i][j] = 9;
        }
}

void transpose()
{
    int temp;

    for(int i = 0; i < size; i++)
        for(int j = i+1; j < size; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
}

void print_matrix()
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
            cout << matrix[i][j];
        cout << endl;
    }
}

int main()
{
    int numCase, numOp, a, b;
    char ch;
    char op[100];

    scanf("%d",&numCase);
    for(int i = 1; i <= numCase; i++)
    {
        memset(matrix,0,sizeof matrix);
        scanf("%d",&size);
        for(int j = 0; j < size; j++)
        {
            for(int k = 0; k < size; k++)
            {
                scanf(" %c",&ch);
                if((int)ch >= 48 && (int)ch <= 57)
                    matrix[j][k] = (int)ch - 48;
            }
        }
        //print_matrix();
        scanf("%d",&numOp);
        for(int j = 0; j < numOp; j++)
        {
            scanf("%s",&op);
            if(strcmp(op,"row")==0)
            {
                scanf("%d %d",&a,&b);
                change_row(a-1,b-1);
            }
            else if(strcmp(op,"col")==0)
            {
                scanf("%d %d",&a,&b);
                change_col(a-1,b-1);
            }
            else if(strcmp(op,"inc")==0)
                inc();
            else if(strcmp(op,"dec")==0)
                dec();
            else
                transpose();
        }
        cout << "Case #" << i << endl;
        print_matrix();
        cout << endl;
    }

    return 0;
}
