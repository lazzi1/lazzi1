#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int areRotations(char* s1, char* s2) {
    
    int length_1=strlen(s1);
    char* complete_str=(char*)malloc((2*length_1+1)*sizeof(char));
    sprintf(complete_str,"%s%s",s1,s1);
    
    
    if (strstr(complete_str, s2) != NULL)
    {
       free(complete_str);
       return 1;
    }
    else 
    {
       free(complete_str);
       return 0;
    }

}


int main() {
    int t;
    printf("Enter The length of the string : ");
    scanf("%d", &t);
    
        char *s1 = (char *)malloc(100005 * sizeof(char));
        char *s2 = (char *)malloc(100005 * sizeof(char));

        printf("Enter The First String :");
        scanf("%s", s1);
        printf("Enter The Second String :");
        scanf("%s", s2);
        
        
        int result = areRotations(s1, s2);
        
        if (result) 
        {
            printf("%s\n", "true");
        } 
        else 
        {
            printf("%s\n", "false");
        }     

        
        free(s1);
        free(s2);
    

    return 0;
}