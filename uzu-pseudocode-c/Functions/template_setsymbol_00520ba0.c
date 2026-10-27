// Function : template_setsymbol
// Namespace: 
// Entry    : 00520ba0
// Prototype: undefined template_setsymbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00520ba0 - 00520c43


void template_setsymbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 *param_10,long param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 unaff_BL;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  int iVar6;
  
  iVar6 = (int)param_13;
  if (param_9 == 0) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "template_find_field",param_10,param_11,param_12,param_13,param_14,unaff_BL);
  }
  else if (0 < (int)*(uint *)(param_9 + 0x18)) {
    plVar5 = (long *)(*(long *)(param_9 + 0x20) + 8);
    lVar3 = 0;
    do {
      if ((undefined8 *)*plVar5 == param_10) {
        if ((int)plVar5[-1] == 1) {
          *(undefined8 *)(param_11 + (int)lVar3) = param_12;
          return;
        }
        if (iVar6 == 0) {
          return;
        }
        uVar2 = **(undefined8 **)(param_9 + 0x10);
        uVar1 = *param_10;
        pcVar4 = "%s.%s: not a symbol";
        goto LAB_00520c0e;
      }
      plVar5 = plVar5 + 3;
      lVar3 = lVar3 + 8;
    } while ((ulong)*(uint *)(param_9 + 0x18) * 8 != lVar3);
  }
  if (iVar6 == 0) {
    return;
  }
  uVar2 = **(undefined8 **)(param_9 + 0x10);
  uVar1 = *param_10;
  pcVar4 = "%s.%s: no such field";
LAB_00520c0e:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar4,uVar2,uVar1,
           param_13,param_14);
  return;
}


