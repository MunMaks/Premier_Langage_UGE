void to_upper_in_string(char *s) {
    if (s == NULL) { return; }

    for (int i = 0; s[i] != '\0'; i++) {
        // On change les lettres miniscules en majuscule s'il est necessaire.
        // We change lower character to upper character if we need it.
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
}
