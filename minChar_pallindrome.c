#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void computeLPSArray(char* pattern, int* lps, int n) {
    int length = 0; 
    int i = 1;
    lps[0] = 0; 

    
    while (i < n) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}


int minChar(char str[]) {
    int n = strlen(str);
    char* revStr = (char*)malloc((n + 1) * sizeof(char));
    for (int i = 0; i < n; i++) {
        revStr[i] = str[n - i - 1];
    }
    revStr[n] = '\0';

    
    char* concat = (char*)malloc((2 * n + 2) * sizeof(char));
    sprintf(concat, "%s#%s", str, revStr);

    int l = strlen(concat);
    int* lps = (int*)malloc(l * sizeof(int));

    
    computeLPSArray(concat, lps, l);

    
    int result = n - lps[l - 1];

    
    free(revStr);
    free(concat);
    free(lps);

    return result;
}



int main() {
        int n;
        printf("Enter the length of the string :");
        scanf("%d",&n);
        char st[n];
        printf("Enter The string :");
        scanf("%s", st);
        //gets(st);

        
        int result = minChar(st);
        printf("%d\n", result);

        
        
    

    return 0;
}