// Function : generate<juce::PixelAlpha>
// Namespace: juce:RenderingHelpers:EdgeTableFillers:TransformedImageFill_juce__PixelRGB_juce__PixelAlpha_false_
// Entry    : 00347960
// Prototype: void generate<juce::PixelAlpha>(TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> * this, undefined1 * param_1, int param_2, int param_3)
// Body     : 00347960 - 00347cb8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelRGB,
   juce::PixelAlpha, false>::generate<juce::PixelAlpha>(juce::PixelAlpha*, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::
TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>::generate<juce::PixelAlpha>
          (TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> *this,undefined1 *param_1,
          int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar22 = (float)param_2 + *(float *)(this + 0x40);
  fVar20 = (float)*(int *)(this + 0x68) + *(float *)(this + 0x40);
  fVar23 = *(float *)(this + 4) * fVar20;
  fVar20 = fVar20 * *(float *)(this + 0x10);
  fVar24 = (*(float *)(this + 8) + *(float *)this * ((float)param_3 + fVar22) + fVar23) *
           _DAT_005dd2d0;
  iVar21 = (int)((*(float *)(this + 8) + *(float *)this * fVar22 + fVar23) * _UNK_005dd2d4);
  *(int *)(this + 0x1c) = param_3;
  lVar17 = (long)((int)fVar24 - iVar21);
  uVar14 = lVar17 / (long)param_3;
  uVar15 = lVar17 % (long)param_3;
  iVar5 = (int)uVar15;
  uVar15 = uVar15 & 0xffffffff;
  iVar4 = (int)uVar14;
  uVar14 = uVar14 & 0xffffffff;
  *(int *)(this + 0x20) = iVar4;
  *(int *)(this + 0x28) = iVar5;
  if (iVar5 < 1) {
    uVar15 = (ulong)(uint)(iVar5 + param_3);
    *(int *)(this + 0x28) = iVar5 + param_3;
    uVar13 = iVar4 - 1;
    uVar14 = (ulong)uVar13;
    *(uint *)(this + 0x20) = uVar13;
  }
  fVar23 = (*(float *)(this + 0x14) + *(float *)(this + 0xc) * ((float)param_3 + fVar22) + fVar20) *
           _DAT_005dd2d0;
  iVar19 = (int)((*(float *)(this + 0x14) + *(float *)(this + 0xc) * fVar22 + fVar20) *
                _UNK_005dd2d4);
  *(int *)(this + 0x30) = param_3;
  iVar4 = (int)fVar23 - iVar19;
  iVar5 = iVar4 / param_3;
  iVar4 = iVar4 % param_3;
  *(int *)(this + 0x34) = iVar5;
  *(int *)(this + 0x3c) = iVar4;
  *(int *)(this + 0x2c) = iVar19 + *(int *)(this + 0x44);
  if (iVar4 < 1) {
    iVar4 = iVar4 + param_3;
    *(int *)(this + 0x3c) = iVar4;
    *(int *)(this + 0x34) = iVar5 + -1;
  }
  uVar13 = *(int *)(this + 0x44) + iVar21;
  iVar5 = (int)uVar15 - param_3;
  *(int *)(this + 0x38) = iVar4 - param_3;
  do {
    iVar21 = (int)uVar14 + uVar13;
    iVar4 = iVar5 + (int)uVar15;
    *(int *)(this + 0x24) = iVar4;
    *(int *)(this + 0x18) = iVar21;
    if (iVar4 != 0 && SCARRY4(iVar5,(int)uVar15) == iVar4 < 0) {
      *(int *)(this + 0x24) = iVar4 - *(int *)(this + 0x1c);
      *(int *)(this + 0x18) = iVar21 + 1;
    }
    uVar10 = *(uint *)(this + 0x2c);
    iVar4 = *(int *)(this + 0x38);
    iVar5 = iVar4 + *(int *)(this + 0x3c);
    *(int *)(this + 0x38) = iVar5;
    *(uint *)(this + 0x2c) = *(int *)(this + 0x34) + uVar10;
    if (iVar5 != 0 && SCARRY4(iVar4,*(int *)(this + 0x3c)) == iVar5 < 0) {
      *(int *)(this + 0x38) = iVar5 - *(int *)(this + 0x30);
      *(uint *)(this + 0x2c) = *(int *)(this + 0x34) + uVar10 + 1;
    }
    uVar6 = (int)uVar13 >> 8;
    uVar7 = (int)uVar10 >> 8;
    uVar2 = *(uint *)(this + 0x60);
    if (*(int *)(this + 0x5c) == 0) {
      uVar11 = *(uint *)(this + 100);
LAB_00347bc0:
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      if ((int)uVar2 < (int)uVar6) {
        uVar6 = uVar2;
      }
      if ((int)uVar11 < (int)uVar7) {
        uVar7 = uVar11;
      }
      plVar3 = *(long **)(this + 0x50);
      *param_1 = *(undefined1 *)
                  ((long)(int)plVar3[3] * (long)(int)uVar6 +
                  (long)*(int *)((long)plVar3 + 0x14) * (long)(int)uVar7 + *plVar3);
    }
    else {
      uVar11 = *(uint *)(this + 100);
      if (uVar6 < uVar2) {
        if (uVar7 < uVar11) {
          plVar3 = *(long **)(this + 0x50);
          lVar16 = (long)*(int *)((long)plVar3 + 0x14);
          lVar8 = (int)uVar7 * lVar16 + *plVar3;
          lVar18 = (long)(int)plVar3[3];
          lVar17 = lVar8 + (int)uVar6 * lVar18;
          uVar13 = uVar13 & 0xff;
          lVar12 = lVar17 + lVar18;
          *param_1 = (char)(((uint)*(byte *)((lVar12 + lVar16) - lVar18) * (0x100 - uVar13) +
                            *(byte *)(lVar16 + lVar12) * uVar13) * (uVar10 & 0xff) +
                            (*(byte *)(lVar18 + lVar17) * uVar13 +
                            (uint)*(byte *)((int)uVar6 * lVar18 + lVar8) * (0x100 - uVar13)) *
                            (0x100 - (uVar10 & 0xff)) + 0x8000 >> 0x10);
          goto joined_r0x00347b4d;
        }
        plVar3 = *(long **)(this + 0x50);
        lVar17 = *plVar3;
        if ((int)uVar10 < 0) {
          lVar16 = (long)(int)plVar3[3];
          lVar12 = (int)uVar6 * lVar16;
          lVar8 = lVar17 + lVar12;
          bVar1 = *(byte *)(lVar17 + lVar12);
        }
        else {
          lVar17 = lVar17 + (long)*(int *)((long)plVar3 + 0x14) * (long)(int)uVar11;
          lVar16 = (long)(int)plVar3[3];
          lVar12 = (int)uVar6 * lVar16;
          lVar8 = lVar17 + lVar12;
          bVar1 = *(byte *)(lVar12 + lVar17);
        }
        uVar10 = uVar13 & 0xff;
        iVar4 = (0x100 - uVar10) * (uint)bVar1;
        bVar1 = *(byte *)(lVar16 + lVar8);
LAB_00347c83:
        iVar4 = bVar1 * uVar10 + iVar4;
      }
      else {
        if (uVar11 <= uVar7) goto LAB_00347bc0;
        plVar3 = *(long **)(this + 0x50);
        lVar17 = (long)*(int *)((long)plVar3 + 0x14);
        pbVar9 = (byte *)((int)uVar7 * lVar17 + *plVar3);
        if (-1 < (int)uVar13) {
          lVar8 = (long)(int)plVar3[3] * (long)(int)uVar2;
          uVar10 = uVar10 & 0xff;
          iVar4 = (0x100 - uVar10) * (uint)pbVar9[lVar8];
          bVar1 = pbVar9[lVar17 + lVar8];
          goto LAB_00347c83;
        }
        iVar4 = (uint)pbVar9[lVar17] * (uVar10 & 0xff) + (0x100 - (uVar10 & 0xff)) * (uint)*pbVar9;
      }
      *param_1 = (char)((uint)(iVar4 + 0x80) >> 8);
    }
joined_r0x00347b4d:
    if (param_3 < 2) {
      return;
    }
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    uVar13 = *(uint *)(this + 0x18);
    uVar14 = (ulong)*(uint *)(this + 0x20);
    uVar15 = (ulong)*(uint *)(this + 0x28);
    iVar5 = *(int *)(this + 0x24);
  } while( true );
}


