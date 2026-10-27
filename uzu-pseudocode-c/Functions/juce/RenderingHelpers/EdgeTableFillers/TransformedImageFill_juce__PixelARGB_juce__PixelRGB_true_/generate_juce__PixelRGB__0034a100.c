// Function : generate<juce::PixelRGB>
// Namespace: juce:RenderingHelpers:EdgeTableFillers:TransformedImageFill_juce__PixelARGB_juce__PixelRGB_true_
// Entry    : 0034a100
// Prototype: void generate<juce::PixelRGB>(TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> * this, long param_1, int param_2, int param_3)
// Body     : 0034a100 - 0034a422


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelARGB,
   juce::PixelRGB, true>::generate<juce::PixelRGB>(juce::PixelRGB*, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>
::generate<juce::PixelRGB>
          (TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> *this,long param_1,int param_2,
          int param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_64;
  int local_60;
  
  fVar25 = (float)param_2 + *(float *)(this + 0x40);
  fVar23 = (float)*(int *)(this + 0x68) + *(float *)(this + 0x40);
  fVar26 = *(float *)(this + 4) * fVar23;
  fVar23 = fVar23 * *(float *)(this + 0x10);
  fVar27 = (*(float *)(this + 8) + *(float *)this * ((float)param_3 + fVar25) + fVar26) *
           _DAT_005dd2d0;
  iVar24 = (int)((*(float *)(this + 8) + *(float *)this * fVar25 + fVar26) * _UNK_005dd2d4);
  *(int *)(this + 0x1c) = param_3;
  iVar5 = (int)fVar27 - iVar24;
  local_60 = iVar5 / param_3;
  iVar5 = iVar5 % param_3;
  *(int *)(this + 0x20) = local_60;
  *(int *)(this + 0x28) = iVar5;
  if (iVar5 < 1) {
    iVar5 = iVar5 + param_3;
    *(int *)(this + 0x28) = iVar5;
    local_60 = local_60 + -1;
    *(int *)(this + 0x20) = local_60;
  }
  fVar26 = (*(float *)(this + 0x14) + *(float *)(this + 0xc) * ((float)param_3 + fVar25) + fVar23) *
           _DAT_005dd2d0;
  iVar22 = (int)((*(float *)(this + 0x14) + *(float *)(this + 0xc) * fVar25 + fVar23) *
                _UNK_005dd2d4);
  *(int *)(this + 0x30) = param_3;
  iVar6 = (int)fVar26 - iVar22;
  iVar7 = iVar6 / param_3;
  iVar6 = iVar6 % param_3;
  *(int *)(this + 0x34) = iVar7;
  *(int *)(this + 0x3c) = iVar6;
  *(int *)(this + 0x2c) = iVar22 + *(int *)(this + 0x44);
  if (iVar6 < 1) {
    iVar6 = iVar6 + param_3;
    *(int *)(this + 0x3c) = iVar6;
    iVar7 = iVar7 + -1;
    *(int *)(this + 0x34) = iVar7;
  }
  uVar16 = *(int *)(this + 0x44) + iVar24;
  iVar22 = iVar5 - param_3;
  *(int *)(this + 0x38) = iVar6 - param_3;
  plVar3 = *(long **)(this + 0x50);
  uVar1 = *(uint *)((long)plVar3 + 0x1c);
  uVar2 = *(uint *)(plVar3 + 4);
  iVar24 = *(int *)(this + 0x5c);
  pbVar15 = (byte *)(param_1 + 2);
  local_64 = param_3;
  while( true ) {
    iVar13 = iVar22 + iVar5;
    *(int *)(this + 0x24) = iVar13;
    *(uint *)(this + 0x18) = local_60 + uVar16;
    if (iVar13 != 0 && SCARRY4(iVar22,iVar5) == iVar13 < 0) {
      *(int *)(this + 0x24) = iVar13 - param_3;
      *(uint *)(this + 0x18) = local_60 + uVar16 + 1;
    }
    uVar17 = *(uint *)(this + 0x2c);
    iVar22 = *(int *)(this + 0x38);
    iVar13 = iVar22 + iVar6;
    *(int *)(this + 0x38) = iVar13;
    *(uint *)(this + 0x2c) = iVar7 + uVar17;
    if (iVar13 != 0 && SCARRY4(iVar22,iVar6) == iVar13 < 0) {
      *(int *)(this + 0x38) = iVar13 - param_3;
      *(uint *)(this + 0x2c) = iVar7 + uVar17 + 1;
    }
    iVar22 = (int)(CONCAT44((int)uVar16 >> 0x1f,(int)uVar16 >> 8) % (long)(int)uVar1);
    uVar14 = (iVar22 >> 0x1f & uVar1) + iVar22;
    iVar22 = (int)(CONCAT44((int)uVar17 >> 0x1f,(int)uVar17 >> 8) % (long)(int)uVar2);
    uVar11 = (iVar22 >> 0x1f & uVar2) + iVar22;
    lVar18 = (long)*(int *)((long)plVar3 + 0x14);
    lVar20 = (long)(int)plVar3[3];
    pbVar8 = (byte *)((int)uVar14 * lVar20 + (int)uVar11 * lVar18 + *plVar3);
    if (((iVar24 == 0) || (*(uint *)(this + 0x60) <= uVar14)) || (*(uint *)(this + 100) <= uVar11))
    {
      bVar12 = *pbVar8;
      bVar10 = pbVar8[1];
      bVar4 = pbVar8[2];
    }
    else {
      uVar16 = uVar16 & 0xff;
      uVar17 = uVar17 & 0xff;
      iVar13 = (0x100 - uVar17) * (0x100 - uVar16);
      iVar22 = (0x100 - uVar17) * uVar16;
      iVar21 = uVar16 * uVar17;
      pbVar9 = pbVar8 + lVar18;
      iVar19 = (0x100 - uVar16) * uVar17;
      bVar4 = (byte)((uint)pbVar9[2] * iVar19 +
                     (uint)pbVar8[lVar18 + 2 + lVar20] * iVar21 +
                     (uint)pbVar8[lVar20 + 2] * iVar22 + (uint)pbVar8[2] * iVar13 + 0x8000 >> 0x10);
      bVar10 = (byte)((uint)pbVar9[1] * iVar19 +
                      (uint)pbVar8[lVar18 + 1 + lVar20] * iVar21 +
                      (uint)pbVar8[lVar20 + 1] * iVar22 + (uint)pbVar8[1] * iVar13 + 0x8000 >> 0x10)
      ;
      bVar12 = (byte)((uint)*pbVar9 * iVar19 +
                      (uint)pbVar8[lVar18 + lVar20] * iVar21 +
                      (uint)pbVar8[lVar20] * iVar22 + (uint)*pbVar8 * iVar13 + 0x8000 >> 0x10);
    }
    *pbVar15 = bVar4;
    pbVar15[-1] = bVar10;
    pbVar15[-2] = bVar12;
    if (local_64 < 2) break;
    local_64 = local_64 + -1;
    uVar16 = *(uint *)(this + 0x18);
    iVar22 = *(int *)(this + 0x24);
    pbVar15 = pbVar15 + 3;
  }
  return;
}


