#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nonRepeatingChar(char s[]) {
    
    int length=strlen(s);
    
    for(int i=0;i<length;i++)
    {
        int j;
        for(j=0;j<length;j++)
        {
            if(i!=j&&s[i]==s[j])
            {
                break;
            }
        }
        
        if(j==length)
        {
            return s[i];
        }
    }
    
    return '$' ;
}


int main() {
    char s[20];
    
    //scanf("%s",s);
    fgets(s, sizeof(s), stdin);
    
        char result = nonRepeatingChar(s);
        if (result == '$') {
            printf("%d\n", -1);
        } else {
            printf("%c\n", result);
        }
    

    return 0;
}