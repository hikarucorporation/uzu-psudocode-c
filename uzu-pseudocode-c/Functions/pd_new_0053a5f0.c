// Function : pd_new
// Namespace: 
// Entry    : 0053a5f0
// Prototype: long * pd_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053a5f0 - 0053a639


long * pd_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13
             ,undefined8 param_14)

{
  undefined1 in_AL;
  long *plVar1;
  
  if (param_9 == 0) {
    plVar1 = (long *)0x0;
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
        "pd_new: apparently called before setup routine",param_10,param_11,param_12,param_13,
        param_14,in_AL);
  }
  else {
    plVar1 = getbytes(*(size_t *)(param_9 + 0x18));
    *plVar1 = param_9;
    if ((*(byte *)(param_9 + 0x94) & 2) != 0) {
      plVar1[3] = 0;
      plVar1[4] = 0;
    }
  }
  return plVar1;
}


