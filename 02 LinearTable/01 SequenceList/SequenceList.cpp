/***
* 文件名：SequenceList.cpp
* 创建人：张嘉乐
* 创建时间：2020/8/4
* 功能描述：顺序表相关操作
**/
#include "SequenceList.h"

/**
 * 初始化顺序表
 * @param list
 * @return
 */
Status initSqList(SqList *list) {
    //分配控件
    (*list).elem = (elemType_Sq*)malloc(LIST_INIT_SIZE*sizeof(elemType_Sq));
    //元素不存在则溢出
    if(!*list->elem){
        exit(OVERFLOW);
    }
    (*list).length = 0;
    (*list).listsize = LIST_INIT_SIZE;

    return OK;
}

/**
 * 判断一个顺序表是否为空
 * @param list
 * @return
 */
Status isEmpty(SqList list){
    return list.length == 0?TRUE:FALSE;
}

Status addElement(SqList *list,int index,elemType_Sq value){
    //用于接收新开辟的元素
    elemType_Sq *newbase;
    elemType_Sq *p,*q;
    //判断插入的位置是否非法
    if(index <1 || index >(*list).length +1){
        return ERROR;
    }
    //如果存储空间已满，需开辟新的空间
    if((*list).length >= (*list).listsize){
        newbase = (elemType_Sq*)realloc((*list).elem,((*list).listsize+LISTINCREMENT)*sizeof(elemType_Sq));
        if(!newbase){
            exit(OVERFLOW);
        }
        (*list).elem = newbase;
        
    }
    return OK;
}

