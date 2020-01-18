#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *file_pointer; //is a structure and fp is a pointer to the structure of FILE type
    int counter = 0;    
    char last_character;
    char character;    

    if(argc <= 1){
        printf("Not enough arguments! There is no filname given.\n");
        printf("Usage:\tzad19  filename\n");
        return 0;
    }

    file_pointer = fopen(argv[1], "r");

    if(file_pointer == NULL){
        printf("Something went wrong! Is your filename OK?\n");
        return 0;
    }

    while((character = getc(file_pointer)) != EOF){
        if(character == '\n'){
            counter +=1;
        }
        last_character = character;        
    }

    if(last_character != '\n'){
        counter+=1;
    }

    fclose(file_pointer);
    printf("File %s contains %d lines\n", argv[1], counter);


    return 0;
}