#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool charinstring(char* str){
    int length = strlen(str);
    int i=strlen(str);
    int j;

    if(str[i-1] != 'b' || str[i-2] != 'b')
    {
        return false;

    }
    for (j=i-3 ;j >= 0; j--)
    {
        if(str[j] != 'a')
        {
            return false;
        }
    }
return true;
}
int main() {
    char string[7];

    printf("enter the string :");
    scanf("%s", string);
    printf("enterd string is %s \n", string);
    

    if(charinstring(string))
    {
        printf("string is valid");

    }
    else
    {
        printf("string is not valid");

    }

    return 0;
}

