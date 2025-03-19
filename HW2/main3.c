#include <stdio.h>
#include <string.h>

int main(){
    FILE*file=fopen("main3.c", "r");
    if(file==NULL){
        printf("Error: Cannot open file\n");
        return 1;
    }
    
    char line[256];
    int line_num=0;
    
    while(fgets(line, sizeof(line), file)){
        line_num++;
        if(strstr(line, "int main()")!=NULL){
            printf("%d int main(){", line_num);
        }
    }
    
    fclose(file);
    return 0;
}
