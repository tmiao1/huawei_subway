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
@ ������Ʊ
@ ��Σ�unCmd, ��������
@ ����: returnStr
@ ����ֵ: ��
*/
void ProcCreateSingleTicketCmd(UN_CMD &unCmd, char returnStr[MAX_SEND_BUFFER_LENGTH])
{
	unsigned int cardNo = (unsigned int)(-1);
	unsigned int meters = 0;
	unsigned int basePrice = 0;
	EN_RETURN_CODE returnCode = EN_RETURN_SUCC;
	ST_CMD_SINGLE_TICKET* pCmdSingle = &(unCmd.stCmdSingleTicket);
	do
	{
    //��ȡ����վ��������� GetSubwayStationDis
		returnCode = GetSubwayStationDis(pCmdSingle->srcStation, pCmdSingle->dstStation, meters);
		IF_INVALID_BREAK(EN_RETURN_SUCC == returnCode);

     //��ȡ����վ���Ļ���Ʊ��  GetBasePrice
		basePrice = GetBasePrice(meters);

    //�쵥�̿� AssignCard
		returnCode = AssignCard(cardNo, EN_CARD_TYPE_SINGLE, basePrice);
		IF_INVALID_BREAK(EN_RETURN_SUCC == returnCode)
	}while(false);

    //����ַ���
    GetOutputResultStr(EN_CMD_TYPE_SINGLE_TICKET, returnCode, cardNo, EN_CARD_TYPE_SINGLE, basePrice, returnStr);

    return;
}