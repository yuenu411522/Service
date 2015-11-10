#include "vehicleInfor.h"

char* vehicleTable[] = {
	"Toyota",
	"AstonMartin",
	"Bentley",	
	"Benz",	
	"Bmw",	
	"Ferrari",	
	"Honda",	
	"Jaguar",	
	"Lamborghini",	
	"Maserati",	
	"Pagani",	
	"Porsche",	
	"Rolls Rovce"
};

char* ToyotaTable[] = {
	"Camry",	
	"Corolla",	
	"Crown",	
	"E-Z",	
	"Highlander",	
	"Levin",	
	"Yaris L",	
	"Yaris",	
};

char* AsrtonMartinTable[] = {
	"DBS",	
	"Rapide",	
	"V12 Zagato",	
	"V8 Vantage",	
	"Vanquish",	
	"Virage",
};

char* systemTable[] = {
	"Navigation System(B_01900002)",
	"Clearance Sonar",
	"Master Switch",
	"Sliding Roof",
	"Gateway",
	"AFS(B_00900002)",
	"Driver Seat",
	"Starting Control",
	"Power Source Control",
	"Combination Meter",
	"Air Conditioner",
	"Air conditional",
	"Tair Conditioner",
	"Entry Start(B_00205002)",
	"Entry Start(B_00205000)",
	"Theft Deterrent",
	"Main Body(B_00105000)",
	"Accessory Gateway",
	"SRS Airbag",
	"Blind Spot Monitor L",
	"Remote Engine Syarter",
	"Mirror L",
	"Mirror",
	"Tilt Telescopic",
	"P-Door Motor",
	"Pre-Crash",
	"ABS/VSC/TRC(C_00000000)",
	"EMPS",
	"Tire Pressure Monitor",
	"Engine and ECT(P_0000001F)",
	"Engine and ECT(P_0000002E)",
	"Engine(P_0000100E)",
	"Engine(P_00001006)",
	"ECT(P_00100003)",
	"E-ACM",
	"Navigation System(B_01900000)",
	"AFS(B_00900000)",
	"Main Body(B_00105001)",
	"Main Body(B_0010500A)",
	"RR-Door Motor",
	"RL-Door Motor",
	"D-Door Motor",
	"ABS/VSC/TRC(C_00000003)",
	"ABS/VSC/TRC(C_00000012)",
	"ECT(P_00100000)",
	"¼àÌý(Monitoring data)"
};

char* functionTable[] = {
	"",
	"Action Test",
	"Data Stream",	
	"Diagnose Trouble Code"
};

char* DTCTable[] = {
	"",
	"read current code",
	"read history code",
	"clear code"
};

char *ACTTable[] = {
	"No.00 result is OK\n",
	"No.01 result is Fail\n",	
	"No.02 result is OK\n",	
	"No.03 result is Fail\n",	
	"No.04 result is OK\n",	
	"No.05 result is Fail\n",	
	"No.06 result is OK\n",	
	"No.07 result is Fail\n",	
	"No.08 result is OK\n",	
	"No.09 result is OK\n",	
	"No.0a result is OK\n",	
	"No.0b result is Fail\n",	
	"No.0c result is Fail\n",	
	"No.0d result is OK\n",	
	"No.0e result is Fail\n",	
	"No.0f result is OK\n",	
	"No.10 result is OK\n",
	"No.11 result is Fail\n",	
	"No.12 result is OK\n",	
	"No.13 result is OK\n",	
	"No.14 result is Fail\n",	
	"No.15 result is OK\n",	
	"No.16 result is Fail\n",	
	"No.17 result is OK\n",	
	"No.18 result is Fail\n",	
	"No.19 result is OK\n",	
	"No.1a result is Fail\n",	
	"No.1b result is OK\n",	
	"No.1c result is Fail\n",	
	"No.1d result is Fail\n",	
	"No.1e result is OK\n",	
	"No.1f result is Fail\n",	
};

uint8* DSTable[] = {
	"0x0000",
	"0x0001",
	"0x0002",
	"0x0003",
	"0x0004",
	"0x0005",
	"0x0006",
	"0x0007",
	"0x0008",
	"0x0009",
	"0x000a",
	"0x000b",
	"0x000c",
	"0x000d",
	"0x000e",
	"0x000f",
	"0x0010",
	"0x0011",
	"0x0012",
	"0x0013",
	"0x0014",
	"0x0015",
	"0x0016",
	"0x0017",
	"0x0018",
	"0x0019",
	"0x001a",
	"0x001b",
	"0x001c",
	"0x001d",
	"0x001e",
	"0x001f",
	"0x0020",
	"0x0021",
	"0x0022",
	"0x0023",
	"0x0024",
	"0x0025",
	"0x0026",
	"0x0027",
	"0x0028",
	"0x0029",
	"0x002a",
	"0x002b",
	"0x002c",
	"0x002d",
	"0x002e",
	"0x002f"
};
  
uint32 getACTTableSize(){
	uint32 size = sizeof(ACTTable)/sizeof(ACTTable[0]);
	return size;
} 
  
uint32 getDSTableSize(){
	uint32 size = sizeof(DSTable)/sizeof(DSTable[0]);
	return size;
}
  
  
  
  
  
  
  
  