// Function : inlet_getsignalindex
// Namespace: 
// Entry    : 00539850
// Prototype: int inlet_getsignalindex(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00539850 - 005398e2


int inlet_getsignalindex
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined1 in_AL;
  int iVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  long lVar4;
  undefined8 extraout_XMM0_Qa;
  
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(long *)(param_9 + 0x20) != *plVar3 + 0xf0) {
    bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
        "inlet_getsignalindex",param_10,extraout_RDX,*plVar3 + 0xf0,param_13,param_14,in_AL);
  }
  lVar4 = *(long *)(*(long *)(param_9 + 0x10) + 0x20);
  iVar2 = 0;
  if ((lVar4 != 0) && (lVar4 != param_9)) {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    iVar2 = 0;
    do {
      plVar1 = (long *)(lVar4 + 0x20);
      lVar4 = *(long *)(lVar4 + 8);
      iVar2 = (uint)(*plVar1 == *plVar3 + 0xf0) + iVar2;
      if (lVar4 == 0) {
        return iVar2;
      }
    } while (lVar4 != param_9);
  }
  return iVar2;
}


