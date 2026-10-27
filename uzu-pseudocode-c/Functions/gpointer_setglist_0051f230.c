// Function : gpointer_setglist
// Namespace: 
// Entry    : 0051f230
// Prototype: undefined gpointer_setglist(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f230 - 0051f293


void gpointer_setglist(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 *param_9,long param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  undefined1 unaff_BL;
  
  pvVar3 = (void *)param_9[2];
  if (pvVar3 != (void *)0x0) {
    iVar2 = *(int *)((long)pvVar3 + 0xc);
    uVar5 = iVar2 - 1;
    *(uint *)((long)pvVar3 + 0xc) = uVar5;
    if (uVar5 == 0) {
      if (*(int *)((long)pvVar3 + 8) == 0) {
        freebytes(pvVar3);
      }
    }
    else if (iVar2 < 1) {
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"gstub_dis",param_10,
          param_11,(ulong)uVar5,param_13,param_14,unaff_BL);
    }
  }
  lVar4 = *(long *)(param_10 + 0x38);
  param_9[2] = lVar4;
  *(undefined4 *)(param_9 + 1) = *(undefined4 *)(param_10 + 0x40);
  *param_9 = param_11;
  piVar1 = (int *)(lVar4 + 0xc);
  *piVar1 = *piVar1 + 1;
  return;
}


