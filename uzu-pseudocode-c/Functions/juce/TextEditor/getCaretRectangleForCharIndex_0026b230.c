// Function : getCaretRectangleForCharIndex
// Namespace: juce:TextEditor
// Entry    : 0026b230
// Prototype: undefined1[16] getCaretRectangleForCharIndex(undefined8 param_1, float param_2, TextEditor * param_3, uint param_4, undefined8 param_5, long param_6, uint * param_7, ulong param_8)
// Body     : 0026b230 - 0026b458


/* WARNING: Unknown calling convention: __cdecl */
/* juce::TextEditor::getCaretRectangleForCharIndex(int) const */

undefined1  [16] __cdecl
juce::TextEditor::getCaretRectangleForCharIndex
          (undefined8 param_1,float param_2,TextEditor *param_3,uint param_4,undefined8 param_5,
          long param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar17 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  undefined1 local_38 [16];
  
  local_78 = *(undefined4 *)(param_3 + 0x338);
  uStack_74 = *(undefined4 *)(param_3 + 0x33c);
  plVar6 = *(long **)(param_3 + 0x338);
  uStack_6c = *(undefined4 *)(param_3 + 0x344);
  local_68 = *(undefined8 *)(param_3 + 0x348);
  uStack_70 = param_4;
  if (*(uint *)(param_3 + 0x340) != param_4) {
    uVar7 = (**(code **)(*plVar6 + 0x50))(plVar6);
    if ((int)param_4 < 0) {
      param_4 = 0;
    }
    if (uVar7 < param_4) {
      param_4 = uVar7;
    }
    param_5 = extraout_RDX;
    uVar10 = 0;
    if (param_4 != 0) {
      ParagraphsModel::getText((undefined8 *)&local_40,plVar6[0x66] + 0x60);
      uVar7 = juce::String::operator[]((String *)&local_40,param_4 - 1);
      piVar13 = (int *)(local_40 + -0x10);
      param_5 = extraout_RDX_00;
      if (piVar13 != &emptyString) {
        LOCK();
        iVar9 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          operator_delete__(piVar13);
          param_5 = extraout_RDX_01;
        }
      }
      if (uVar7 != 10) {
        uVar7 = (**(code **)(*plVar6 + 0x50))(plVar6);
        param_5 = extraout_RDX_02;
        uVar10 = 1;
        if (param_4 != uVar7) {
          uVar10 = (undefined4)local_68;
        }
      }
    }
    uStack_6c = uVar10;
  }
  puVar12 = &local_78;
  uVar8 = getCursorEdge(param_3,(long)puVar12,param_5,param_6,param_7,param_8);
  fVar16 = (float)uVar8;
  local_58 = (float)((ulong)uVar8 >> 0x20);
  iVar11 = -0x80000000;
  iVar9 = -0x80000000;
  local_38._8_4_ = extraout_XMM0_Dc;
  local_38._0_8_ = uVar8;
  local_38._12_4_ = extraout_XMM0_Dd;
  uVar8 = extraout_RDX_03;
  fStack_54 = local_58;
  fStack_50 = local_58;
  fStack_4c = local_58;
  if (DAT_00653430 < fVar16) {
    fVar16 = floorf(fVar16);
    iVar9 = (int)fVar16;
    uVar8 = extraout_RDX_04;
    fVar16 = (float)local_38._0_4_;
  }
  if (DAT_00653430 < local_58) {
    fVar16 = floorf(local_58);
    iVar11 = (int)fVar16;
    uVar8 = extraout_RDX_05;
    fVar16 = (float)local_38._0_4_;
  }
  iVar14 = 0x7fffffff;
  iVar15 = 0x7fffffff;
  if (DAT_005d9078 + fVar16 < DAT_00653434) {
    fVar16 = ceilf(DAT_005d9078 + fVar16);
    iVar15 = (int)fVar16;
    uVar8 = extraout_RDX_06;
  }
  if (param_2 + local_58 < DAT_00653434) {
    fVar16 = ceilf(param_2 + local_58);
    iVar14 = (int)fVar16;
    uVar8 = extraout_RDX_07;
  }
  iVar1 = *(int *)(param_3 + 0x27c);
  iVar2 = *(int *)(param_3 + 0x198);
  iVar3 = *(int *)(param_3 + 0x278);
  iVar4 = *(int *)(param_3 + 0x19c);
  iVar5 = *(int *)(*(long *)(param_3 + 0x188) + 0x208);
  fVar16 = getYOffset(param_3,puVar12,uVar8,param_6,param_7,param_8);
  auVar17._4_4_ =
       (iVar11 - *(int *)(*(long *)(param_3 + 0x188) + 0x20c)) +
       SUB84((double)(fVar16 + (float)iVar2 + (float)iVar1) + DAT_005d9098,0);
  auVar17._0_4_ = (iVar9 + iVar3 + iVar4) - iVar5;
  auVar17._12_4_ = iVar14 - iVar11;
  auVar17._8_4_ = iVar15 - iVar9;
  return auVar17;
}


