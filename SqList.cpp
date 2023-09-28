// Created on iPad.

#include <stdio.h>
#include <stdlib.h>
#define MaxSize 15

typedef struct{     //动态分配顺序表
    int *data;
    int length;
}DynamicSqList;

typedef struct{     //静态分配顺序表
    int data[MaxSize];
    int length;
}StaticSqList;

DynamicSqList* CreatDSqList(int n, int ArrayNum[]){     //创建动态顺序表
    DynamicSqList *PL = (DynamicSqList*)malloc(sizeof(DynamicSqList));
    PL->data = (int *)malloc(sizeof(int)*n);
    PL->length = n;
    for(int i = 0; i < n; i++){
        PL->data[i] = ArrayNum[i];
    }
    return PL;
}
void ShowDSqList(DynamicSqList *L){     //输出动态顺序表的内容
    printf("DynamicSqList:\t");
    for(int j = 0; j < 8; j++){
        printf("%d -> ", L->data[j]);
    }
    printf("NULL\n");
}

int main() {
    int Num[] = {1,9,9,9,0,9,3,0};
    DynamicSqList *L = CreatDSqList(8 , Num);
    ShowDSqList(L);
    free(L);
    return 0;
}