/***
* 文件名：SequenceList-main.cpp
* 创建人：张嘉乐
* 创建时间：2020/8/4
* 功能描述：
**/
#include <stdio.h>
#include <iostream>
#include "SequenceList.cpp"
/**
 * 初始函数initSqList测试
 * @param ptr
 */

int main() {
    std::cout << "-------SequenceList-main.cpp------" << std::endl;
    SqList list;
    int index;
    elemType_Sq elem;
    printf("1.初始顺序表函数initSqList测试.....\n");
    initSqList(&list);
    printf("2.判断顺序表是否为空函数isEmpty测试.....\n");
    int flg = isEmpty(list);
    printf("flg..\n"+ flg);
    printf("3.顺序表添加元素函数addElement测试.....\n");
    for(index = 0; index <6; index++){
        elem = 2*index;
        printf("在顺序表第%d个位置插入\"%d\"..\n",index,elem);
        addElement(&list,index,elem);
    }
    return 0;
}




