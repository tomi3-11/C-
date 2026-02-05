#include <stdio.h>
#include <string.h>

void rev(char* s){
    // initialize l and r pointers
    int l = 0;
    int r = strlen(s) - 1;
    char t;

    // Swap characters till l and r meet
    while (l < r) {
            // Swap characters
            t = s[l];
            s[l] = s[r];
            s[r] = t;

            l++;
            r--;
    }
}

int main(){
        char s[100] = "Hello";

        // Reversing
        rev(s);

        printf("%s\n", s);
        return 0;

}
