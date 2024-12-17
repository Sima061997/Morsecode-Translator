#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MORSE_SIZE 4

char *morse_a = ".- ";
char *morse_b = "-... ";
char *morse_c = "-·-· ";
char *morse_d = "-·· ";
char *morse_e = "· ";
char *morse_f = "··-· ";
char *morse_g = "--· ";
char *morse_h = "···· ";
char *morse_i = "·· ";
char *morse_j = "·--- ";
char *morse_k = "-·- ";
char *morse_l = "·-·· ";
char *morse_m = "-- ";
char *morse_n = "-· ";
char *morse_o = "--- ";
char *morse_p = "·--· ";
char *morse_q = "--·- ";
char *morse_r = "·-· ";
char *morse_s = "··· ";
char *morse_t = "- ";
char *morse_u = "··- ";
char *morse_v = "···- ";
char *morse_w = "·-- ";
char *morse_x = "-··- ";
char *morse_y = "-·-- ";
char *morse_z = "--·· ";
char *morse_space = "/ ";


char* morseCode(char *words) {
    for(int i = 0; i < strlen(words); i++) {
        if(words[i] >= 'A' && words[i] <= 'Z'){
            printf("Error: Write the msg only in lower case.\n");
            exit(1);
        }
    }
    assert('A' );
    int size_morse = MORSE_SIZE;
    int len = strlen(words) - 1;
//printf("%d \n", len);
    char *morseWord = malloc(size_morse * len * sizeof(char));
    int j = 0;
    int w = 0;
while(words[w] != '\0') {
//printf("%c\n", words[w]);
char c = words[w];
//printf("%c \n", c);

switch(c) {
    case 'a': 
        for(int i = 0; i < strlen(morse_a); i++) {
            morseWord[j] = morse_a[i];
            j++;
        };
        break;
    case 'b': 
       for(int i = 0; i < strlen(morse_b); i++) {
            morseWord[j] = morse_b[i];
            j++;
        };
        break;
    case 'c':
        for(int i = 0; i < strlen(morse_c); i++) {
            morseWord[j] = morse_c[i];
            j++;
        }
        break;
    case 'd':
        for(int i = 0; i < strlen(morse_d); i++) {
            morseWord[j] = morse_d[i];
            j++;
        }
        break;
    case 'e':
        for(int i = 0; i < strlen(morse_e); i++) {
            morseWord[j] = morse_e[i];
            j++;
        }
        break;
    case 'f':
        for(int i = 0; i < strlen(morse_f); i++) {
            morseWord[j] = morse_f[i];
            j++;
        }
        break;
    case 'g':
        for(int i = 0; i < strlen(morse_g); i++) {
            morseWord[j] = morse_g[i];
            j++;
        }
        break;
    case 'h':
        for(int i = 0; i < strlen(morse_h); i++) {
            morseWord[j] = morse_h[i];
            j++;
        }
        break;
    case 'i':
        for(int i = 0; i < strlen(morse_i); i++) {
            morseWord[j] = morse_i[i];
            j++;
        }
        break;
    case 'j':
        for(int i = 0; i < strlen(morse_j); i++) {
            morseWord[j] = morse_j[i];
            j++;
        }
        break;
    case 'k':
        for(int i = 0; i < strlen(morse_k); i++) {
            morseWord[j] = morse_k[i];
            j++;
        }
        break;
    case 'l':
        for(int i = 0; i < strlen(morse_l); i++) {
            morseWord[j] = morse_l[i];
            j++;
        }
        break;
    case 'm':
        for(int i = 0; i < strlen(morse_m); i++) {
            morseWord[j] = morse_m[i];
            j++;
        }
        break;
    case 'n':
        for(int i = 0; i < strlen(morse_n); i++) {
            morseWord[j] = morse_n[i];
            j++;
        }
        break;
    case 'o':
        for(int i = 0; i < strlen(morse_o); i++) {
            morseWord[j] = morse_o[i];
            j++;
        }
        break;
    case 'p':
        for(int i = 0; i < strlen(morse_p); i++) {
            morseWord[j] = morse_p[i];
            j++;
        }
        break;
    case 'q':
        for(int i = 0; i < strlen(morse_q); i++) {
            morseWord[j] = morse_q[i];
            j++;
        }
        break;
    case 'r':
        for(int i = 0; i < strlen(morse_r); i++) {
            morseWord[j] = morse_r[i];
            j++;
        }
        break;
    case 's':
        for(int i = 0; i < strlen(morse_s); i++) {
            morseWord[j] = morse_s[i];
            j++;
        }
        break;
    case 't':
        for(int i = 0; i < strlen(morse_t); i++) {
            morseWord[j] = morse_t[i];
            j++;
        }
        break;
    case 'u':
        for(int i = 0; i < strlen(morse_u); i++) {
            morseWord[j] = morse_u[i];
            j++;
        }
        break;
    case 'v':
        for(int i = 0; i < strlen(morse_v); i++) {
            morseWord[j] = morse_v[i];
            j++;
        }
        break;
    case 'w':
        for(int i = 0; i < strlen(morse_w); i++) {
            morseWord[j] = morse_w[i];
            j++;
        }
        break;
    case 'x':
        for(int i = 0; i < strlen(morse_x); i++) {
            morseWord[j] = morse_x[i];
            j++;
        }
        break;
    case 'y':
        for(int i = 0; i < strlen(morse_y); i++) {
            morseWord[j] = morse_y[i];
            j++;
        }
        break;
    case 'z':
        for(int i = 0; i < strlen(morse_z); i++) {
            morseWord[j] = morse_z[i];
            j++;
        }
        break;
    case ' ':
        for(int i = 0; i < strlen(morse_space); i++) {
            morseWord[j] = morse_space[i];
            j++;
        }
        break;
    }
    w++;
}
return morseWord;
}        

int main() {
    printf("Welcome to Morsecode Translator. Write your Message!\n");
    size_t size = 100;
    char *words = malloc(size * sizeof(char));

    if(words == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }  

    if(fgets(words, size, stdin) == NULL) {
        printf("Error reading input!\n");
        free(words);
        return 1;
    }  
    printf("%s \n", morseCode(words));
    free(words);
    return 0;
}