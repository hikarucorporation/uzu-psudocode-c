// Function : generate<juce::PixelAlpha>
// Namespace: juce:RenderingHelpers:EdgeTableFillers:TransformedImageFill_juce__PixelAlpha_juce__PixelAlpha_true_
// Entry    : 003466e0
// Prototype: void generate<juce::PixelAlpha>(float * param_1, byte * param_2, int param_3)
// Body     : 003466e0 - 00346898


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelAlpha,
   juce::PixelAlpha, true>::generate<juce::PixelAlpha>(juce::PixelAlpha*, int, int) */

void __cdecl
juce::RenderingHelpers::EdgeTableFillers::
TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,true>::generate<juce::PixelAlpha>
          (float *param_1,byte *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = _UNK_005dd2d4;
  fVar4 = _DAT_005dd2d0;
  fVar11 = (float)param_3 + param_1[0x10];
  fVar10 = (float)(int)param_1[0x1a] + param_1[0x10];
  fVar13 = DAT_005d9038 + fVar11;
  fVar14 = param_1[1] * fVar10;
  fVar10 = fVar10 * param_1[4];
  fVar15 = (param_1[2] + *param_1 * fVar13 + fVar14) * _DAT_005dd2d0;
  uVar12 = (uint)((param_1[2] + *param_1 * fVar11 + fVar14) * _UNK_005dd2d4);
  param_1[7] = 1.4013e-45;
  uVar2 = (int)param_1[0x11] + uVar12;
  fVar14 = (float)(~uVar12 + (int)fVar15);
  param_1[8] = fVar14;
  uVar9 = (uint)((param_1[5] + param_1[3] * fVar11 + fVar10) * fVar3);
  param_1[0xc] = 1.4013e-45;
  uVar12 = (int)param_1[0x11] + uVar9;
  fVar4 = (float)(~uVar9 + (int)((param_1[5] + param_1[3] * fVar13 + fVar10) * fVar4));
  param_1[0xd] = fVar4;
  param_1[9] = 0.0;
  param_1[10] = 1.4013e-45;
  param_1[6] = (float)((int)fVar14 + uVar2 + 1);
  param_1[0xe] = 1.4013e-45;
  param_1[0xf] = 1.4013e-45;
  param_1[0xe] = 0.0;
  param_1[0xb] = (float)((int)fVar4 + uVar12 + 1);
  plVar1 = *(long **)(param_1 + 0x14);
  iVar5 = (int)(CONCAT44((int)uVar2 >> 0x1f,(int)uVar2 >> 8) %
               (long)(int)*(uint *)((long)plVar1 + 0x1c));
  fVar3 = (float)((iVar5 >> 0x1f & *(uint *)((long)plVar1 + 0x1c)) + iVar5);
  iVar5 = (int)(CONCAT44((int)uVar12 >> 0x1f,(int)uVar12 >> 8) % (long)(int)*(uint *)(plVar1 + 4));
  fVar4 = (float)((iVar5 >> 0x1f & *(uint *)(plVar1 + 4)) + iVar5);
  lVar7 = (long)*(int *)((long)plVar1 + 0x14);
  lVar8 = (long)(int)plVar1[3];
  pbVar6 = (byte *)((int)fVar3 * lVar8 + (int)fVar4 * lVar7 + *plVar1);
  if (((param_1[0x17] == 0.0) || ((uint)param_1[0x18] <= (uint)fVar3)) ||
     ((uint)param_1[0x19] <= (uint)fVar4)) {
    *param_2 = *pbVar6;
    return;
  }
  uVar2 = uVar2 & 0xff;
  *param_2 = (byte)(((uint)pbVar6[lVar7] * (0x100 - uVar2) + pbVar6[lVar7 + lVar8] * uVar2) *
                    (uVar12 & 0xff) +
                    (pbVar6[lVar8] * uVar2 + (uint)*pbVar6 * (0x100 - uVar2)) *
                    (0x100 - (uVar12 & 0xff)) + 0x8000 >> 0x10);
  return;
}


