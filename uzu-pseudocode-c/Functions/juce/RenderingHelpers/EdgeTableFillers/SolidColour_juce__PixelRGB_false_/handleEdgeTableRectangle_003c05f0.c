// Function : handleEdgeTableRectangle
// Namespace: juce:RenderingHelpers:EdgeTableFillers:SolidColour_juce__PixelRGB_false_
// Entry    : 003c05f0
// Prototype: undefined handleEdgeTableRectangle(SolidColour<juce::PixelRGB,false> * this, int param_1, int param_2, int param_3, int param_4, int param_5)
// Body     : 003c05f0 - 003c07ae


/* juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,
   false>::handleEdgeTableRectangle(int, int, int, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,false>::
handleEdgeTableRectangle
          (SolidColour<juce::PixelRGB,false> *this,int param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  uint uVar16;
  void *local_38;
  
  uVar16 = (*(uint *)(this + 0x10) >> 8 & 0xff00ff) * (param_5 + 1);
  uVar10 = (*(uint *)(this + 0x10) & 0xff00ff) * (param_5 + 1);
  plVar9 = *(long **)this;
  lVar2 = *plVar9;
  iVar11 = *(int *)((long)plVar9 + 0x14);
  lVar15 = (long)param_2 * (long)iVar11;
  lVar1 = lVar2 + lVar15;
  *(long *)(this + 8) = lVar1;
  iVar4 = (int)plVar9[3];
  if (uVar16 < 0xff000000) {
    iVar6 = 0x100 - (uVar16 >> 0x18);
    pbVar14 = (byte *)(lVar2 + lVar15 + param_1 * iVar4 + 2);
    do {
      pbVar13 = pbVar14;
      iVar5 = param_3 + 1;
      do {
        uVar12 = (((uint)*pbVar13 << 0x10 | (uint)pbVar13[-2]) * iVar6 >> 8 & 0xff00ff) +
                 (uVar10 >> 8 & 0xff00ff);
        uVar12 = 0x100 - (uVar12 >> 8 & 0x10001) | uVar12;
        iVar8 = ((uint)pbVar13[-1] * iVar6 >> 8) + (uVar16 >> 8 & 0xff00ff);
        pbVar13[-1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
        *pbVar13 = (byte)(uVar12 >> 0x10);
        pbVar13[-2] = (byte)uVar12;
        iVar5 = iVar5 + -1;
        pbVar13 = pbVar13 + iVar4;
      } while (1 < iVar5);
      pbVar14 = pbVar14 + iVar11;
      bVar3 = 1 < param_4;
      param_4 = param_4 + -1;
    } while (bVar3);
    return;
  }
  local_38 = (void *)(lVar1 + param_1 * iVar4);
  if (iVar4 != 3) goto LAB_003c06a0;
  do {
    if (this[0x14] == (SolidColour<juce::PixelRGB,false>)0x0) goto LAB_003c06a0;
    memset(local_38,uVar10 >> 0x18,(long)param_3 * 3);
    plVar9 = *(long **)this;
    while( true ) {
      if (param_4 < 2) {
        return;
      }
      param_4 = param_4 + -1;
      local_38 = (void *)((long)local_38 + (long)*(int *)((long)plVar9 + 0x14));
      iVar4 = (int)plVar9[3];
      if (iVar4 == 3) break;
LAB_003c06a0:
      puVar7 = (undefined1 *)((long)local_38 + 2);
      iVar11 = param_3 + 1;
      do {
        puVar7[-2] = (char)(uVar10 >> 8);
        puVar7[-1] = (char)(uVar16 >> 8);
        *puVar7 = (char)(uVar10 >> 0x18);
        iVar11 = iVar11 + -1;
        puVar7 = puVar7 + iVar4;
      } while (1 < iVar11);
    }
  } while( true );
}


