// Function : glist_fontwidth
// Namespace: 
// Entry    : 004ff5a0
// Prototype: undefined glist_fontwidth(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004ff5a0 - 004ff61e


void glist_fontwidth(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  long lVar1;
  long lVar2;
  
  lVar2 = param_9;
  if (*(long *)(param_9 + 0xe0) == 0) {
    do {
      lVar2 = *(long *)(lVar2 + 0x48);
      if (lVar2 == 0) {
        param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "t_canvasenvironment",param_10,param_11,param_12,param_13,param_14,
                      (char)unaff_RBX);
        param_11 = extraout_RDX;
      }
    } while (*(long *)(lVar2 + 0xe0) == 0);
  }
  do {
    lVar1 = param_9;
    if ((*(ushort *)(lVar1 + 0xe8) & 0x101) != 0x100) break;
    param_9 = *(long *)(lVar1 + 0x48);
  } while (*(long *)(lVar1 + 0x48) != 0);
  sys_zoomfontwidth(*(uint *)(lVar2 + 0xd0),*(int *)(lVar1 + 0xec),0);
  return;
}


