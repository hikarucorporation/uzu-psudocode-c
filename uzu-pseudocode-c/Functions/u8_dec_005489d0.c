// Function : u8_dec
// Namespace: 
// Entry    : 005489d0
// Prototype: undefined u8_dec(long param_1, int * param_2)
// Body     : 005489d0 - 00548a0e


void u8_dec(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_2;
  lVar2 = (long)iVar1;
  *param_2 = iVar1 + -1;
  if ((((*(byte *)(param_1 + -1 + lVar2) & 0xc0) == 0x80) &&
      (*param_2 = iVar1 + -2, (*(byte *)(param_1 + -2 + lVar2) & 0xc0) == 0x80)) &&
     (*param_2 = iVar1 + -3, (*(byte *)(param_1 + -3 + lVar2) & 0xc0) == 0x80)) {
    *param_2 = iVar1 + -4;
  }
  return;
}


