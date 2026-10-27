// Function : gpointer_unset
// Namespace: 
// Entry    : 0051f1e0
// Prototype: undefined gpointer_unset(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f1e0 - 0051f227


void gpointer_unset(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 unaff_BL;
  
  pvVar2 = *(void **)(param_9 + 0x10);
  if (pvVar2 != (void *)0x0) {
    iVar1 = *(int *)((long)pvVar2 + 0xc);
    uVar3 = iVar1 - 1;
    *(uint *)((long)pvVar2 + 0xc) = uVar3;
    if (uVar3 == 0) {
      if (*(int *)((long)pvVar2 + 8) == 0) {
        freebytes(pvVar2);
      }
    }
    else if (iVar1 < 1) {
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"gstub_dis",param_10,
          param_11,(ulong)uVar3,param_13,param_14,unaff_BL);
    }
    *(undefined8 *)(param_9 + 0x10) = 0;
  }
  return;
}


