#ifndef __CMD_DEDUCT_PROC_H__
#define __CMD_DEDUCT_PROC_H__
#include "subwayGlobalDef.h"
#include "subwayCmdParse.h"

/*
@ �����۷�����
@ ��Σ�stCmdDeduct, ��������
@ ����: returnStr
@ ����ֵ: void
*/
void ProcDeductCmd(UN_CMD &unCmd, char returnStr[MAX_SEND_BUFFER_LENGTH]);

#endif