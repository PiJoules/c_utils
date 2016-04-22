// #include "c_utils/c_utils.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct _Object Object;

struct _Object {
    // void (*destoryObject)(Object *obj);
};

Object *createObject(){
    Object *obj = (Object*)malloc(sizeof(Object));
    return obj;
}

void destoryObject(Object *obj){
    free(obj);
}


int main(int argc, char *argv[]){
    Object *obj = createObject();
    destoryObject(obj);

	return 0;
}