#include <stdio.h>

int main(){

    //? what is string :
    // string character ka collection hota hai
    // wo ek ek character se milkar banta hai isliye c me character array se string banate hai
    // e.g., char name[34] = "Harray";

    //? ye dono same hai aapko jo easy lage wo use karo
    // char v[] = {'v', 'i', 's', 'h', 'a', 'l', '\0'};
    char v[] = "vishal";

    int i = 0;
    while (v[i] != '\0')
    {
        printf("%c",v[i]);
        i++;
    }

        return 0;
}