// Function : addSubPath
// Namespace: juce:PathStrokeHelpers
// Entry    : 002f4a90
// Prototype: undefined addSubPath(float param_1, float param_2, Path * param_3, long * param_4, int param_5_00, int param_6, int param_7)
// Body     : 002f4a90 - 002f4f5b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PathStrokeHelpers::addSubPath(juce::Path&,
   juce::Array<juce::PathStrokeHelpers::LineSection, juce::DummyCriticalSection, 0>&, bool, float,
   float, juce::PathStrokeType::JointStyle, juce::PathStrokeType::EndCapStyle,
   juce::PathStrokeHelpers::Arrowhead const*) */

void __cdecl
juce::PathStrokeHelpers::addSubPath
          (float param_1,float param_2,Path *param_3,long *param_4,int param_5_00,int param_6,
          int param_7)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char local_70;
  float local_68;
  float fStack_64;
  
  lVar7 = *param_4;
  fVar9 = (float)*(undefined8 *)(lVar7 + 0x10);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20);
  uVar1 = *(undefined8 *)(lVar7 + 0x18);
  if (param_5_00 == 0) {
    Path::startNewSubPath(*(float *)(lVar7 + 0x28),*(float *)(lVar7 + 0x2c),param_3);
    addLineEnd(*(float *)(lVar7 + 0x28),*(float *)(lVar7 + 0x2c),fVar9,fVar10,param_1,param_3,
               param_7);
  }
  else {
    Path::startNewSubPath(fVar9,fVar10,param_3);
  }
  iVar3 = *(int *)((long)param_4 + 0xc);
  local_68 = (float)uVar1;
  fStack_64 = (float)((ulong)uVar1 >> 0x20);
  if (1 < iVar3) {
    lVar8 = 1;
    lVar7 = 0x4c;
    do {
      lVar6 = *param_4;
      addEdgeAndJoint(param_2,param_1,fVar9,fVar10,local_68,fStack_64,
                      *(float *)(lVar6 + -0xc + lVar7),*(float *)(lVar6 + -8 + lVar7),param_3,
                      param_6);
      fVar9 = *(float *)(lVar6 + -0xc + lVar7);
      fVar10 = *(float *)(lVar6 + -8 + lVar7);
      uVar1 = *(undefined8 *)(lVar6 + -4 + lVar7);
      local_68 = (float)uVar1;
      fStack_64 = (float)((ulong)uVar1 >> 0x20);
      lVar8 = lVar8 + 1;
      iVar3 = *(int *)((long)param_4 + 0xc);
      lVar7 = lVar7 + 0x30;
    } while (lVar8 < iVar3);
  }
  lVar7 = *param_4;
  lVar8 = (long)(iVar3 + -1);
  local_70 = (char)param_5_00;
  if (local_70 == '\0') {
    Path::lineTo(local_68,fStack_64,param_3);
    addLineEnd(local_68,fStack_64,*(float *)(lVar7 + 0x20 + lVar8 * 0x30),
               *(float *)(lVar7 + 0x24 + lVar8 * 0x30),param_1,param_3,param_7);
    goto LAB_002f4d5f;
  }
  addEdgeAndJoint(param_2,param_1,fVar9,fVar10,local_68,fStack_64,*(float *)(lVar7 + 0x10),
                  *(float *)(lVar7 + 0x14),param_3,param_6);
  iVar3 = *(int *)(param_3 + 0xc);
  if (iVar3 != 0) {
    if (0 < iVar3) {
      fVar9 = *(float *)(*(long *)param_3 + (ulong)(iVar3 - 1) * 4);
      if ((fVar9 == DAT_005de41c) && (!NAN(fVar9) && !NAN(DAT_005de41c))) goto LAB_002f4d43;
    }
    if ((int)*(uint *)(param_3 + 8) <= iVar3) {
      uVar5 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_3 + 8) != uVar5) {
        if ((int)uVar5 < 1) {
          free(*(void **)param_3);
          *(undefined8 *)param_3 = 0;
        }
        else {
          pvVar4 = realloc(*(void **)param_3,(ulong)uVar5 << 2);
          *(void **)param_3 = pvVar4;
        }
      }
      *(uint *)(param_3 + 8) = uVar5;
      iVar3 = *(int *)(param_3 + 0xc);
    }
    *(int *)(param_3 + 0xc) = iVar3 + 1;
    *(undefined4 *)(*(long *)param_3 + (long)iVar3 * 4) = 0x47c35280;
  }
LAB_002f4d43:
  Path::startNewSubPath
            (*(float *)(lVar7 + 0x20 + lVar8 * 0x30),*(float *)(lVar7 + 0x24 + lVar8 * 0x30),param_3
            );
LAB_002f4d5f:
  lVar8 = lVar8 * 0x30;
  fVar9 = *(float *)(lVar7 + 0x20 + lVar8);
  fVar10 = *(float *)(lVar7 + 0x24 + lVar8);
  fVar11 = *(float *)(lVar7 + 0x28 + lVar8);
  fVar12 = *(float *)(lVar7 + 0x2c + lVar8);
  if (1 < *(int *)((long)param_4 + 0xc)) {
    lVar6 = (ulong)(*(int *)((long)param_4 + 0xc) - 2) * 0x30 + 0x2c;
    do {
      lVar2 = *param_4;
      addEdgeAndJoint(param_2,param_1,fVar9,fVar10,fVar11,fVar12,*(float *)(lVar2 + -0xc + lVar6),
                      *(float *)(lVar2 + -8 + lVar6),param_3,param_6);
      fVar9 = *(float *)(lVar2 + -0xc + lVar6);
      fVar10 = *(float *)(lVar2 + -8 + lVar6);
      fVar11 = *(float *)(lVar2 + -4 + lVar6);
      fVar12 = *(float *)(lVar2 + lVar6);
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != -4);
  }
  if (local_70 == '\0') {
    Path::lineTo(fVar11,fVar12,param_3);
    iVar3 = *(int *)(param_3 + 0xc);
  }
  else {
    addEdgeAndJoint(param_2,param_1,fVar9,fVar10,fVar11,fVar12,*(float *)(lVar7 + lVar8 + 0x20),
                    *(float *)(lVar7 + lVar8 + 0x24),param_3,param_6);
    iVar3 = *(int *)(param_3 + 0xc);
  }
  if (iVar3 != 0) {
    if (-1 < iVar3) {
      fVar9 = *(float *)(*(long *)param_3 + (ulong)(iVar3 - 1) * 4);
      if ((fVar9 == DAT_005de41c) && (!NAN(fVar9) && !NAN(DAT_005de41c))) {
        return;
      }
    }
    if ((int)*(uint *)(param_3 + 8) <= iVar3) {
      uVar5 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_3 + 8) != uVar5) {
        if ((int)uVar5 < 1) {
          free(*(void **)param_3);
          *(undefined8 *)param_3 = 0;
        }
        else {
          pvVar4 = realloc(*(void **)param_3,(ulong)uVar5 << 2);
          *(void **)param_3 = pvVar4;
        }
      }
      *(uint *)(param_3 + 8) = uVar5;
      iVar3 = *(int *)(param_3 + 0xc);
    }
    *(int *)(param_3 + 0xc) = iVar3 + 1;
    *(undefined4 *)(*(long *)param_3 + (long)iVar3 * 4) = 0x47c35280;
  }
  return;
}


