#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, numbers[7], used[70] = {0};
    printf("歡迎光臨長庚樂透彩購買機台\n請問您要買幾組樂透彩: ");
    scanf("%d", &n);
    if (n<1||n>5){
        printf("輸入1~5之間的數字\n");
        return 1;
    }
    
    FILE*file=fopen("lotto.txt", "w");
    if(!file){
        printf("無法開啟lotto.txt\n");
        return 1;
    }
    
    srand(time(NULL));
    time_t t=time(NULL);
    fprintf(file, "lotto649\n%s", ctime(&t));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<7; j++){
            int num;
            do{
                num=rand()%69+1;
            }while(used[num]);
            used[num]=1;
            numbers[j]=num;
        }
        fprintf(file, "[%d]:", i+1);
        for(int j=0; j<7; j++){
            fprintf(file, " %02d", numbers[j]);
        }
        fprintf(file, "\n");
    }
    
    fclose(file);
    printf("已為您購買的樂透組數輸出至 lotto.txt!\n");
    return 0;
}
