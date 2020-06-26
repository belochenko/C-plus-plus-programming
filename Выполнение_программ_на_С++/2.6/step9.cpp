/*В этой задаче вам нужно реализовать функцию resize. Функция resize принимает на вход три аргумента: указатель на область памяти, выделенную с помощью оператора new[], размер области (size) и новый размер (new_size). Функция должна выделить память размера new_size, скопировать в нее данные из переданной области памяти, освободить старую область памяти и вернуть выделенную область памяти нового размера со скопированными данными.  

Обратите внимание, что память, возвращенная из функции, будет освобождена с помощью оператора delete[]. Несмотря на то, что входной тип данных — это const char *, не стоит рассчитывать, что там хранится C-style строка. При выполнении задания также учтите, что new_size может быть меньше size.*/
char *resize(const char *str, unsigned size, unsigned new_size)
{
    int true_size = size>new_size? new_size : size;
    char * arr = new char[new_size];
    for(int i=0; i<true_size; i++)
        arr[i] = str[i];
    
    delete [] str;
    
    return arr;
}
