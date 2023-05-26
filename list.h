#ifndef LIST_H
#define LIST_H
typedef struct list List;

List* new_list();
void list_init();
void list_append(List*, char* key, int value);
int list_get (List* s, char* key); 
void list_set (List* s, char* key, int value);
int list_exist (List* s, char* key);
void list_print(List* s);

#endif
