// Function : poly_stop
// Namespace: 
// Entry    : 00555ac0
// Prototype: undefined poly_stop(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00555ac0 - 00555b44


void poly_stop(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_9 + 0x30);
  if (0 < iVar2) {
    plVar3 = (long *)(*(long *)(param_9 + 0x38) + 8);
    iVar4 = 0;
    do {
      while (*(int *)((long)plVar3 + -4) == 0) {
        iVar4 = iVar4 + 1;
        plVar3 = plVar3 + 2;
        if (iVar2 <= iVar4) {
          return;
        }
      }
      outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   *(long **)(param_9 + 0x50));
      outlet_float((ulong)*(uint *)(plVar3 + -1),param_2,param_3,param_4,param_5,param_6,param_7,
                   param_8,*(long **)(param_9 + 0x48));
      iVar4 = iVar4 + 1;
      outlet_float((ulong)(uint)(float)iVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                   ,*(long **)(param_9 + 0x18));
      *(undefined4 *)((long)plVar3 + -4) = 0;
      lVar1 = *(long *)(param_9 + 0x58);
      *(long *)(param_9 + 0x58) = lVar1 + 1;
      *plVar3 = lVar1;
      iVar2 = *(int *)(param_9 + 0x30);
      plVar3 = plVar3 + 2;
    } while (iVar4 < iVar2);
  }
  return;
}


