#include <stdio.h>

#include "interpret.h"
#include "stack.h"


static void repl()
{
  //stack_init();
  char line[1024];
  for (;;)
  {
    printf("> ");

    if (!fgets(line, sizeof(line), stdin))
    {
      printf("\n");
      break;
    }

    interpret(line);
  }
}




int main () {
  interpreter_init();

  /*
    Stack* s = new_stack(100);
    stack_push(s,15);
    stack_push(s,25);
    stack_print(s);
    int x = stack_pop(s);
     stack_print(s);
    //printf ("%d\n",x);
    //x = stack_pop(s);
    //printf ("%d\n",x);
  
 */
    repl();
    /*interpreta();*/
    return 0;
}
