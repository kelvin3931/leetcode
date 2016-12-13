char* convert(char* s, int nRows) {
    if ((NULL == s) | (nRows < 1))
    {
        return NULL;
    }

    const size_t len = strlen(s);
    char* output = (char*) malloc(sizeof(char) * ( len + 1));
    char* head = output;
    output[len] = '\0';
    if ( 1 == nRows )
    {
        return strcpy(output, s);
    }
    for (int row = 0; row < nRows; ++row)
    {
        for (unsigned int index = row; index < len; index += 2*nRows-2)
        {
            *output++ = s[index];
            if ( (row>0)&(row<nRows-1) & ((index+2*nRows - 2 - 2*row) < len))
            {
                *output++ = s[index+2*nRows - 2 - 2*row];
            }
        }
    }
    return head;
}
