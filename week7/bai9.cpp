void reverse(char *s) {
    char* begin = s;
    char* end = begin + strlen(s) -1;
    while(begin<end){
        char c = *begin;
        *begin = *end;
        *end = c;
        begin++;
        end--;
    }

}