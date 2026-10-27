// Function : addLineSegment
// Namespace: juce:Path
// Entry    : 002f3000
// Prototype: undefined addLineSegment(undefined8 param_1, undefined8 param_2, float param_3, Path * param_4)
// Body     : 002f3000 - 002f32b2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::Path::addLineSegment(juce::Line<float>, float) */

void __cdecl
juce::Path::addLineSegment(undefined8 param_1,undefined8 param_2,float param_3,Path *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar12;
  float fVar20;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  undefined8 local_78;
  
  fVar11 = (float)((ulong)param_1 >> 0x20);
  fVar10 = (float)param_1;
  fVar21 = param_3 * DAT_005d9044;
  fVar13 = (float)param_2;
  fVar12 = fVar13 - fVar10;
  fVar20 = (float)((ulong)param_2 >> 0x20);
  fVar19 = fVar20 - fVar11;
  dVar4 = hypot((double)fVar12,(double)fVar19);
  uVar5 = param_1;
  if (0.0 < dVar4) {
    auVar14._0_8_ = (double)(fVar12 * 0.0 + fVar21 * (float)((uint)fVar19 ^ _DAT_006524b0));
    auVar14._8_8_ = (double)(fVar19 * 0.0 + fVar21 * fVar12);
    auVar15._8_4_ = SUB84(dVar4,0);
    auVar15._0_8_ = dVar4;
    auVar15._12_4_ = (int)((ulong)dVar4 >> 0x20);
    auVar15 = divpd(auVar14,auVar15);
    uVar5 = CONCAT44((float)auVar15._8_8_ + fVar11,(float)auVar15._0_8_ + fVar10);
  }
  startNewSubPath((float)uVar5,(float)((ulong)uVar5 >> 0x20),param_4);
  fVar9 = (float)(_DAT_006524b0 ^ (uint)fVar21);
  dVar4 = hypot((double)fVar12,(double)fVar19);
  if (0.0 < dVar4) {
    auVar16._0_8_ = (double)(fVar12 * 0.0 + fVar21 * fVar19);
    auVar16._8_8_ = (double)(fVar19 * 0.0 + fVar9 * fVar12);
    auVar1._8_4_ = SUB84(dVar4,0);
    auVar1._0_8_ = dVar4;
    auVar1._12_4_ = (int)((ulong)dVar4 >> 0x20);
    auVar15 = divpd(auVar16,auVar1);
    param_1 = CONCAT44((float)auVar15._8_8_ + fVar11,(float)auVar15._0_8_ + fVar10);
  }
  lineTo((float)param_1,(float)((ulong)param_1 >> 0x20),param_4);
  fVar10 = fVar10 - fVar13;
  fVar11 = fVar11 - fVar20;
  dVar4 = hypot((double)fVar10,(double)fVar11);
  uVar5 = param_2;
  if (0.0 < dVar4) {
    auVar17._0_8_ = (double)(fVar10 * 0.0 + fVar21 * (float)((uint)fVar11 ^ _DAT_006524b0));
    auVar17._8_8_ = (double)(fVar11 * 0.0 + fVar21 * fVar10);
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar4;
    auVar2._12_4_ = (int)((ulong)dVar4 >> 0x20);
    auVar15 = divpd(auVar17,auVar2);
    uVar5 = CONCAT44((float)auVar15._8_8_ + fVar20,(float)auVar15._0_8_ + fVar13);
  }
  lineTo((float)uVar5,(float)((ulong)uVar5 >> 0x20),param_4);
  dVar4 = hypot((double)fVar10,(double)fVar11);
  local_78 = param_2;
  if (0.0 < dVar4) {
    auVar18._0_8_ = (double)(fVar10 * 0.0 + fVar21 * fVar11);
    auVar18._8_8_ = (double)(fVar11 * 0.0 + fVar9 * fVar10);
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulong)dVar4 >> 0x20);
    auVar15 = divpd(auVar18,auVar3);
    local_78 = CONCAT44(fVar20 + (float)auVar15._8_8_,fVar13 + (float)auVar15._0_8_);
  }
  lineTo((float)local_78,local_78._4_4_,param_4);
  iVar6 = *(int *)(param_4 + 0xc);
  if ((iVar6 != 0) &&
     (((iVar6 < 1 ||
       (fVar10 = *(float *)(*(long *)param_4 + (ulong)(iVar6 - 1) * 4), fVar10 != DAT_005de41c)) ||
      (NAN(fVar10) || NAN(DAT_005de41c))))) {
    if ((int)*(uint *)(param_4 + 8) <= iVar6) {
      uVar8 = iVar6 + ((iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_4 + 8) != uVar8) {
        if ((int)uVar8 < 1) {
          free(*(void **)param_4);
          *(undefined8 *)param_4 = 0;
        }
        else {
          pvVar7 = realloc(*(void **)param_4,(ulong)uVar8 << 2);
          *(void **)param_4 = pvVar7;
        }
      }
      *(uint *)(param_4 + 8) = uVar8;
      iVar6 = *(int *)(param_4 + 0xc);
    }
    *(int *)(param_4 + 0xc) = iVar6 + 1;
    *(undefined4 *)(*(long *)param_4 + (long)iVar6 * 4) = 0x47c35280;
    return;
  }
  return;
}


