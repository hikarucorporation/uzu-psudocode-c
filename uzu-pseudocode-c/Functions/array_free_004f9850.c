// Function : array_free
// Namespace: 
// Entry    : 004f9850
// Prototype: undefined array_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f9850 - 004f98c6


void array_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               int *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar2;
  undefined8 extraout_RDX_01;
  int iVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  
  lVar1 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(param_9 + 4));
  uVar4 = gstub_cutoff(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0xe),param_10,extraout_RDX,param_12,param_13,param_14);
  if (0 < *param_9) {
    iVar3 = 0;
    uVar2 = extraout_RDX_00;
    do {
      uVar4 = word_free(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)param_9[1] * (long)iVar3 + *(long *)(param_9 + 2),lVar1,uVar2,param_12
                        ,param_13,param_14);
      iVar3 = iVar3 + 1;
      uVar2 = extraout_RDX_01;
    } while (iVar3 < *param_9);
  }
  freebytes(*(void **)(param_9 + 2));
  freebytes(param_9);
  return;
}


