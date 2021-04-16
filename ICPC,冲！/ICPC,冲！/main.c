#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[10][30] = {
    "",
    " *    **   ***     ** ",//存入时记得前面留个空让字符串下标从1开始，方便后面的坐标计算
    " *   *  *  *  *   *  *",
    " *  *      *  *  *    ",
    " *  *      *  *  *    ",
    " *  *      ***   *    ",
    " *   *  *  *      *  *",
    " *    **   *       ** ",
};
char s2[1000][1000];//存新字符串
int main(int argc, char const *argv[]) {
    int t;
    scanf("%d", &t);
    while (t--) {
        memset(s2, '\0', sizeof(s2));
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 21; j++) {
                if (s[i][j] == '*') {
                    int u = (i - 1) * n + 1, v = (j - 1) * n + 1;//原图坐标为（i，j）的点在新图中对应的点为（u,v）
                    int t = n;//从（u,v）开始对新图的n*n进行染色
                    while (t--) {
                        int t2 = n;
                        v = (j - 1) * n + 1;
                        while (t2--) {
                            s2[u][v++] = '*';
                        }
                        u++;
                    }
                }
            }
        }
        int limit[1000];//由于图形每行末尾不能输出空格，记录一下每行最后一个字符的位置，遍历输出时用于判断是否输出空格。
        for (int i = 1; i <= 7 * n; i++) {
            for (int j = 1; j <= 21 * n; j++)
                if (s2[i][j] == '*') limit[i] = j;
        }
        for (int i = 1; i <= 7 * n; i++) {
            for (int j = 1; j <= 21 * n; j++)
                if (s2[i][j] == '*')
                    printf("*");
                else if (limit[i] > j)//如果没到每行末尾则输出空格
                    printf(" ");
            printf("\n");
        }
    }
    return 0;
}
