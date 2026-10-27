// Function : sigdelread_float
// Namespace: 
// Entry    : 005918c0
// Prototype: undefined sigdelread_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005918c0 - 00591943


void sigdelread_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  float fVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  float fVar5;
  
  plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long *)(param_9 + 0x30),sigdelwrite_class);
  *(float *)(param_9 + 0x38) = (float)param_1;
  if (plVar3 != (long *)0x0) {
    fVar1 = *(float *)(param_9 + 0x44);
    fVar5 = (fVar1 - (float)*(int *)(param_9 + 0x48)) +
            (float)(int)((double)((float)param_1 * *(float *)(param_9 + 0x40)) + DAT_005db338);
    iVar4 = (int)fVar5;
    *(int *)(param_9 + 0x3c) = iVar4;
    if (fVar1 <= (float)(int)fVar5) {
      iVar2 = (int)plVar3[8];
      if (iVar4 <= iVar2) {
        return;
      }
    }
    else {
      iVar2 = (int)fVar1;
    }
    *(int *)(param_9 + 0x3c) = iVar2;
  }
  return;
}


