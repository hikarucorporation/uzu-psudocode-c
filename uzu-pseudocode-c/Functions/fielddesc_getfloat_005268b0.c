// Function : fielddesc_getfloat
// Namespace: 
// Entry    : 005268b0
// Prototype: undefined4 fielddesc_getfloat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, long param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005268b0 - 0052698a


undefined4
fielddesc_getfloat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char *param_9,long param_10,long param_11,undefined8 param_12,char *param_13,
                  undefined8 param_14)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 unaff_BL;
  long lVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  iVar2 = (int)param_12;
  if (*param_9 == '\x01') {
    if (param_9[1] == '\0') {
      uVar8 = *(undefined4 *)(param_9 + 8);
    }
    else {
      puVar1 = *(undefined8 **)(param_9 + 8);
      if (param_10 == 0) {
        bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",0,
            param_11,param_12,param_13,param_14,unaff_BL);
      }
      else if (0 < (int)*(uint *)(param_10 + 0x18)) {
        plVar3 = (long *)(*(long *)(param_10 + 0x20) + 8);
        lVar6 = 0;
        do {
          if ((undefined8 *)*plVar3 == puVar1) {
            if ((int)plVar3[-1] == 0) {
              return *(undefined4 *)(param_11 + (int)lVar6);
            }
            if (iVar2 == 0) {
              return 0;
            }
            uVar5 = **(undefined8 **)(param_10 + 0x10);
            uVar4 = *puVar1;
            pcVar7 = "%s.%s: not a number";
            goto LAB_0052694d;
          }
          lVar6 = lVar6 + 8;
          plVar3 = plVar3 + 3;
        } while ((ulong)*(uint *)(param_10 + 0x18) * 8 != lVar6);
      }
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar5 = **(undefined8 **)(param_10 + 0x10);
        uVar4 = *puVar1;
        pcVar7 = "%s.%s: no such field";
LAB_0052694d:
        pd_error(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar7,uVar5,uVar4,
                 param_13,param_14);
        return 0;
      }
    }
  }
  else {
    uVar8 = 0;
    if (iVar2 != 0) {
      pd_error(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
               "symbolic data field used as number",param_11,param_12,param_13,param_14);
      return 0;
    }
  }
  return uVar8;
}


