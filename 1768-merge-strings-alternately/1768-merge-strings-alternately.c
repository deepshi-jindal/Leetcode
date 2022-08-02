

char * mergeAlternately(char * word1, char * word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    char* merged = malloc(sizeof(char) * (len1 + len2 + 1));
    if (len1 >= len2) {
        while(*word1 != '\0') {
            *merged++ = *word1++;
            if (*word2 != '\0')
                *merged++ = *word2++;
        }
    } else {
        while (*word2 != '\0') {
            if (*word1 != '\0')
                *merged++ = *word1++;
            *merged++ = *word2++;
        }
    }
    *merged = '\0'; 
    
    return merged - len1 - len2;
}