// Function : glist_retext
// Namespace: 
// Entry    : 005162c0
// Prototype: undefined8 glist_retext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, byte * param_14)
// Body     : 005162c0 - 005162e8


undefined8
glist_retext(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,byte *param_14)

{
  undefined8 in_RAX;
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  if ((*(long *)(param_9 + 0xc0) != 0) && (*(long *)(*(long *)(param_9 + 0xc0) + 0x18) != 0)) {
    plVar1 = (long *)glist_findrtext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,param_9,param_10,param_11,param_12,param_13,param_14);
    if (plVar1 != (long *)0x0) {
      uVar2 = rtext_retext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           plVar1,param_10,extraout_RDX,param_12,param_13,param_14);
      return uVar2;
    }
  }
  return in_RAX;
}


