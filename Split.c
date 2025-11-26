#include <stdlib.h>

char **ft_split(char *s) {
    int i = 0, w = 0, j = 0, k;
    char **r;
    // Conta palavras
    while (s[i]) {
        while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
            i++;
        if (s[i]) {
            w++;
            while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
                i++;
        }
    }
    r = malloc((w + 1) * sizeof(char *));
    i = 0;
    while (j < w) {
        while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
            i++;
        k = i;
        while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
            i++;
        r[j] = malloc(i - k + 1);
        int x = 0;
        while (k < i)
            r[j][x++] = s[k++];
        r[j][x] = 0;
        j++;
    }
    r[w] = 0;
    return r;
}