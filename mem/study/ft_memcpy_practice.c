#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main() {
    FILE* file = fopen("data.bin", "rb");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    size_t bytesRead = fread(buffer, 1, sizeof(buffer), file);

    // bufferから読み込んだバイナリデータを別の場所にコピーする場合
    char* dataCopy = (char*)malloc(bytesRead);
    if (dataCopy == NULL) {
        perror("Memory allocation error");
        return 1;
    }

    memcpy(dataCopy, buffer, bytesRead);

    // dataCopyを使用してバイナリデータを処理する
    // ...

    free(dataCopy);
    fclose(file);

    return 0;
}
