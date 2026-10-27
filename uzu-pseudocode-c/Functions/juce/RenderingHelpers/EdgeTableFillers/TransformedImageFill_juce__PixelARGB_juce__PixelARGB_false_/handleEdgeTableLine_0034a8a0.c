// Function : handleEdgeTableLine
// Namespace: juce:RenderingHelpers:EdgeTableFillers:TransformedImageFill_juce__PixelARGB_juce__PixelARGB_false_
// Entry    : 0034a8a0
// Prototype: undefined handleEdgeTableLine(TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> * this, int param_1, int param_2, int param_3)
// Body     : 0034a8a0 - 0034aaa9


/* juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelARGB, juce::PixelARGB,
   false>::handleEdgeTableLine(int, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::
TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::handleEdgeTableLine
          (TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> *this,int param_1,int param_2
          ,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(this + 0x80) < param_2) {
    *(long *)(this + 0x80) = (long)param_2;
    free(*(void **)(this + 0x78));
    if (param_2 == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = malloc((long)param_2 << 2);
    }
    *(uint **)(this + 0x78) = puVar2;
  }
  else {
    puVar2 = *(uint **)(this + 0x78);
  }
  generate<juce::PixelARGB>(this,puVar2,param_1,param_2);
  lVar7 = (long)*(int *)(*(long *)(this + 0x48) + 0x18);
  puVar3 = (uint *)(param_1 * lVar7 + *(long *)(this + 0x70));
  if (param_3 * *(int *)(this + 0x58) < 0xfe00) {
    iVar9 = param_3 * *(int *)(this + 0x58) >> 8;
    iVar8 = param_2 + 1;
    do {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      uVar4 = (uVar5 >> 8 & 0xff00ff) * iVar9;
      iVar1 = 0x100 - (uVar4 >> 0x18);
      uVar6 = ((*puVar3 & 0xff00ff) * iVar1 >> 8 & 0xff00ff) +
              ((uVar5 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
      uVar5 = ((*puVar3 >> 8 & 0xff00ff) * iVar1 >> 8 & 0xff00ff) + (uVar4 >> 8 & 0xff00ff);
      *puVar3 = ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                (0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff;
      puVar3 = (uint *)((long)puVar3 + lVar7);
      iVar8 = iVar8 + -1;
    } while (1 < iVar8);
  }
  else {
    iVar8 = param_2 + 1;
    do {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      iVar9 = 0x100 - (uVar5 >> 0x18);
      uVar4 = ((*puVar3 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) + (uVar5 & 0xff00ff);
      uVar5 = ((*puVar3 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) + (uVar5 >> 8 & 0xff00ff);
      *puVar3 = ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                (0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff;
      puVar3 = (uint *)((long)puVar3 + lVar7);
      iVar8 = iVar8 + -1;
    } while (1 < iVar8);
  }
  return;
}


