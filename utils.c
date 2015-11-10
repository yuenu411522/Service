#include "comm.h"
#include "utils.h"

void printfBufToByte(uint8* bufName, uint8* bufData, uint32 bufLen){
	uint32 i;
	if(bufLen <= 0){
		printf("No data\n");
		return ;
	}
	printf("%s: ", bufName);
	for(i = 0; i < bufLen; i++){
		printf("%x ", bufData[i]);
	}
	printf("\n");
}

void uint16BigToLittle(uint16 * src){
	uint16 temp = *src;
	*src = 0;
	*src |= (temp >> 8 & 0xFF) << 0;
	*src |= (temp & 0xFF) << 8;
}

void uint32BigToLittle(uint32 * src){
	uint32 temp = *src;
	*src = 0;
	*src |= (temp >> 24 & 0xFF) << 0;
	*src |= (temp >> 16 & 0xFF) << 8;
	*src |= (temp >> 8 & 0xFF) << 16;
	*src |= (temp >> 0 & 0xFF) << 24;
}

void len2String(uint32 src, uint8* buf){
	uint32 srcHbit = src/16;
	uint32 srcLbit = src%16;

	if(srcHbit < 0){
		*buf++ = '0';
	}
	else if(srcHbit > 9){
		*buf++ = srcHbit + 55;
	}
	else {
		*buf++ = srcHbit + 48;
	}
	
	if(srcLbit > 9){
		*buf++ = srcLbit + 55;
	}
	else {
		*buf++ = srcLbit + 48;
	}
}

void decimal2String(long src, char *buf){
	int i = 0;
	char temp[10];

	if(src < 0){
		*buf++ = '-';
		src = 0- src;
	}
	
	do{
		temp[i++] = src%10 + 48;
		src = src/10;
	}while(src/10 > 0);
	temp[i] = src%10 + 48;

	for(; i >=0; i-- ){
		*buf++ = temp[i];
	}
}

int strlenOfInt(long src){
	int i = 0;
	
	if(src < 0){
		i++;
		src = 0- src;	
	}
	
	do{
		if(src == 0){
			break;	
		}
		if(src%10 >= 0){
			src = src / 10;
			i++;	
		}
	}	while(src/10 >= 0);
	return i;
}

void char2int(uint8* src, uint32* tag, uint32 len){
	int i;
	for(i = 0; i < len; i++){
		tag[i] = src[i];	
	}
}