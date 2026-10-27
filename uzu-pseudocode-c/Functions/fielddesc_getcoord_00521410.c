// Function : fielddesc_getcoord
// Namespace: 
// Entry    : 00521410
// Prototype: float fielddesc_getcoord(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, long param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00521410 - 0052154d


float fielddesc_getcoord(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,char *param_9,long param_10,long param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  float fVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 in_AL;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = (int)param_12;
  if (*param_9 == '\x01') {
    if (param_9[1] == '\0') {
      fVar9 = *(float *)(param_9 + 8);
    }
    else {
      puVar2 = *(undefined8 **)(param_9 + 8);
      if (param_10 == 0) {
        bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",0,
            param_11,param_12,param_13,param_14,in_AL);
      }
      else if (0 < (int)*(uint *)(param_10 + 0x18)) {
        plVar4 = (long *)(*(long *)(param_10 + 0x20) + 8);
        lVar7 = 0;
        do {
          if ((undefined8 *)*plVar4 == puVar2) {
            if ((int)plVar4[-1] == 0) {
              fVar9 = *(float *)(param_11 + (int)lVar7);
              goto LAB_005214c7;
            }
            fVar9 = 0.0;
            if (iVar3 == 0) goto LAB_005214c7;
            uVar6 = **(undefined8 **)(param_10 + 0x10);
            uVar5 = *puVar2;
            pcVar8 = "%s.%s: not a number";
            goto LAB_005214bb;
          }
          lVar7 = lVar7 + 8;
          plVar4 = plVar4 + 3;
        } while ((ulong)*(uint *)(param_10 + 0x18) * 8 != lVar7);
      }
      fVar9 = 0.0;
      if (iVar3 != 0) {
        uVar6 = **(undefined8 **)(param_10 + 0x10);
        uVar5 = *puVar2;
        pcVar8 = "%s.%s: no such field";
LAB_005214bb:
        pd_error(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar8,uVar6,uVar5,
                 param_13,param_14);
        fVar9 = 0.0;
      }
LAB_005214c7:
      fVar10 = *(float *)(param_9 + 0x10);
      if (*(float *)(param_9 + 0x14) != fVar10) {
        fVar11 = *(float *)(param_9 + 0x18);
        fVar1 = *(float *)(param_9 + 0x1c);
        fVar9 = ((fVar9 - fVar10) * (fVar1 - fVar11)) / (*(float *)(param_9 + 0x14) - fVar10) +
                fVar11;
        fVar10 = fVar11;
        if (fVar1 <= fVar11) {
          fVar10 = fVar1;
        }
        if (fVar10 <= fVar9) {
          fVar10 = fVar9;
        }
        if (fVar11 <= fVar1) {
          fVar11 = fVar1;
        }
        fVar9 = fVar11;
        if (fVar10 <= fVar11) {
          fVar9 = fVar10;
        }
      }
    }
  }
  else {
    fVar9 = 0.0;
    if (iVar3 != 0) {
      pd_error(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
               "symbolic data field used as number",param_11,param_12,param_13,param_14);
      fVar9 = 0.0;
    }
  }
  return fVar9;
}


