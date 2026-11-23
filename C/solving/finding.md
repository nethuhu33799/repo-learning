Exercise1-6
- at condition symbol is false (getchar() == EOF), it returns 0, because ctrl+D makes getchar() return EOF
    " "
- at condition symbol is true (not EOF), it returns 1, because Enter or other character is not equal to EOF
    A or Enter

Exercise1-7
- EOF value is -1 because EOF is store value -1 (EOF is a macro defined as (-1) in stdio.h) 

Exercise1-15
- When a function does not return a value, use void .void = function returns no value; other types = returns a value