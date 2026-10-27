// Function : template_setfloat
// Namespace: 
// Entry    : 00520a20
// Prototype: undefined template_setfloat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00520a20 - 00520ac4


void template_setfloat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 *param_10,long param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 unaff_BL;
  long *plVar4;
  char *pcVar5;
  
  if (param_9 == 0) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "template_find_field",param_10,param_11,param_12,param_13,param_14,unaff_BL);
  }
  else if (0 < (int)*(uint *)(param_9 + 0x18)) {
    plVar4 = (long *)(*(long *)(param_9 + 0x20) + 8);
    lVar1 = 0;
    do {
      if ((undefined8 *)*plVar4 == param_10) {
        if ((int)plVar4[-1] == 0) {
          *(int *)(param_11 + (int)lVar1) = (int)param_1;
          return;
        }
        if ((int)param_12 == 0) {
          return;
        }
        uVar3 = **(undefined8 **)(param_9 + 0x10);
        uVar2 = *param_10;
        pcVar5 = "%s.%s: not a number";
        goto LAB_00520a8e;
      }
      plVar4 = plVar4 + 3;
      lVar1 = lVar1 + 8;
    } while ((ulong)*(uint *)(param_9 + 0x18) * 8 != lVar1);
  }
  if ((int)param_12 == 0) {
    return;
  }
  uVar3 = **(undefined8 **)(param_9 + 0x10);
  uVar2 = *param_10;
  pcVar5 = "%s.%s: no such field";
LAB_00520a8e:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar5,uVar3,uVar2,
           param_13,param_14);
  return;
}


