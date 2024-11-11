#include <stdio.h>
#include <string.h>



int main (){
    char name[25]; //size limit set to 25 bytes
    int age;

    printf("\nWhats your name?");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] ='\0';

    printf("\nHow old are you?");
    scanf("%d", &age);


    printf("\nHi %s, nice to finally meet you.", name);
    printf("\nSo you are %d years old", age);

    return 0;
}