/* Frame data */

/**
*	use for analytical the data from frame 
*/

#ifndef	_FRAMEDATA_H_
#define _FRAMEDATA_H_

#include "comm.h"

#define PHYSICAL_LINK_WIFI 	(0x30)
#define PROTOCOL_VERSION		(0x01)

struct DiagCell{
	uint32 	diagInfor;
	uint16	diagId;
	uint8		diagLen;
	uint8*	diagData;
};

struct ServCell{
	uint16 servId;		//ҵ��ID
	uint16 servLen;	//ҵ�񳤶�
	uint8* servData;	//ҵ������ 
};

struct ReliableFrame{
	uint8 physicallink;			//������·
	uint8 protocolversion;	//Э���ַ
	uint8 deviceId[6];		//�豸ID
	uint32 checksum;					//֡У��
	uint16 frameLen;					//֡����
	uint8 frameId;					//֡ID
	uint16 frameContrl;			//֡������
	uint8 timeStamp[9];		//ʱ���
	uint8 servNum;					//ҵ����Ŀ
	uint8* servData;				//ҵ������
	uint32 crc32;						//CRC32У���ֽ�	
} ;

struct ServInfor {
	uint8 vehicle;
	uint8 car;
	uint8 system;
	uint8 function;	
};

extern void parseData(char * buffer, uint32 len);
void ACT();
void DS();
void DTC();
void function();
void sys();
void car();
void handleRecvData();
uint32 doPackDiagCell(struct DiagCell* mDiag, uint8* buf, uint8 * pdata, uint8 len);
uint32 doPackServCell(struct ServCell* mServ, uint8* buf, uint32 len);
uint32 doPackFrameCell(struct ReliableFrame* mFrame, uint8* buf, uint32 len);
uint32 doPackFrame(uint8* buf, uint8 * pdata, uint32 len);
uint16 getFrameLen(uint32 len);
uint32 getCRC32Checksum(struct ReliableFrame* frame, uint16 len);

#endif