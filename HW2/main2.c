#include <stdio.h>

int main(){
    char filename[]="main2.c";
    
    FILE*source=fopen(filename, "r");
    FILE*output=fopen("main2.txt", "w");
    
    if(!source||!output)return 1;
    
    char line[256];
    int line_num=1;
    
    while(fgets(line, sizeof(line), source)){
        fprintf(output, "%02d %s", line_num++, line);
    }
    
    fclose(source);
    fclose(output);
    return 0;
}
