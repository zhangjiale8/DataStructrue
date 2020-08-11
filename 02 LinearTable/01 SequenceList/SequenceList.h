/***
* 文件名：SequenceList.h
* 创建人：张嘉乐
* 创建时间：2020/8/4
* 功能描述：
**/
#ifndef DATASTRUCTURE_SEQUENCELIST_H
#define DATASTRUCTURE_SEQUENCELIST_H

#include <stdio.h>
#include <stdlib.h> //提供malloc、realloc、free、exit原型
#include "../../01 Introduction/Status.h"

/**
 *宏定义
 */

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

/* 顺序表类型定义 */
#ifndef LELEMTYPE_SQ
#define LELEMTYPE_SQ
typedef int elemType_Sq;
#endif

typedef struct {
    elemType_Sq *elem;//存储空间基地址（指向第一个结点指针）
    int length;//当前顺序表长度
    int listsize;//当前分配的存储容量
}SqList; //顺序表0号单元正常使用


/* 顺序表定义 */
Status initSqList(SqList *L);


#endif //DATASTRUCTURE_SEQUENCELIST_H
