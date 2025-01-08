#include <stdio.h>
void copyMemory(char* des, const char* source, int numBytes){
    for(int i = 0; i < numBytes; i++){
        des[i] = source[i];
    }
}

int main(){
    char buffer[256];
    const char* msg = "Hello, World!";
    int numBytes = sizeof(msg);
    copyMemory(buffer, msg, numBytes);
    printf("copied msg: %s/n", buffer);
    return 0;
}