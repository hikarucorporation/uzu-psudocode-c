// Function : clipToRectangle
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1a30
// Prototype: undefined clipToRectangle(long * param_1, long param_2, undefined8 param_3, undefined8 param_4)
// Body     : 003b1a30 - 003b1bf2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToRectangle(juce::Rectangle<int>)
    */

void __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToRectangle
          (long *param_1,long param_2,undefined8 param_3,long param_4)

{
  int *__dest;
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  
  if (((int)param_4 < 1) || (param_4 < 0x100000000)) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x1c);
    if (0 < (int)uVar8) {
      iVar1 = (int)param_3;
      iVar12 = (int)param_4 + iVar1;
      iVar2 = (int)((ulong)param_3 >> 0x20);
      iVar11 = (int)((ulong)param_4 >> 0x20) + iVar2;
      iVar14 = -uVar8;
      lVar13 = (ulong)uVar8 + 1;
      do {
        uVar8 = uVar8 - 1;
        lVar5 = *(long *)(param_2 + 0x10);
        lVar7 = (ulong)uVar8 * 0x10;
        iVar10 = *(int *)(lVar5 + lVar7);
        iVar3 = iVar10;
        if (iVar10 < iVar1) {
          iVar3 = iVar1;
        }
        iVar10 = iVar10 + *(int *)(lVar5 + 8 + lVar7);
        iVar6 = iVar12;
        if (iVar10 <= iVar12) {
          iVar6 = iVar10;
        }
        __dest = (int *)(lVar5 + lVar7);
        *(int *)(lVar5 + 8 + lVar7) = iVar6 - iVar3;
        if (iVar6 - iVar3 == 0 || iVar6 < iVar3) {
LAB_003b1b20:
          if (uVar8 < *(uint *)(param_2 + 0x1c)) {
            memmove(__dest,__dest + 4,(long)(int)(*(uint *)(param_2 + 0x1c) + iVar14) << 4);
            iVar10 = *(int *)(param_2 + 0x1c);
            uVar15 = iVar10 - 1;
            *(uint *)(param_2 + 0x1c) = uVar15;
            iVar10 = iVar10 * 2 + -2;
            if (iVar10 < 0) {
              iVar10 = 0;
            }
            if (iVar10 < *(int *)(param_2 + 0x18)) {
              if ((int)uVar15 < 5) {
                uVar15 = 4;
              }
              if ((int)uVar15 < *(int *)(param_2 + 0x18)) {
                pvVar4 = realloc(*(void **)(param_2 + 0x10),(ulong)uVar15 << 4);
                *(void **)(param_2 + 0x10) = pvVar4;
                *(uint *)(param_2 + 0x18) = uVar15;
              }
            }
          }
        }
        else {
          lVar5 = lVar5 + lVar7;
          iVar10 = *(int *)(lVar5 + 4);
          iVar6 = iVar10;
          if (iVar10 < iVar2) {
            iVar6 = iVar2;
          }
          iVar10 = iVar10 + *(int *)(lVar5 + 0xc);
          iVar9 = iVar11;
          if (iVar10 <= iVar11) {
            iVar9 = iVar10;
          }
          *(int *)(lVar5 + 0xc) = iVar9 - iVar6;
          if (iVar9 - iVar6 == 0 || iVar9 < iVar6) goto LAB_003b1b20;
          *__dest = iVar3;
          *(int *)(lVar5 + 4) = iVar6;
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + -1;
      } while (1 < lVar13);
      uVar8 = *(uint *)(param_2 + 0x1c);
    }
    if (uVar8 != 0) {
      *param_1 = param_2;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


