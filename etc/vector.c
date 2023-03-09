#include <stdbool.h> 
#include <malloc/_malloc.h>
#include <stdio.h>

typedef struct Vector Vector;
Vector* new_vector(int capacity);
void free_vector(Vector* vec);
bool resize_vector(Vector* vec);
void push_back(Vector* vec, int el);
void print_vector(Vector* vec);


struct Vector{
  int size;
  int capacity;
  int* vals;
};

Vector* new_vector(int capacity){
  Vector* s = (Vector* ) malloc(sizeof(Vector));
  s->size = 0;
  s->capacity = capacity;
  s->vals = (int*) malloc(sizeof(int)*capacity);

  return s;
}

void free_vector(Vector* vec){
  free(vec->vals);
  free(vec);
}

bool resize_vector(Vector* vec){
  int new_capacity = vec->capacity * 2;
  vec->vals = realloc(vec->vals, new_capacity*sizeof(int));
  vec->capacity = new_capacity;

  return true;
}

void push_back(Vector* vec, int el){
  bool is_ok = true; 
  if(vec->size == vec->capacity)
    is_ok = resize_vector(vec);
  if(is_ok){
    vec->vals[vec->size] = el;
    vec->size ++ ;
  }
}

void print_vector(Vector* vec){
  printf("[");
  for(int i = 0 ; i< vec->size; i++){
    printf("%d, ", vec->vals[i]);
  }
  printf("]\n");

}

int main(){

  for( int j =0 ; j < 10000 ; j++){
    Vector* v = new_vector(5);
    for(int i = 0 ; i<1000000; i++){
      push_back(v, i);
    }
    // printf("size: %d\n", v->size);
    // printf("capacity: %d\n", v->capacity);
    free_vector(v); // try commenting this line if you want to see the memory leak
  }

  return 0;
}
