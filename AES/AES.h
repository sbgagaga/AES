#ifndef __AES_H__
#define __AES_H__

typedef struct
{
	uint8_t* len;
	uint8_t* array;
}TYPE_STRUCT_ENCRYPT;

typedef struct
{
	uint8_t* len;
	uint8_t* array;
}TYPE_STRUCT_DEENCRYPT;

extern uint8_t c_array[64];
extern uint8_t p_array[32];
extern uint8_t c_len;
extern uint8_t p_len;
extern TYPE_STRUCT_ENCRYPT encrypt;
extern TYPE_STRUCT_DEENCRYPT deencrypt;

unsigned short CRC16_CCITT_FALSE(unsigned char* puchMsg, unsigned int usDataLen);

void aes(TYPE_STRUCT_ENCRYPT encrypt, char* key, char* iv);
void deAes(TYPE_STRUCT_DEENCRYPT deencrypt, char* key, char* iv);
void setkey(char* str,char* key);
void setiv(char* str, char* iv);

static void extendKey(char* key);
static int T(int num, int round);
static void addRoundKey(int array[4][4], int round);
static void subBytes(int array[4][4]);
static void shiftRows(int array[4][4]);
static int GFMul2(int s);
static int GFMul3(int s);
static int GFMul4(int s);
static int GFMul8(int s);
static int GFMul9(int s);
static int GFMul11(int s);
static int GFMul12(int s);
static int GFMul13(int s);
static int GFMul14(int s);
static int GFMul(int n, int s);
static void mixColumns(int array[4][4]);
static void convertArrayToStr(int array[4][4], uint8_t* str);
static int mergeArrayToInt(int array[4]);
static void splitIntToArray(int num, int array[4]);
static int getNumFromSBox(int index);
static int getLeft4Bit(int num);
static int getRight4Bit(int num);
static void leftLoop4int(int array[4], int step);
static int getWordFromStr(char* str);
static int getIntFromChar(char c);
static void convertToIntArray(uint8_t* str, int pa[4][4]);
static void deSubBytes(int array[4][4]);
static void rightLoop4int(int array[4], int step);
static void deShiftRows(int array[4][4]);
static void deMixColumns(int array[4][4]);
static int getNumFromS1Box(int index);
static void getArrayFrom4W(int i, int array[4][4]);
static void addRoundTowArray(int aArray[4][4], int bArray[4][4]);




#endif