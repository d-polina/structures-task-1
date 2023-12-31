// Дан текст. Группы символов, разделенные пробелами (одним или несколькими) и не содержащие пробелов внутри себя, будем называть словами. Найти количество слов, начинающихся с буквы "t"

// 2 вариант. Строка хранится как строка символов, то есть число символов заранее не указываем, а в конце есть \0 и соответсвующим образом нужно обработать строку

// вводим текст с помощью getline
// выводим текст
// подсчитываем кол-во слов на t
// выводим результат
// очищаем память

#include <stdio.h>
#include <stdlib.h> // подключаем библиотеку для работы с памятью
#include <string.h>

int main() {
    char *text = NULL; // указатель на символьную строку
    int count = 0;
    printf("Введите текст: \n");
    size_t bufferSize = 0; // начальный размер буфера
    getline(&text, &bufferSize, stdin); // 3 параметра на вход: адрес указателя на буфер, указатель на переменную, в которую записана длина считанной строки, указатель на файловый дескриптор
    printf("Введенный текст: %s", text);
    int len = strlen(text); // возвращаем колво символов до \0
    for (int i = 0; i < len; i++) { 
        if (text[i] == 't' && (i == 0 || text[i-1] == ' ')) { 
            count++; 
        }
    }
    printf("Количество слов, начинающихся на букву \"t\": %d \n", count);
    free(text); // освобождаем выделенную память для строки
    return 0;
}