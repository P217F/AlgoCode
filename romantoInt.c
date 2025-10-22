struct TABLE {
    char    key;
    int     number;
};

static inline int loop(char c) {
    static const struct TABLE table[] = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    switch (c) {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        return 0;
        break;
    }
}

int romanToInt(char* s) {
    int result=0;
    for (int i=0;s[i]!='\0';++i) {
        int curr = loop(s[i]);
        int next = loop(s[i+1]);
        if (next > curr)
            result -= curr;
        else
            result += curr;
    }
    return result;
}
