// Function : u8_inc
// Namespace: 
// Entry    : 00548980
// Prototype: undefined u8_inc(long param_1, int * param_2)
// Body     : 00548980 - 005489c4


void u8_inc(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_2;
  lVar2 = (long)iVar1;
  *param_2 = (int)(lVar2 + 1);
  if ((((*(char *)(param_1 + lVar2) < '\0') && ((*(byte *)(param_1 + lVar2 + 1) & 0xc0) == 0x80)) &&
      (*param_2 = iVar1 + 2, (*(byte *)(param_1 + 2 + lVar2) & 0xc0) == 0x80)) &&
     (*param_2 = iVar1 + 3, (*(byte *)(param_1 + 3 + lVar2) & 0xc0) == 0x80)) {
    *param_2 = iVar1 + 4;
    return;
  }
  return;
}


