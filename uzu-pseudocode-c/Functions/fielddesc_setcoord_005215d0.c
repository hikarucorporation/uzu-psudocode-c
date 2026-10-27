// Function : fielddesc_setcoord
// Namespace: 
// Entry    : 005215d0
// Prototype: undefined fielddesc_setcoord(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, long param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005215d0 - 0052172c


void fielddesc_setcoord(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,
                       undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                       char *param_9,long param_10,long param_11,undefined8 param_12,char *param_13,
                       undefined8 param_14)

{
  float fVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 unaff_BL;
  long lVar7;
  char *pcVar8;
  float fVar9;
  ulong extraout_XMM0_Qa;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  
  iVar3 = (int)param_12;
  if ((*param_9 == '\x01') && (param_9[1] != '\0')) {
    fVar13 = *(float *)(param_9 + 0x18);
    fVar11 = *(float *)(param_9 + 0x1c);
    if (fVar11 == fVar13) {
      puVar2 = *(undefined8 **)(param_9 + 8);
    }
    else {
      fVar10 = *(float *)(param_9 + 0x10);
      fVar1 = *(float *)(param_9 + 0x14);
      param_3 = (ulong)(uint)fVar1;
      param_6 = (ulong)(uint)(fVar1 - fVar10);
      fVar9 = (((float)param_1 - fVar13) * (fVar1 - fVar10)) / (fVar11 - fVar13) + fVar10;
      fVar11 = *(float *)(param_9 + 0x20);
      fVar13 = 0.0;
      if (fVar11 != 0.0) {
        fVar9 = (float)(int)((double)(fVar9 / fVar11) + DAT_005db338) * fVar11;
      }
      fVar11 = fVar10;
      if (fVar1 <= fVar10) {
        fVar11 = fVar1;
      }
      if (fVar11 <= fVar9) {
        fVar11 = fVar9;
      }
      if (fVar10 <= fVar1) {
        fVar10 = fVar1;
      }
      if (fVar11 <= fVar10) {
        fVar10 = fVar11;
      }
      param_2 = (ulong)(uint)fVar10;
      param_1 = (ulong)(uint)fVar10;
      puVar2 = *(undefined8 **)(param_9 + 8);
    }
    if (param_10 == 0) {
      uVar14 = 0;
      uVar12 = 0;
      bug(param_1,param_2,param_3,(ulong)(uint)fVar11,(ulong)(uint)fVar13,param_6,param_7,param_8,
          "template_find_field",0,param_11,param_12,param_13,param_14,unaff_BL);
      param_1 = extraout_XMM0_Qa;
    }
    else {
      uVar14 = 0;
      uVar12 = 0;
      if (0 < (int)*(uint *)(param_10 + 0x18)) {
        plVar4 = (long *)(*(long *)(param_10 + 0x20) + 8);
        lVar7 = 0;
        do {
          if ((undefined8 *)*plVar4 == puVar2) {
            if ((int)plVar4[-1] == 0) {
              *(int *)(param_11 + (int)lVar7) = (int)param_1;
              return;
            }
            if (iVar3 == 0) {
              return;
            }
            uVar6 = **(undefined8 **)(param_10 + 0x10);
            uVar5 = *puVar2;
            pcVar8 = "%s.%s: not a number";
            goto LAB_005216f2;
          }
          lVar7 = lVar7 + 8;
          plVar4 = plVar4 + 3;
        } while ((ulong)*(uint *)(param_10 + 0x18) * 8 != lVar7);
      }
    }
    if (iVar3 != 0) {
      uVar6 = **(undefined8 **)(param_10 + 0x10);
      uVar5 = *puVar2;
      pcVar8 = "%s.%s: no such field";
LAB_005216f2:
      pd_error(param_1,param_2,param_3,CONCAT44(uVar12,fVar11),CONCAT44(uVar14,fVar13),param_6,
               param_7,param_8,0,pcVar8,uVar6,uVar5,param_13,param_14);
      return;
    }
  }
  else if (iVar3 != 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "attempt to set constant or symbolic data field to a number",param_11,param_12,param_13
             ,param_14);
    return;
  }
  return;
}


