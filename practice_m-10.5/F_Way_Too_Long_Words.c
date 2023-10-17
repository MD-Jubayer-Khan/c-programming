#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[101];
        scanf("%s", s);

        int len = strlen(s);

        if (len > 10) {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        } else {
            printf("%s\n", s);
        }
    }

    return 0;
}

//  using for loop

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     for (int i = 0; i < t; i++) {
//         char s[101];
//         scanf("%s", s);

//         int len = strlen(s);

//         if (len > 10) {
//             // String is too long, create abbreviation
//             printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
//         } else {
//             // String is not too long, print it as is
//             printf("%s\n", s);
//         }
//     }

//     return 0;
// }



