/***
* �ļ�����SequenceList-main.cpp
* �����ˣ��ż���
* ����ʱ�䣺2020/8/4
* ����������
**/
#include <stdio.h>
#include <iostream>
#include "SequenceList.cpp"
/**
 * ��ʼ����initSqList����
 * @param ptr
 */

int main() {
    std::cout << "-------SequenceList-main.cpp------" << std::endl;
    SqList list;
    int index;
    elemType_Sq elem;
    printf("1.��ʼ˳�����initSqList����.....\n");
    initSqList(&list);
    printf("2.�ж�˳����Ƿ�Ϊ�պ���isEmpty����.....\n");
    int flg = isEmpty(list);
    printf("flg..\n"+ flg);
    printf("3.˳������Ԫ�غ���addElement����.....\n");
    for(index = 0; index <6; index++){
        elem = 2*index;
        printf("��˳����%d��λ�ò���\"%d\"..\n",index,elem);
        addElement(&list,index,elem);
    }
    return 0;
}




