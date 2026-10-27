// Function : array_getfields
// Namespace: 
// Entry    : 00522740
// Prototype: undefined8 array_getfields(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, long * param_10, undefined8 * param_11, int * param_12, char * param_13, long param_14, long param_15, undefined4 * param_16, undefined4 * param_17, undefined4 * param_18)
// Body     : 00522740 - 00522981


undefined8
array_getfields(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 *param_9,long *param_10,undefined8 *param_11,int *param_12,char *param_13,
               long param_14,long param_15,undefined4 *param_16,undefined4 *param_17,
               undefined4 *param_18)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar14;
  long local_38;
  
  piVar6 = param_12;
  pcVar11 = param_13;
  lVar10 = param_14;
  plVar2 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_9,template_class);
  if (plVar2 == (long *)0x0) {
    uVar8 = *param_9;
    pcVar9 = "plot: %s: no such template";
    uVar14 = extraout_XMM0_Qa;
LAB_005227cb:
    pd_error(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar9,uVar8,piVar6,
             pcVar11,lVar10);
    return 0xffffffff;
  }
  plVar3 = (long *)__tls_get_addr();
  if ((undefined8 *)(*plVar3 + 0x78) == param_9) {
    uVar1 = *(uint *)(plVar2 + 3);
    local_38 = 0;
  }
  else {
    if ((plVar2[1] == 0) || (local_38 = *(long *)(plVar2[1] + 0x38), local_38 == 0)) {
      uVar8 = *param_9;
      pcVar9 = "plot: %s: no canvas for this template";
      uVar14 = extraout_XMM0_Qa_00;
      goto LAB_005227cb;
    }
    uVar1 = *(uint *)(plVar2 + 3);
  }
  if ((param_14 == 0) || (*(char *)(param_14 + 1) == '\0')) {
    puVar4 = gensym("y");
    uVar5 = *(uint *)(plVar2 + 3);
  }
  else {
    puVar4 = *(undefined8 **)(param_14 + 8);
    uVar5 = uVar1;
  }
  if (0 < (int)uVar5) {
    plVar3 = (long *)(plVar2[4] + 8);
    lVar10 = 0;
    do {
      if ((undefined8 *)*plVar3 == puVar4) {
        if ((int)plVar3[-1] == 0) {
          uVar13 = (undefined4)lVar10;
          goto joined_r0x00522871;
        }
        break;
      }
      plVar3 = plVar3 + 3;
      lVar10 = lVar10 + 8;
    } while ((ulong)uVar5 * 8 != lVar10);
  }
  uVar13 = 0xffffffff;
joined_r0x00522871:
  if ((param_13 == (char *)0x0) || (param_13[1] == '\0')) {
    puVar4 = gensym("x");
    uVar5 = *(uint *)(plVar2 + 3);
  }
  else {
    puVar4 = *(undefined8 **)(param_13 + 8);
  }
  if (0 < (int)uVar5) {
    plVar3 = (long *)(plVar2[4] + 8);
    lVar10 = 0;
    do {
      if ((undefined8 *)*plVar3 == puVar4) {
        if ((int)plVar3[-1] == 0) {
          uVar12 = (undefined4)lVar10;
          goto joined_r0x005228e1;
        }
        break;
      }
      plVar3 = plVar3 + 3;
      lVar10 = lVar10 + 8;
    } while ((ulong)uVar5 * 8 != lVar10);
  }
  uVar12 = 0xffffffff;
joined_r0x005228e1:
  if ((param_15 == 0) || (*(char *)(param_15 + 1) == '\0')) {
    puVar4 = gensym("w");
    uVar5 = *(uint *)(plVar2 + 3);
  }
  else {
    puVar4 = *(undefined8 **)(param_15 + 8);
  }
  uVar7 = 0xffffffff;
  if (0 < (int)uVar5) {
    plVar3 = (long *)(plVar2[4] + 8);
    lVar10 = 0;
    do {
      if ((undefined8 *)*plVar3 == puVar4) {
        if ((int)plVar3[-1] == 0) {
          uVar7 = (undefined4)lVar10;
        }
        break;
      }
      plVar3 = plVar3 + 3;
      lVar10 = lVar10 + 8;
    } while ((ulong)uVar5 * 8 != lVar10);
  }
  *param_10 = local_38;
  *param_11 = plVar2;
  *param_12 = uVar1 << 3;
  *param_16 = uVar12;
  *param_17 = uVar13;
  *param_18 = uVar7;
  return 0;
}


