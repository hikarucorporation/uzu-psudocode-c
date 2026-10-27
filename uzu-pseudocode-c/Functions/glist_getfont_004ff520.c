// Function : glist_getfont
// Namespace: 
// Entry    : 004ff520
// Prototype: undefined4 glist_getfont(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004ff520 - 004ff56e


undefined4
glist_getfont(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13
             ,undefined8 param_14)

{
  long lVar1;
  undefined8 in_RAX;
  undefined8 extraout_RDX;
  
  lVar1 = *(long *)(param_9 + 0xe0);
  while (lVar1 == 0) {
    param_9 = *(long *)(param_9 + 0x48);
    if (param_9 == 0) {
      param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "t_canvasenvironment",param_10,param_11,param_12,param_13,param_14,(char)in_RAX)
      ;
      param_11 = extraout_RDX;
    }
    lVar1 = *(long *)(param_9 + 0xe0);
  }
  return *(undefined4 *)(param_9 + 0xd0);
}


