// Function : clipToEdgeTable
// Namespace: juce:EdgeTable
// Entry    : 002f1450
// Prototype: undefined clipToEdgeTable(EdgeTable * this, long * param_1)
// Body     : 002f1450 - 002f1607


/* juce::EdgeTable::clipToEdgeTable(juce::EdgeTable const&) */

void __thiscall juce::EdgeTable::clipToEdgeTable(EdgeTable *this,long *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar5 = (int)param_1[2];
  iVar10 = (int)*(undefined8 *)(this + 0x10);
  iVar6 = iVar5;
  if (iVar5 < iVar10) {
    iVar6 = iVar10;
  }
  iVar1 = *(int *)((long)param_1 + 0x14);
  iVar12 = (int)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  iVar14 = iVar1;
  if (iVar1 < iVar12) {
    iVar14 = iVar12;
  }
  iVar5 = iVar5 + (int)param_1[3];
  iVar16 = iVar10 + (int)*(undefined8 *)(this + 0x18);
  iVar4 = iVar5;
  if (iVar16 < iVar5) {
    iVar4 = iVar16;
  }
  if (-1 < iVar4 - iVar6) {
    iVar15 = *(int *)((long)param_1 + 0x1c) + iVar1;
    iVar3 = (int)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
    iVar7 = iVar12 + iVar3;
    if (iVar7 < iVar15) {
      iVar15 = iVar7;
    }
    iVar7 = iVar15 - iVar14;
    if (((-1 < iVar7) && (0 < iVar4 - iVar6)) && (iVar7 != 0)) {
      iVar15 = iVar15 - iVar12;
      if (iVar15 < iVar3) {
        *(int *)(this + 0x1c) = iVar15;
      }
      uVar9 = iVar14 - iVar12;
      if (iVar5 < iVar16) {
        if (iVar4 < iVar10) {
          iVar10 = iVar4;
        }
        *(int *)(this + 0x10) = iVar10;
        *(int *)(this + 0x18) = iVar4 - iVar10;
      }
      if (0 < (int)uVar9) {
        lVar2 = *(long *)this;
        if ((ulong)uVar9 - 1 < 3) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            *(undefined4 *)(lVar2 + (long)*(int *)(this + 0x24) * uVar13 * 4) = 0;
            *(undefined4 *)(lVar2 + (long)*(int *)(this + 0x24) * (uVar13 + 1) * 4) = 0;
            *(undefined4 *)(lVar2 + (long)*(int *)(this + 0x24) * (uVar13 + 2) * 4) = 0;
            *(undefined4 *)(lVar2 + (long)*(int *)(this + 0x24) * (uVar13 + 3) * 4) = 0;
            uVar13 = uVar13 + 4;
          } while ((uVar9 & 0xfffffffc) != uVar13);
        }
        if ((ulong)(uVar9 & 3) != 0) {
          lVar11 = -(ulong)(uVar9 & 3);
          do {
            *(undefined4 *)(lVar2 + (long)*(int *)(this + 0x24) * uVar13 * 4) = 0;
            uVar13 = uVar13 + 1;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0);
        }
        iVar1 = *(int *)((long)param_1 + 0x14);
      }
      if ((int)uVar9 < iVar15) {
        piVar8 = (int *)((long)(iVar14 - iVar1) * (long)*(int *)((long)param_1 + 0x24) * 4 +
                        *param_1);
        do {
          intersectWithEdgeTableLine(this,uVar9,piVar8);
          piVar8 = piVar8 + *(int *)((long)param_1 + 0x24);
          uVar9 = uVar9 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      this[0x28] = (EdgeTable)0x1;
      return;
    }
  }
  this[0x28] = (EdgeTable)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


