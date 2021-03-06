#include <stdio.h>

int main(int argc, char *argv[]){

    if(argc != 2){

        printf("ERROR: You need one argument.\n\n");
        return 1;
    }

    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++){

        char letter = argv[1][i];

        switch(letter){

            case 'a':
            case 'A':
                printf("%d: 'A'\n\n", i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n\n", i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n\n", i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n\n", i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n\n", i);
                break;

            case 'y':
            case 'Y':
                if(i > 2){
                    printf("%d: 'Y'\n\n", i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n\n", i, letter);
        }
    }

    return 0;
}
