// Function : tabsend_dsp
// Namespace: 
// Entry    : 0058df20
// Prototype: undefined tabsend_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058df20 - 0058e02b


void tabsend_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar9;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffffb8;
  char local_3c [4];
  undefined8 local_38;
  
  uVar10 = (undefined4)((ulong)param_2 >> 0x20);
  piVar1 = (int *)*param_10;
  uVar2 = *(uint *)(param_9 + 0x30);
  uVar3 = piVar1[5];
  if ((int)uVar2 <= piVar1[5]) {
    uVar3 = uVar2;
  }
  uVar8 = 0;
  fVar9 = (float)*piVar1;
  fVar7 = (float)piVar1[4] / fVar9;
  iVar4 = 1;
  if (0 < (int)fVar7) {
    iVar4 = (int)fVar7;
  }
  *(int *)(param_9 + 0x40) = iVar4;
  if (0 < (int)uVar2) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      if (*(char *)**(undefined8 **)(*(long *)(param_9 + 0x38) + lVar6) != '\0') {
        dsparray_get_array(CONCAT44(uVar8,fVar7),CONCAT44(uVar10,fVar9),param_3,param_4,param_5,
                           param_6,param_7,param_8,(long *)(*(long *)(param_9 + 0x38) + lVar6),
                           local_3c,&local_38,1,param_13,param_14);
        uVar2 = *(uint *)(param_9 + 0x30);
        fVar7 = extraout_XMM0_Da;
        uVar8 = extraout_XMM0_Db;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar5 < (int)uVar2);
  }
  if (0 < (int)uVar3) {
    lVar5 = 0;
    iVar4 = 0;
    do {
      lVar6 = (long)*(int *)*param_10;
      dsp_add(CONCAT44(uVar8,fVar7),CONCAT44(uVar10,fVar9),param_3,param_4,param_5,param_6,param_7,
              param_8,tabsend_perform,4,param_9,*(long *)(param_9 + 0x38) + lVar5,
              lVar6 * iVar4 * 4 + *(long *)((int *)*param_10 + 2),lVar6,in_stack_ffffffffffffffb8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x30;
      fVar7 = extraout_XMM0_Da_00;
      uVar8 = extraout_XMM0_Db_00;
    } while ((ulong)uVar3 * 0x30 != lVar5);
  }
  return;
}


