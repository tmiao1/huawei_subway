#include "stdafx.h"
#include <iostream>
#include "subwayGlobalDef.h"
#include "subwayMacro.h"
#include "subwayCard.h"
#include "subwayCmdParse.h"
#include "subwayline.h"
#include "subwayPrice.h"
#include "subwayCommon.h"
#include "subwayOutput.h"
#include "subwayError.h"
using namespace std;

/*
@ ��ֵ����
@ ��Σ�unCmd, ��������
@ ����: returnStr
@ ����ֵ: ��
*/
void ProcFillChargeCmd(UN_CMD &unCmd, char returnStr[MAX_SEND_BUFFER_LENGTH])
{
    //��ȡ����Ϣ GetCardInfo

    //���г�ֵ RechargeCard

    //���ݳ�ֵ��Ŀ���Ϣ  GetCardInfo

    //����ַ���
    //GetOutputResultStr(EN_CMD_TYPE_FILL_CHARGE, returnCode, pCmdCharge->cardNo, enCard, balance, returnStr);

    return;
}