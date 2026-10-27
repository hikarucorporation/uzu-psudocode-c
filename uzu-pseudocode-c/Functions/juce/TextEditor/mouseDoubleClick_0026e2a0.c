// Function : mouseDoubleClick
// Namespace: juce:TextEditor
// Entry    : 0026e2a0
// Prototype: undefined mouseDoubleClick(TextEditor * this, long param_1, undefined8 param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 0026e2a0 - 0026e508


/* juce::TextEditor::mouseDoubleClick(juce::MouseEvent const&) */

void __thiscall
juce::TextEditor::mouseDoubleClick
          (TextEditor *this,long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar13;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int *piVar17;
  ulong uVar18;
  float fVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  long local_40;
  long local_38;
  
  iVar8 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(this + 0x27c);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(this + 0x198);
  iVar3 = *(int *)(this + 0x278);
  iVar4 = *(int *)(this + 0x19c);
  iVar5 = *(int *)(*(long *)(this + 0x188) + 0x208);
  fVar19 = getYOffset(this,param_1,param_2,*(long *)(this + 0x188),param_4,param_5);
  lVar12 = *(long *)(this + 0x188);
  fVar19 = (float)((iVar1 + *(int *)(lVar12 + 0x20c)) -
                  SUB84((double)(fVar19 + (float)iVar2 + (float)iVar7) + DAT_005d9098,0));
  uVar11 = indexAtPosition((float)((iVar8 - (iVar3 + iVar4)) + iVar5),fVar19,this);
  if (*(byte *)(param_1 + 0x58) < 4) {
    ParagraphsModel::getText(&local_40,*(long *)(this + 0x330) + 0x60);
                    /* try { // try from 0026e368 to 0026e36d has its CatchHandler @ 0026e511 */
    uVar10 = (**(code **)(*(long *)this + 0x50))(this);
    uVar18 = uVar11 & 0xffffffff;
    if ((int)uVar11 <= (int)uVar10) {
      uVar18 = (ulong)uVar10;
    }
    uVar13 = extraout_RDX_00;
    uVar11 = uVar11 & 0xffffffff;
    uVar20 = extraout_XMM0_Da_00;
    uVar21 = extraout_XMM0_Db_00;
    local_38 = param_1;
    do {
      uVar15 = uVar11;
      iVar8 = (int)uVar15;
      if ((int)uVar18 == iVar8) goto LAB_0026e3bd;
      uVar6 = juce::String::operator[]((String *)&local_40,iVar8);
      iVar7 = iswalnum(uVar6);
      uVar13 = extraout_RDX_01;
      uVar11 = (ulong)(iVar8 + 1);
      uVar20 = extraout_XMM0_Da_01;
      uVar21 = extraout_XMM0_Db_01;
    } while ((iVar7 != 0) || (0x80 < (int)uVar6));
    uVar18 = uVar15;
LAB_0026e3bd:
    uVar6 = (uint)uVar18;
    uVar11 = uVar18;
    do {
      uVar16 = (uint)uVar11;
      if ((int)uVar16 < 1) break;
      uVar11 = (ulong)(uVar16 - 1);
      uVar14 = juce::String::operator[]((String *)&local_40,uVar16 - 1);
      iVar8 = iswalnum(uVar14);
      uVar13 = extraout_RDX_02;
      uVar20 = extraout_XMM0_Da_02;
      uVar21 = extraout_XMM0_Db_02;
    } while ((iVar8 != 0) || (0x80 < (int)uVar14));
    uVar14 = uVar16;
    if (2 < *(byte *)(local_38 + 0x58)) {
      if ((int)uVar6 < (int)uVar10) {
        do {
          uVar6 = (uint)uVar18;
          uVar14 = juce::String::operator[]((String *)&local_40,uVar6);
          uVar13 = extraout_RDX_03;
          uVar20 = extraout_XMM0_Da_03;
          uVar21 = extraout_XMM0_Db_03;
          if ((uVar14 == 10) || (uVar14 == 0xd)) goto LAB_0026e441;
          uVar18 = (ulong)(uVar6 + 1);
        } while (uVar10 != uVar6 + 1);
        uVar6 = uVar10;
      }
LAB_0026e441:
      uVar14 = 0;
      if ((int)uVar16 < 0) {
        uVar14 = uVar16;
      }
      do {
        uVar10 = uVar16;
        if ((int)uVar10 < 1) goto LAB_0026e472;
        uVar9 = juce::String::operator[]((String *)&local_40,uVar10 - 1);
        uVar13 = extraout_RDX_04;
        uVar20 = extraout_XMM0_Da_04;
        uVar21 = extraout_XMM0_Db_04;
      } while ((uVar9 != 0xd) && (uVar16 = uVar10 - 1, uVar9 != 10));
      uVar14 = uVar10;
    }
LAB_0026e472:
    piVar17 = (int *)(local_40 + -0x10);
    if (piVar17 != &emptyString) {
      LOCK();
      iVar8 = *piVar17;
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        operator_delete__(piVar17);
        uVar13 = extraout_RDX_05;
        uVar20 = extraout_XMM0_Da_05;
        uVar21 = extraout_XMM0_Db_05;
      }
    }
  }
  else {
    uVar6 = (**(code **)(*(long *)this + 0x50))(this);
    uVar14 = 0;
    uVar13 = extraout_RDX;
    uVar20 = extraout_XMM0_Da;
    uVar21 = extraout_XMM0_Db;
  }
  *(undefined4 *)(this + 0x2f0) = 0;
  repaintText(CONCAT44(uVar21,uVar20),fVar19,this,*(long *)(this + 0x270),uVar13,lVar12,param_4,
              param_5);
  moveCaret(this,uVar6);
  uVar10 = (**(code **)(*(long *)this + 0x40))(this);
  uVar11 = (ulong)uVar10;
  uVar20 = extraout_XMM0_Da_06;
  uVar21 = extraout_XMM0_Db_06;
  if (*(long *)(this + 0x270) != CONCAT44(uVar10,uVar10)) {
    *(long *)(this + 0x270) = CONCAT44(uVar10,uVar10);
                    /* try { // try from 0026e4e7 to 0026e4eb has its CatchHandler @ 0026e509 */
    Component::getAccessibilityHandler((Component *)(this + 8));
    uVar20 = extraout_XMM0_Da_07;
    uVar21 = extraout_XMM0_Db_07;
  }
  moveCaretTo(CONCAT44(uVar21,uVar20),fVar19,this,uVar14,1,uVar11,param_4,param_5);
  return;
}


