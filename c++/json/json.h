#ifndef JSON_H__
#define JSON_H__
/*使用typedef定义方便后期实例创建*/ 
typedef enum{NULL,FALSE,TRUE,NUMBER,STRING,ARRAY,OBJECT} j_type;

typedef struct {
    j_type type;
}j_value; 

enum{
    OK = 0,
    EXPECT_VALUE,
    INVALID_VALUE,
    ROOT_NOT_SINGULAR
};

int parse(j_value v,const char* json);

j_value get_type(const j_value v);

#endif