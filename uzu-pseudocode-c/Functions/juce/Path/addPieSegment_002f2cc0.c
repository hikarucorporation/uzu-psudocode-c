// Function : addPieSegment
// Namespace: juce:Path
// Entry    : 002f2cc0
// Prototype: undefined addPieSegment(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, Path * param_7)
// Body     : 002f2cc0 - 002f2ff0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Path::addPieSegment(float, float, float, float, float, float, float) */

void __cdecl
juce::Path::addPieSegment
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          Path *param_7)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = param_3 * DAT_005d9044;
  fVar9 = param_4 * DAT_005d9044;
  fVar4 = param_1 + fVar8;
  fVar7 = param_2 + fVar9;
  fVar5 = sinf(param_5);
  fVar6 = cosf(param_5);
  startNewSubPath(fVar5 * fVar8 + fVar4,fVar7 - fVar6 * fVar9,param_7);
  addCentredArc(fVar4,fVar7,fVar8,fVar9,0.0,param_5,param_6,param_7,'\0');
  if ((float)((uint)(param_5 - param_6) & _DAT_005d91c0) <= _DAT_005de544) {
    fVar8 = fVar8 * (float)s_333_power__f_00652630._0_4_;
    fVar9 = fVar9 * (float)s_333_power__f_00652630._0_4_;
    fVar6 = (fVar8 + fVar8) * DAT_005d9044;
    fVar10 = (fVar9 + fVar9) * DAT_005d9044;
    fVar4 = (fVar4 - fVar8) + fVar6;
    fVar5 = (fVar7 - fVar9) + fVar10;
    goto LAB_002f2f5c;
  }
  iVar1 = *(int *)(param_7 + 0xc);
  if (iVar1 != 0) {
    if (0 < iVar1) {
      fVar5 = *(float *)(*(long *)param_7 + (ulong)(iVar1 - 1) * 4);
      if ((fVar5 == DAT_005de41c) && (!NAN(fVar5) && !NAN(DAT_005de41c))) goto LAB_002f2ea5;
    }
    if ((int)*(uint *)(param_7 + 8) <= iVar1) {
      uVar3 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_7 + 8) != uVar3) {
        if ((int)uVar3 < 1) {
          free(*(void **)param_7);
          *(undefined8 *)param_7 = 0;
        }
        else {
          pvVar2 = realloc(*(void **)param_7,(ulong)uVar3 << 2);
          *(void **)param_7 = pvVar2;
        }
      }
      *(uint *)(param_7 + 8) = uVar3;
      iVar1 = *(int *)(param_7 + 0xc);
    }
    *(int *)(param_7 + 0xc) = iVar1 + 1;
    *(undefined4 *)(*(long *)param_7 + (long)iVar1 * 4) = 0x47c35280;
  }
LAB_002f2ea5:
  fVar8 = fVar8 * (float)s_333_power__f_00652630._0_4_;
  fVar9 = fVar9 * (float)s_333_power__f_00652630._0_4_;
  fVar5 = sinf(param_6);
  fVar6 = cosf(param_6);
  startNewSubPath(fVar5 * fVar8 + fVar4,fVar7 - fVar6 * fVar9,param_7);
  fVar6 = (fVar8 + fVar8) * DAT_005d9044;
  fVar10 = (fVar9 + fVar9) * DAT_005d9044;
  fVar4 = (fVar4 - fVar8) + fVar6;
  fVar5 = (fVar7 - fVar9) + fVar10;
LAB_002f2f5c:
  addCentredArc(fVar4,fVar5,fVar6,fVar10,0.0,param_6,param_5,param_7,'\0');
  iVar1 = *(int *)(param_7 + 0xc);
  if ((iVar1 != 0) &&
     (((iVar1 < 1 ||
       (fVar4 = *(float *)(*(long *)param_7 + (ulong)(iVar1 - 1) * 4), fVar4 != DAT_005de41c)) ||
      (NAN(fVar4) || NAN(DAT_005de41c))))) {
    if ((int)*(uint *)(param_7 + 8) <= iVar1) {
      uVar3 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_7 + 8) != uVar3) {
        if ((int)uVar3 < 1) {
          free(*(void **)param_7);
          *(undefined8 *)param_7 = 0;
        }
        else {
          pvVar2 = realloc(*(void **)param_7,(ulong)uVar3 << 2);
          *(void **)param_7 = pvVar2;
        }
      }
      *(uint *)(param_7 + 8) = uVar3;
      iVar1 = *(int *)(param_7 + 0xc);
    }
    *(int *)(param_7 + 0xc) = iVar1 + 1;
    *(undefined4 *)(*(long *)param_7 + (long)iVar1 * 4) = 0x47c35280;
    return;
  }
  return;
}


