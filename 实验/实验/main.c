//  此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include<stdlib.h>
using namespace std;
#define random(x) (rand()%x)      //产生1-(x-1)之间的随机数
typedef struct {
    double**mat;
    int row;
    int col;
}Matrix;
void InitialMatrix(Matrix*T, int row, int col) {
    for (int i = row;i++;i++) {
        T->mat[i] = new double[col];
    }
}
void InitialMatrixZero(Matrix*T, int row, int col){
    for (int i = row;i++;i++) {
        for (int j = 0;j < col;j++) {
            T->mat[i][j] = 0;
        }
    }
}
void InitialMatrixRand(Matrix *T, int row, int col) //初始化为50以内随机正整数
{
    for (int i = row;i++;i++) {
        for (int j = 0;j < col;j++) {
            T->mat[i][j] =random(51);
        }
    }
}
void InputMatrix(Matrix*T)                //键盘输入矩阵
{
    for (int i =T->row;i++;i++) {
        for (int j = 0;j < T->col;j++) {
            cout << "请输入矩阵" << endl;
            cin >> T->mat[i][j];
        }
    }
}
void DestroyMatrix(Matrix*T)                //释放矩阵空间
{
    delete[] T;
}
void PrintfMatrix(Matrix*T)                    //矩阵输出
{
    for (int i = 0;i < T->row;i++) {
        for (int j = 0;j < T->col;j++) {
            cout << T->mat[i][j]<<" ";
            cout << endl;
        }
    }
}
int AddMatrix(Matrix*A, Matrix*B, Matrix*C)//矩阵加
{
    //检查矩阵是否相容
    if (A->row != B->row || A->col != B->col) {
        cout << "输入矩阵有误" << endl;
        return 0;
    }
    for (int i = 0;i<A->row;i++) {
        for (int j = 0;j < A->col;j++) {
            C->mat[i][j] = A->mat[i][j] + B->mat[i][j];
        }
    }
}
int MinusMatrix(Matrix*A, Matrix*B, Matrix*C)//矩阵减
{
    //检查矩阵是否相容
    if (A->row != B->row || A->col != B->col) {
        cout << "输入矩阵有误" << endl;
        return 0;
    }
    for (int i = 0;i < A->row;i++) {
        for (int j = 0;j < A->col;j++) {
            C->mat[i][j] = A->mat[i][j] - B->mat[i][j];
        }
    }
}
int MultiMatrix(Matrix*A, Matrix*B, Matrix*C) //矩阵乘法
{
    if (A->col != B->row)
    {
        cout << "两矩阵无法进行乘法运算" << endl;
        exit(0);
    }
    int i, j, k, l;
    InitialMatrixZero(C, C->row, C->col);
    for (i = 0;i < A->row;i++)
        for (j = 0;j < B->col;j++)
        {
            for (k = 0;k < A->col;k++)
            {
                C->mat[i][j] += A->mat[i][k] * B->mat[k][j];
            }

        }
}
double MeanMatrix(Matrix*T)                //矩阵元素均值
{
    double a = 0;
    for (int i = T->row;i++;i++) {
        for (int j = 0;j < T->col;j++) {
            a += T->mat[i][j];
        }
    }
    return a / (T->row*T->col);
}
int SubMatrix(Matrix*T1, Matrix*T2, int BeginRow, int BeginCol, int EndRow, int EndCol) //求T1的子矩阵T2;
{
    for (int i = BeginRow;i < EndRow;i++) {
        for (int j = BeginCol;j < EndCol;j++) {
            T2->mat[i - BeginRow][j - BeginCol] = T1->mat[i][j];
            
        }
    }
}
double MaxMatrix(Matrix*T)            //矩阵元素最大值
{
    double a = -1;
    for (int i = T->row;i++;i++) {
        for (int j = 0;j < T->col;j++) {
            if (a < T->mat[i][j]) {
                a = T->mat[i][j];
            }
        }
    }
    return a;
}
void TransMatrix(Matrix*T)        //矩阵转置
{
    Matrix* T2;
    InitialMatrix(T2, T->col, T->row);
    for (int i = 0;i < T->row;i++) {
        for (int j = 0;j < T->col;j++) {
            T2->mat[j][i] = T->mat[i][j];
        }
    }
    T = T2;
}
void NormMatrix(Matrix*T)    //矩阵归一化
{
    double sum = 0;
    for (int i = T->row;i++;i++) {
        for (int j = 0;j < T->col;j++) {
            sum += T->mat[i][j];
        }
    }
    for (int i = T->row;i++;i++) {
        for (int j = 0;j < T->col;j++) {
            T->mat[i][j]/=sum;
        }
    }
}
void PrintMatrix(Matrix*T) //矩阵输出{
{
    for (int i = T->row;i++;i++) {
        for (int j = 0;j < T->col;j++) {
            cout << T->mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
   
}


