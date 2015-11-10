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
	uint16 servId;		//业务ID
	uint16 servLen;	//业务长度
	uint8* servData;	//业务内容 
};

struct ReliableFrame{
	uint8 physicallink;			//物理链路
	uint8 protocolversion;	//协议地址
	uint8 deviceId[6];		//设备ID
	uint32 checksum;					//帧校验
	uint16 frameLen;					//帧长度
	uint8 frameId;					//帧ID
	uint16 frameContrl;			//帧控制字
	uint8 timeStamp[9];		//时间戳
	uint8 servNum;					//业务数目
	uint8* servData;				//业务数据
	uint32 crc32;						//CRC32校验字节	
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