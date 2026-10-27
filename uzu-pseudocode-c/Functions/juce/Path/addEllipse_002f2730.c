// Function : addEllipse
// Namespace: juce:Path
// Entry    : 002f2730
// Prototype: undefined addEllipse(undefined8 param_1, undefined8 param_2, Path * param_3)
// Body     : 002f2730 - 002f2928


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Path::addEllipse(juce::Rectangle<float>) */

void __cdecl juce::Path::addEllipse(undefined8 param_1,undefined8 param_2,Path *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar7 = (float)param_2 * DAT_005d9044;
  fVar10 = fVar7 * DAT_005de46c;
  fVar6 = (float)((ulong)param_2 >> 0x20) * DAT_005d9044;
  fVar13 = DAT_005de46c * fVar6;
  fVar4 = (float)param_1 + fVar7;
  fVar11 = (float)((ulong)param_1 >> 0x20) + fVar6;
  fVar8 = fVar11 - fVar6;
  startNewSubPath(fVar4,fVar8,param_3);
  fVar5 = fVar4 + fVar10;
  fVar9 = fVar7 + fVar4;
  fVar12 = fVar11 - fVar13;
  cubicTo(fVar5,fVar8,fVar9,fVar12,fVar9,fVar11,param_3);
  fVar13 = fVar13 + fVar11;
  fVar6 = fVar6 + fVar11;
  cubicTo(fVar9,fVar13,fVar5,fVar6,fVar4,fVar6,param_3);
  fVar10 = fVar4 - fVar10;
  fVar7 = fVar4 - fVar7;
  cubicTo(fVar10,fVar6,fVar7,fVar13,fVar7,fVar11,param_3);
  cubicTo(fVar7,fVar12,fVar10,fVar8,fVar4,fVar8,param_3);
  iVar1 = *(int *)(param_3 + 0xc);
  if ((iVar1 != 0) &&
     (((iVar1 < 1 ||
       (fVar4 = *(float *)(*(long *)param_3 + (ulong)(iVar1 - 1) * 4), fVar4 != DAT_005de41c)) ||
      (NAN(fVar4) || NAN(DAT_005de41c))))) {
    if ((int)*(uint *)(param_3 + 8) <= iVar1) {
      uVar3 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_3 + 8) != uVar3) {
        if ((int)uVar3 < 1) {
          free(*(void **)param_3);
          *(undefined8 *)param_3 = 0;
        }
        else {
          pvVar2 = realloc(*(void **)param_3,(ulong)uVar3 << 2);
          *(void **)param_3 = pvVar2;
        }
      }
      *(uint *)(param_3 + 8) = uVar3;
      iVar1 = *(int *)(param_3 + 0xc);
    }
    *(int *)(param_3 + 0xc) = iVar1 + 1;
    *(undefined4 *)(*(long *)param_3 + (long)iVar1 * 4) = 0x47c35280;
    return;
  }
  return;
}


