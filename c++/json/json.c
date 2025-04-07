#include "json.h"
#include <assert.h>  /* assert() */
#include <stdlib.h>  /* NULL */
#include <stdio.h> 
/* do {  } while(0) 是复杂宏的编写技巧 */
#define EXPECT(c,ch) do{assert(*c->json == (ch));c->json++;}while(0)

typedef struct
{
    const char *json;
} context;

static void parse_whitespace(context *c)
{
    const char *p = c->json;
    while (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r')
        p++;
    c->json = p;
}

int main(){
    context c;
    c.json=" t asd";
    parse_whitespace(&c);
    printf("%s\n",c.json);
    return 0;
}