// Function : applySingleChannelBoxBlurEffectInArea
// Namespace: juce:ImagePixelData
// Entry    : 0032f060
// Prototype: undefined applySingleChannelBoxBlurEffectInArea(long * param_1, ulong param_2, undefined8 param_3, int param_4)
// Body     : 0032f060 - 0032f2b9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ImagePixelData::applySingleChannelBoxBlurEffectInArea(juce::Rectangle<int>, int) */

void __cdecl
juce::ImagePixelData::applySingleChannelBoxBlurEffectInArea
          (long *param_1,ulong param_2,ulong param_3,int param_4)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  long local_60 [2];
  int local_4c;
  undefined8 local_44;
  long *local_38;
  
  if (*(int *)((long)param_1 + 0xc) == 3) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    local_38 = (long *)0x0;
                    /* try { // try from 0032f0a8 to 0032f0b7 has its CatchHandler @ 0032f2ba */
    local_44 = param_3;
    (**(code **)(*param_1 + 0x38))(param_1,local_60,param_2 & 0xffffffff,param_2 >> 0x20,2);
    LOCK();
    plVar1 = param_1 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar5 = local_44;
    if ((int)*plVar1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      uVar5 = local_44;
    }
    local_44._4_4_ = (uint)(uVar5 >> 0x20);
    local_44._0_4_ = (int)uVar5;
    lVar16 = (long)local_4c;
    if ((0xffffffff < (long)uVar5) && (0 < param_4)) {
      pbVar18 = (byte *)(local_60[0] + 2);
      uVar14 = 0;
      do {
        lVar17 = uVar14 * lVar16;
        iVar15 = param_4 * 2;
        do {
          bVar2 = *(byte *)(local_60[0] + lVar17);
          bVar3 = *(byte *)(local_60[0] + 1 + lVar17);
          *(char *)(local_60[0] + lVar17) =
               (char)(((uint)bVar3 + (uint)bVar2) * 0xaaab + 0xaaab >> 0x11);
          pbVar6 = pbVar18;
          iVar7 = (int)local_44 + -1;
          uVar12 = (uint)bVar3;
          uVar13 = (uint)bVar2;
          do {
            uVar11 = uVar12;
            pbVar9 = pbVar6;
            uVar12 = (uint)*pbVar9;
            pbVar9[-1] = (byte)((uVar13 + uVar11 + uVar12 + 1) / 3);
            iVar7 = iVar7 + -1;
            pbVar6 = pbVar9 + 1;
            uVar13 = uVar11;
          } while (1 < iVar7);
          *pbVar9 = (byte)((uVar11 + uVar12 + 1) / 3);
          bVar4 = 1 < iVar15;
          iVar15 = iVar15 + -1;
        } while (bVar4);
        uVar14 = uVar14 + 1;
        pbVar18 = pbVar18 + lVar16;
      } while (uVar14 != local_44._4_4_);
    }
    if ((0 < (int)local_44) && (0 < param_4)) {
      lVar17 = local_60[0] + lVar16;
      lVar10 = local_60[0] + lVar16 * 2;
      uVar14 = 0;
      do {
        pbVar18 = (byte *)(local_60[0] + uVar14);
        iVar15 = param_4 * 2;
        do {
          bVar2 = *pbVar18;
          *pbVar18 = (byte)(((uint)pbVar18[lVar16] + (uint)bVar2) * 0xaaab + 0xaaab >> 0x11);
          lVar8 = 0;
          iVar7 = local_44._4_4_ - 1;
          uVar12 = (uint)bVar2;
          do {
            uVar13 = (uint)*(byte *)(lVar17 + lVar8);
            *(char *)(lVar17 + lVar8) =
                 (char)(((uint)*(byte *)(lVar10 + lVar8) + uVar12 + uVar13 + 1) / 3);
            iVar7 = iVar7 + -1;
            lVar8 = lVar8 + lVar16;
            uVar12 = uVar13;
          } while (1 < iVar7);
          *(char *)(lVar17 + lVar8) = (char)((*(byte *)(lVar17 + lVar8) + uVar13 + 1) / 3);
          bVar4 = 1 < iVar15;
          iVar15 = iVar15 + -1;
        } while (bVar4);
        uVar14 = uVar14 + 1;
        lVar17 = lVar17 + 1;
        lVar10 = lVar10 + 1;
      } while (uVar14 != (uVar5 & 0xffffffff));
    }
    if (local_38 != (long *)0x0) {
      local_44 = uVar5;
      (**(code **)(*local_38 + 8))();
    }
  }
  return;
}


