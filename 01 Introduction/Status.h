/***
* 文件名：Status.h
* 创建人：张嘉乐
* 创建时间：2020/8/4
* 功能描述：通用状态码
**/
#ifndef DATASTRUCTURE_STATUS_H
#define DATASTRUCTURE_STATUS_H

/**
 * 状态码识别类型
 */
typedef int Status;

/**
 * 状态码
 */
#define TRUE 1              //真
#define FALSE 0             //假
#define YES 1               //是
#define NO 0                //否
#define OK 1                //通过
#define ERROR 0             //错误
#define SUCCESS 1           //成功
#define FAIL 0              //失败
#define INFEASIBLE -1       //不可行

#ifndef _MATH_H_ 			//系统中已有此状态码定义，要避免冲突
#define	OVERFLOW	-2		//堆栈上溢
#define UNDERFLOW	-3		//堆栈下溢
#endif

#ifndef NULL
#define NULL ((void*)0)
#endif

/**
 * 宏函数
 */
//函数暂停一段时间
#define wait(x)\
{\
    double _Loop_Num_; \
    for(_Loop_Num_ = 0.01;_Loop_Num_<=100000.0*x,_Loop_Num_+=0.01) \
    ;\
}

#endif //DATASTRUCTURE_STATUS_H
