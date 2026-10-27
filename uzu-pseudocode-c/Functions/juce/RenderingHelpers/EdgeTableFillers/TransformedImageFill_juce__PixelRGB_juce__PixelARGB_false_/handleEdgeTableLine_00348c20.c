// Function : handleEdgeTableLine
// Namespace: juce:RenderingHelpers:EdgeTableFillers:TransformedImageFill_juce__PixelRGB_juce__PixelARGB_false_
// Entry    : 00348c20
// Prototype: undefined handleEdgeTableLine(TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> * this, int param_1, int param_2, int param_3)
// Body     : 00348c20 - 00348f6d


/* juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelRGB, juce::PixelARGB,
   false>::handleEdgeTableLine(int, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>
::handleEdgeTableLine
          (TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> *this,int param_1,int param_2,
          int param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  
  if (*(int *)(this + 0x80) < param_2) {
    *(long *)(this + 0x80) = (long)param_2;
    free(*(void **)(this + 0x78));
    if (param_2 == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = malloc((long)param_2 << 2);
    }
    *(uint **)(this + 0x78) = puVar5;
  }
  else {
    puVar5 = *(uint **)(this + 0x78);
  }
  generate<juce::PixelARGB>(this,puVar5,param_1,param_2);
  lVar2 = *(long *)(this + 0x70);
  iVar13 = *(int *)(*(long *)(this + 0x48) + 0x18);
  lVar12 = (long)iVar13;
  lVar8 = (long)param_1;
  lVar10 = lVar12 * lVar8;
  if (param_3 * *(int *)(this + 0x58) < 0xfe00) {
    iVar14 = param_3 * *(int *)(this + 0x58) >> 8;
    if (iVar13 == 1) {
      uVar7 = (uint)*(byte *)(lVar8 + 1 + lVar2);
      pbVar6 = (byte *)(lVar2 + lVar10 + 2);
      iVar13 = param_2 + 1;
      do {
        uVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        uVar3 = (uVar11 >> 8 & 0xff00ff) * iVar14;
        iVar9 = 0x100 - (uVar3 >> 0x18);
        iVar4 = ((uVar7 & 0xff) * iVar9 >> 8) + (uVar3 >> 8 & 0xff00ff);
        uVar11 = (((uint)*pbVar6 << 0x10 | (uint)pbVar6[-2]) * iVar9 >> 8 & 0xff00ff) +
                 ((uVar11 & 0xff00ff) * iVar14 >> 8 & 0xff00ff);
        uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
        pbVar6[-1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
        uVar7 = uVar11 >> 0x10;
        *pbVar6 = (byte)(uVar11 >> 0x10);
        pbVar6[-2] = (byte)uVar11;
        pbVar6 = pbVar6 + 1;
        iVar13 = iVar13 + -1;
      } while (1 < iVar13);
    }
    else {
      pbVar6 = (byte *)(lVar2 + lVar10 + 2);
      iVar13 = param_2 + 1;
      do {
        uVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        uVar11 = (uVar7 >> 8 & 0xff00ff) * iVar14;
        iVar9 = 0x100 - (uVar11 >> 0x18);
        iVar4 = ((uint)pbVar6[-1] * iVar9 >> 8) + (uVar11 >> 8 & 0xff00ff);
        uVar7 = (((uint)*pbVar6 << 0x10 | (uint)pbVar6[-2]) * iVar9 >> 8 & 0xff00ff) +
                ((uVar7 & 0xff00ff) * iVar14 >> 8 & 0xff00ff);
        uVar7 = 0x100 - (uVar7 >> 8 & 0x10001) | uVar7;
        pbVar6[-1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
        *pbVar6 = (byte)(uVar7 >> 0x10);
        pbVar6[-2] = (byte)uVar7;
        pbVar6 = pbVar6 + lVar12;
        iVar13 = iVar13 + -1;
      } while (1 < iVar13);
    }
  }
  else if (iVar13 == 1) {
    uVar7 = (uint)*(byte *)(lVar8 + 1 + lVar2);
    pbVar6 = (byte *)(lVar2 + lVar10 + 2);
    iVar13 = param_2 + 1;
    do {
      pbVar1 = (byte *)((long)puVar5 + 3);
      uVar11 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar14 = 0x100 - (uint)*pbVar1;
      uVar3 = (((uint)*pbVar6 << 0x10 | (uint)pbVar6[-2]) * iVar14 >> 8 & 0xff00ff) +
              (uVar11 & 0xff00ff);
      uVar3 = 0x100 - (uVar3 >> 8 & 0x10001) | uVar3;
      iVar14 = ((uVar7 & 0xff) * iVar14 >> 8) + (uVar11 >> 8 & 0xff00ff);
      pbVar6[-1] = -(char)((uint)iVar14 >> 8) | (byte)iVar14;
      uVar7 = uVar3 >> 0x10;
      *pbVar6 = (byte)(uVar3 >> 0x10);
      pbVar6[-2] = (byte)uVar3;
      pbVar6 = pbVar6 + 1;
      iVar13 = iVar13 + -1;
    } while (1 < iVar13);
  }
  else {
    pbVar6 = (byte *)(lVar2 + lVar10 + 2);
    iVar13 = param_2 + 1;
    do {
      pbVar1 = (byte *)((long)puVar5 + 3);
      uVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar14 = 0x100 - (uint)*pbVar1;
      uVar11 = (((uint)*pbVar6 << 0x10 | (uint)pbVar6[-2]) * iVar14 >> 8 & 0xff00ff) +
               (uVar7 & 0xff00ff);
      uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
      iVar14 = ((uint)pbVar6[-1] * iVar14 >> 8) + (uVar7 >> 8 & 0xff00ff);
      pbVar6[-1] = -(char)((uint)iVar14 >> 8) | (byte)iVar14;
      *pbVar6 = (byte)(uVar11 >> 0x10);
      pbVar6[-2] = (byte)uVar11;
      pbVar6 = pbVar6 + lVar12;
      iVar13 = iVar13 + -1;
    } while (1 < iVar13);
  }
  return;
}


