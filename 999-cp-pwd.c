#include <stdio.h>
#include<string.h>

int isAlphabet(int val){
    return ((val>=65 && val <= 90) || (val >= 97 && val <= 122));
}

int isNumber(int val){
    return ((val >= 48 && val <= 57));
}

int main(){
    
    char password[50];
    printf("Enter your password: ");
    scanf("%s", password);
    
    // printf("you entered %s \n", password);

    int length = strlen(password);

    int is8digitOrMore = length>=8;
    
    int capitalCondition = 0;

    int smallCondition = 0;

    int spCharConditon = 0;

    int numCondition = 0;

    int continuous3alphabets = 0;

    int continuous3numbers = 0;
    
    char *val;
    
    val = password;

    int i=0;

    while(*val != '\0'){
        
        if ( *val >= 65 && *val <= 90) capitalCondition = 1; 
        
        else if (*val >= 97 && *val <= 122) smallCondition = 1;

        else if ( (*val >= 33 && *val <= 47) || (*val >= 58 && *val <= 64)) spCharConditon = 1;

        else if (*val >= 48 && *val <=557 ) numCondition = 1;
        
        if (i <= length-2){
            if ( *val == *(val+1) && *val == *(val+2) && isAlphabet(*val) ) continuous3alphabets = 1;
            if ( *val == *(val+1) && *val == *(val+2) && isNumber(*val)) continuous3numbers = 1;
        }
        
        printf(">>> %d", i);

        val++;

        i++;
    }
    
    printf("8-digit check: %d \n" , is8digitOrMore);

    printf("capital condition satisfied: %d \n", capitalCondition);
    
    printf("small condition satisfied: %d \n", smallCondition);

    printf("Special character copndition: %d \n", spCharConditon);
    
    printf("number character copndition: %d \n", spCharConditon);

    printf("continuous 3 alphabets present: %d \n", continuous3alphabets);

    printf("continuous 3 numbers present: %d \n", continuous3numbers);

    // condition for validity

    if ( (!is8digitOrMore)){
        printf("INVALID PASSWORD: should have 8 digits!\n");
        return 0;
    }
    else if (continuous3alphabets){
        printf("INVALID PASSWORD: it is having continuous 3 same alphabets!\n");
        return 0;
    }
    else if (continuous3numbers){
        printf("INVALID PASSWORD: it is having continuous 3 same number!\n");
        return 0;
    }
    else if ( !capitalCondition){
        printf("INVALID PASSWORD: does not have a capital letter!\n");
    }
    else if( !smallCondition){
        printf("INVALID PASSWORD: does not have a small letter!\n");
    }
    else if (!numCondition){
        printf("INVALID PASSWORD: does not have number in it.\n");
    }

    else if (!spCharConditon){
        printf("INVALID PASSWORD: does not have special character in it.\n");
    }
    else {
        printf("COMPLETELY VALID PASSWORD!\n");
    }

    return 0;
}