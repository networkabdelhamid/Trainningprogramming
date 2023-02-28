#include <stdio.h>
void Matrice_sum_menu();
void Show_Matric(int n,int m);

int main() {
    int resp=0;
    printf("+==================================================================\t");
    printf("+------------- Matrice calculations & operations-----------------+\n");
    printf("+==================================================================\t");
    printf("+===================================author: teacher Z.abdelhamid====\t");
    printf("+--1- Matrice sum \n");
    printf("+--2- Matrice polynomiyal \n");
    printf("+--3- Show matrice dimenstion \n");
    printf("+--4- quite  \n");
    scanf(">>\t:%d",&resp);
    while(resp==0){
        Show_Matric(2,2);
        resp=1;

    }
    return 0;
}
void Matrice_sum_menu(){
    printf("+------------Matrice SUM -----------+\n");
    printf("+--> one dimensionnel array : (enter 1\n ");
    printf("+-->tow dimensionnel array  : (enter 1\n");
}
void Show_Matric(int n,int m){
    int i;
    int j;
    int mat[n][m];
    for(i=0;i<n;i++){
        for(j=0=;j<m;j++){
            scanf("%l\n",mat[i][j]);

        }

    }
     for(i=0;i<n;i++){
        for(j=0=;j<m;j++){
            printf("%l\n",mat[i][j]);

        }
        printf("\t");

    }

}