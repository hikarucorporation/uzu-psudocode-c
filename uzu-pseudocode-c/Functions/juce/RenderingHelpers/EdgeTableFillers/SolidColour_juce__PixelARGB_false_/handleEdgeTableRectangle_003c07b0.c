// Function : handleEdgeTableRectangle
// Namespace: juce:RenderingHelpers:EdgeTableFillers:SolidColour_juce__PixelARGB_false_
// Entry    : 003c07b0
// Prototype: undefined handleEdgeTableRectangle(SolidColour<juce::PixelARGB,false> * this, int param_1, int param_2, int param_3, int param_4, int param_5)
// Body     : 003c07b0 - 003c093c


/* juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,
   false>::handleEdgeTableRectangle(int, int, int, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,false>::
handleEdgeTableRectangle
          (SolidColour<juce::PixelARGB,false> *this,int param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  
  uVar2 = (*(uint *)(this + 0x10) >> 8 & 0xff00ff) * (param_5 + 1);
  uVar10 = (*(uint *)(this + 0x10) & 0xff00ff) * (param_5 + 1) >> 8 & 0xff00ff;
  plVar1 = *(long **)this;
  lVar4 = (long)*(int *)((long)plVar1 + 0x14) * (long)param_2 + *plVar1;
  *(long *)(this + 8) = lVar4;
  iVar5 = (int)plVar1[3];
  puVar9 = (uint *)(param_1 * iVar5 + lVar4);
  if (uVar2 < 0xff000000) {
    iVar8 = 0x100 - (uVar2 >> 0x18);
    while( true ) {
      puVar7 = puVar9;
      iVar11 = param_3 + 1;
      do {
        uVar3 = ((*puVar7 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + uVar10;
        uVar6 = ((*puVar7 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + (uVar2 >> 8 & 0xff00ff);
        *puVar7 = ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                  (0x100 - (uVar3 >> 8 & 0x10001) | uVar3) & 0xff00ff;
        puVar7 = (uint *)((long)puVar7 + (long)iVar5);
        iVar11 = iVar11 + -1;
      } while (1 < iVar11);
      if (param_4 < 2) break;
      puVar9 = (uint *)((long)puVar9 + (long)*(int *)(*(long *)this + 0x14));
      param_4 = param_4 + -1;
      iVar5 = *(int *)(*(long *)this + 0x18);
    }
  }
  else {
    while( true ) {
      puVar7 = puVar9;
      iVar8 = param_3 + 1;
      do {
        *puVar7 = uVar2 & 0xff000000 | uVar2 & 0xff00 | uVar10;
        puVar7 = (uint *)((long)puVar7 + (long)iVar5);
        iVar8 = iVar8 + -1;
      } while (1 < iVar8);
      if (param_4 < 2) break;
      puVar9 = (uint *)((long)puVar9 + (long)*(int *)(*(long *)this + 0x14));
      param_4 = param_4 + -1;
      iVar5 = *(int *)(*(long *)this + 0x18);
    }
  }
  return;
}


