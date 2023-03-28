//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

/*
void compare(double * a,double * b,double * c){
    if(* a > * b){
        double temp = *a;
        *a = *b;
        *b = temp;
    }
    if(* a > * c){
        double temp = *a;
        *a = *c;
        *c = temp;
    }
    if(* b > * c){
        double temp = *b;
        *b = *c;
        *c = temp;
    }
    printf("%lf最大,%lf次之,t%lf最小",*c,*b,*a);
}
int main(){
    printf("请输入三个数");
    double x = 0;
    double y = 0;
    double z = 0;
    scanf("%lf%lf%lf",&x,&y,&z);
    compare(&x,&y,&z);
}*/

/*
int main(){
    int i = 0;
    int j = 0;
    for(i = 1;i < 10;i++){
        for(j = 1;j <= i;j++){
            printf("%d * %d = %d ",i,j,i*j);
        }
        printf("\n");
    }
}*/

/*
int main(){
    int i = 0;
    int j = 0;
    for(i = 0;i < 8;i++){
        for(j = 0;j < 8;j++){
            if((j + i) % 2 == 0){
                printf("%c",219);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*
int Total(int n){
    int sum = 0;
    if(n == 2){
        return sum +=1;
    }else if(n == 1){
        return sum += 1;
    }else{
        return Total(n-1) + Total(n - 2);
    }
}

int main(){
    printf("计算n月的兔子总数，请输入想知道的月数");
    int n = 0;
    scanf("%d",&n);
    int a = Total(n);
    printf("%d",a);
}*/

/*
int main(){
    int i = 0;
    int j = 0;
    int count = 0;
    for(i = 101;i < 201;i++){
        for(j = 2;j < sqrt(i) + 1;j++){
            if(i % j == 0){
                break;
            }if(j > sqrt(i)){
                count++;
                printf("%d是素数 ",i);
                if(count > 4){
                    printf("\n");
                    count = 0;
                }
            }
        }
    }
}*/

int main(){
    int i = 0;
    for(i = 100;i < 1000;i++)
    {
            int a = i % 10;//个位数
            int b = (i % 100) / 10;//十位数
            int c = i / 100;//百位数
            if(pow(a,3) + pow(b,3) + pow(c,3) == i)
            {
                printf("%d是水仙花数\n",i);
            }
    }
}