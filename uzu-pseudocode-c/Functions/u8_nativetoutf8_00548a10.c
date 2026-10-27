// Function : u8_nativetoutf8
// Namespace: 
// Entry    : 00548a10
// Prototype: int u8_nativetoutf8(char * param_1, int param_2, char * param_3, int param_4)
// Body     : 00548a10 - 00548a4a


int u8_nativetoutf8(char *param_1,int param_2,char *param_3,int param_4)

{
  size_t sVar1;
  
  if (param_4 < 0) {
    sVar1 = strlen(param_3);
    param_4 = (int)sVar1 + 1;
  }
  if (param_4 < param_2) {
    param_2 = param_4;
  }
  strncpy(param_1,param_3,(long)param_2);
  return param_2;
}


