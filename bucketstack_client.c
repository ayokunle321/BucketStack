#include "bucketstack.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
  //We will have two stacks
  Stack *s1 = NULL;
  Stack *s2 = NULL;
  initStack(5, &s1);
  initStack(3, &s2);
  push("uno", s1);
  push("dos", s1);
  //s1 now has "dos" and "uno" in that order
  assert(strcmp("dos", top(s1)) == 0);
  //s2 is empty at this moment
  assert(isEmpty(s2));
  push("tres", s2);
  //We just added "tres" in s2
  assert(strcmp("tres", top(s2)) == 0);
  assert(size(s1) == 2);
  assert(size(s2) == 1);
  //Time to swap "dos" and "uno"
  swap(s1);
  //s1 now has "uno" and "dos" in that order
  assert(strcmp("uno", top(s1)) == 0);
  //Let's add 3 elements to each stack
  //after this for loop, s1 will have "hola", "hola", "hola", "uno",
  //"dos" in that order
  //after this for loop, s2 will have "mundo!", "mundo!", "mundo!", "tres"
  //in that order
  for(int i = 0; i < 3; i++) {
    push("hola", s1);
    push("mundo!", s2); 
  }
  print(s1);
  print(s2);

  //let's add 97 elements to each stack
  for(int i = 0; i < 97; i++) {
    push("hola", s1);
    push("mundo!", s2);
  }

  assert(size(s1) == 102);
  assert(size(s2) == 101);
  //s1 should have "hola" at the top
  assert(strcmp(top(s1), "hola") == 0);
  //s2 should have "mundo!" at the top
  assert(strcmp(top(s2), "mundo!") == 0);
  
  //at this point, s1 has 100 "hola" at the top so let's pop them
  //at this point, s2 has 100 "mundo!" at the top so let's pop them
  for(int i = 0; i < 100; i++) {
    assert(strcmp(top(s1), "hola") == 0);
    pop(s1);
    assert(strcmp(top(s2), "mundo!") == 0);
    pop(s2);
  }
 
  //s1 still has the uno and dos at the top and s2 still
  //has tres at the top. Let's use clear to clear all remaining
  //elements on each stack
  clear(s1);
  clear(s2);

  //both stacks must be empty after clear
  assert(isEmpty(s1));
  assert(isEmpty(s2));
  
  destroyStack(&s1);
  assert(s1 == NULL);
  
  destroyStack(&s2);
  assert(s2 == NULL);
  return 0;
}


