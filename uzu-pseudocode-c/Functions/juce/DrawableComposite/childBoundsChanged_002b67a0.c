// Function : childBoundsChanged
// Namespace: juce:DrawableComposite
// Entry    : 002b67a0
// Prototype: undefined childBoundsChanged(Component * param_1)
// Body     : 002b67a0 - 002b67a4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableComposite::childBoundsChanged(juce::Component*) */

void __cdecl juce::DrawableComposite::childBoundsChanged(Component *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  Component *this;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  if (param_1[0x188] == (Component)0x0) {
    param_1[0x188] = (Component)0x1;
    lVar2 = *(long *)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 100);
    lVar7 = (long)iVar1;
    if (lVar7 == 0) {
      uVar17 = 0;
      iVar12 = 0;
      iVar9 = 0;
    }
    else {
      lVar14 = 0;
      uVar16 = 0;
      uVar11 = 0;
      uVar17 = 0;
      do {
        uVar13 = (uint)uVar11;
        uVar15 = (uint)uVar16;
        lVar3 = *(long *)(lVar2 + lVar14);
        if (*(float **)(lVar3 + 0x50) == (float *)0x0) {
          auVar18 = *(undefined1 (*) [16])(lVar3 + 0x38);
          iVar12 = (int)*(undefined8 *)(lVar3 + 0x40);
        }
        else {
          auVar18 = Rectangle<int>::transformedBy
                              ((Rectangle<int> *)(lVar3 + 0x38),*(float **)(lVar3 + 0x50));
          iVar12 = auVar18._8_4_;
        }
        if (0 < iVar12) {
          if (0 < auVar18._12_4_) {
            uVar11 = auVar18._0_8_ >> 0x20;
            if (((int)uVar17 < 1) || (iVar12 = (int)((ulong)uVar17 >> 0x20), iVar12 < 1)) {
              uVar16 = auVar18._0_8_ & 0xffffffff;
              uVar17 = auVar18._8_8_;
            }
            else {
              uVar5 = auVar18._0_4_;
              iVar9 = (int)uVar17 + uVar15;
              if ((int)uVar5 < (int)uVar15) {
                uVar15 = uVar5;
              }
              uVar10 = auVar18._4_4_;
              uVar8 = uVar13;
              if ((int)uVar10 < (int)uVar13) {
                uVar8 = uVar10;
              }
              iVar6 = uVar5 + auVar18._8_4_;
              if (iVar9 < iVar6) {
                iVar9 = iVar6;
              }
              iVar12 = iVar12 + uVar13;
              iVar6 = auVar18._12_4_ + uVar10;
              if (iVar6 <= iVar12) {
                iVar6 = iVar12;
              }
              uVar16 = (ulong)uVar15;
              uVar11 = (ulong)uVar8;
              uVar17 = CONCAT44(iVar6 - uVar8,iVar9 - uVar15);
            }
          }
        }
        iVar9 = (int)uVar16;
        iVar12 = (int)uVar11;
        lVar14 = lVar14 + 8;
      } while (lVar7 * 8 != lVar14);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    iVar6 = (int)((ulong)uVar17 >> 0x20);
    if (((iVar9 != 0 || iVar12 != 0) || ((int)uVar17 != (int)*(undefined8 *)(param_1 + 0x40))) ||
       (iVar6 != (int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20))) {
      if (iVar9 != 0 || iVar12 != 0) {
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) - iVar9;
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) - iVar12;
        if (iVar1 != 0) {
          lVar14 = 0;
          do {
            this = *(Component **)(lVar2 + lVar14);
            Component::setBounds
                      (this,(int)*(undefined8 *)(this + 0x38) - iVar9,
                       (int)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) - iVar12,
                       (int)*(undefined8 *)(this + 0x40),
                       (int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20));
            lVar14 = lVar14 + 8;
          } while (lVar7 * 8 != lVar14);
        }
      }
      Component::setBounds
                (param_1,iVar9 + (int)uVar4,iVar12 + (int)((ulong)uVar4 >> 0x20),(int)uVar17,iVar6);
    }
    param_1[0x188] = (Component)0x0;
  }
  return;
}


