int convert_roman(char ch){
    int res = 0;
    switch(ch) {
        case 'I': res = 1; break;
        case 'V': res = 5; break;
        case 'X': res = 10; break;
        case 'L': res = 50; break;
        case 'C': res = 100; break;
        case 'D': res = 500; break;
        case 'M': res = 1000; break;
        default: printf("Error! this character isn't roman\n");
    }
    return res;
}

int roman2dec (char* s){
    int count = 0;
    int curr, next;  // curr it's current, next is next

    for (int i = 0; s[i] != '\0'; ++i){
        curr = convert_roman(s[i]);

        if (s[i + 1] != '\0') {  // It means length - 2, otherwise it's to be sure there only one element left on the right
            next = convert_roman( s[i + 1] );
            if (curr < next) { curr = -(curr); }
        }
        count += curr;
    }
    return count;
}
