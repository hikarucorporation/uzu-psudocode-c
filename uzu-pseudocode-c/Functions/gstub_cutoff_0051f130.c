// Function : gstub_cutoff
// Namespace: 
// Entry    : 0051f130
// Prototype: undefined gstub_cutoff(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, void * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f130 - 0051f16a


void gstub_cutoff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 void *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined1 unaff_BL;
  
  *(undefined4 *)((long)param_9 + 8) = 0;
  iVar1 = *(int *)((long)param_9 + 0xc);
  if (iVar1 < 0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"gstub_cutoff",param_10,
        param_11,param_12,param_13,param_14,unaff_BL);
    iVar1 = *(int *)((long)param_9 + 0xc);
  }
  if (iVar1 == 0) {
    freebytes(param_9);
    return;
  }
  return;
}


