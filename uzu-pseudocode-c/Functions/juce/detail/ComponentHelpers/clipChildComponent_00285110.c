// Function : clipChildComponent
// Namespace: juce:detail:ComponentHelpers
// Entry    : 00285110
// Prototype: byte clipChildComponent(ComponentHelpers * this, long param_1, undefined8 param_2, undefined8 param_3, long param_4)
// Body     : 00285110 - 002852b9


/* juce::detail::ComponentHelpers::clipChildComponent(juce::Component const&, juce::Graphics&,
   juce::Rectangle<int>, juce::Point<int>) */

byte __thiscall
juce::detail::ComponentHelpers::clipChildComponent
          (ComponentHelpers *this,long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_40;
  undefined8 local_38;
  
  bVar6 = 0;
  if (((*(ushort *)(this + 0xe8) & 2) == 0) || (*(long *)(this + 0x50) != 0)) goto LAB_002852a5;
  uVar1 = *(ulong *)(this + 0x38);
  iVar5 = (int)param_2;
  iVar9 = (int)uVar1;
  iVar10 = iVar5;
  if (iVar5 < iVar9) {
    iVar10 = iVar9;
  }
  iVar4 = (int)((ulong)param_2 >> 0x20);
  iVar3 = (int)(uVar1 >> 0x20);
  iVar8 = iVar4;
  if (iVar4 < iVar3) {
    iVar8 = iVar3;
  }
  iVar5 = iVar5 + (int)param_3;
  iVar7 = (int)*(undefined8 *)(this + 0x40) + iVar9;
  if (iVar7 < iVar5) {
    iVar5 = iVar7;
  }
  iVar5 = iVar5 - iVar10;
  if (-1 < iVar5) {
    iVar4 = (int)((ulong)param_3 >> 0x20) + iVar4;
    iVar7 = (int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) + iVar3;
    if (iVar4 <= iVar7) {
      iVar7 = iVar4;
    }
    bVar6 = 0;
    iVar7 = iVar7 - iVar8;
    if (((iVar7 < 0) || (iVar5 == 0)) || (iVar7 == 0)) goto LAB_002852a5;
    uVar13 = CONCAT44(iVar7,iVar5);
    if (((*(ushort *)(this + 0xe8) & 4) != 0) && (this[0xec] == (ComponentHelpers)0x0)) {
      local_40 = CONCAT44(iVar8 + (int)((ulong)param_4 >> 0x20),iVar10 + (int)param_4);
      local_38 = uVar13;
      if (*(char *)(param_1 + 0x10) != '\0') {
        *(undefined1 *)(param_1 + 0x10) = 0;
        (**(code **)(**(long **)(param_1 + 8) + 0x70))();
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x40))(*(long **)(param_1 + 8),&local_40);
      bVar6 = 1;
      goto LAB_002852a5;
    }
    uVar11 = *(uint *)(this + 100);
    if (0 < (int)uVar11) {
      uVar12 = (ulong)uVar11 + 1;
      bVar6 = 0;
      do {
        uVar11 = uVar11 - 1;
        bVar2 = clipChildComponent(*(ComponentHelpers **)
                                    (*(long *)(this + 0x58) + (ulong)uVar11 * 8),param_1,
                                   CONCAT44(iVar8 - iVar3,iVar10 - iVar9),uVar13,
                                   (ulong)(uint)((int)param_4 + iVar9) |
                                   (uVar1 & 0xffffffff00000000) + param_4 & 0xffffffff00000000);
        bVar6 = bVar6 | bVar2;
        uVar12 = uVar12 - 1;
      } while (1 < uVar12);
      goto LAB_002852a5;
    }
  }
  bVar6 = 0;
LAB_002852a5:
  return bVar6 & 1;
}


