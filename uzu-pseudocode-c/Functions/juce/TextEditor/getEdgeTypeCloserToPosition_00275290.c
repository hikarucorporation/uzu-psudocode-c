// Function : getEdgeTypeCloserToPosition
// Namespace: juce:TextEditor
// Entry    : 00275290
// Prototype: bool getEdgeTypeCloserToPosition(undefined8 param_1_00, TextEditor * this, uint param_3, undefined8 param_4, undefined8 param_5, uint * param_6, ulong param_7)
// Body     : 00275290 - 0027553b


/* juce::TextEditor::getEdgeTypeCloserToPosition(int, juce::Point<float>) const */

bool __thiscall
juce::TextEditor::getEdgeTypeCloserToPosition
          (undefined8 param_1_00,TextEditor *this,uint param_3,undefined8 param_4,undefined8 param_5
          ,uint *param_6,ulong param_7)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  TextEditor *this_00;
  uint uVar5;
  uint uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  long *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  uint local_54;
  TextEditor *local_50;
  undefined8 local_48;
  
  plVar3 = *(long **)(this + 0x338);
  uVar6 = *(uint *)(this + 0x348);
  uVar2 = *(undefined4 *)(this + 0x34c);
  local_50 = this;
  if (*(uint *)(this + 0x340) == param_3) {
    local_6c = *(uint *)(this + 0x344);
  }
  else {
    local_48 = param_1_00;
    uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
    uVar10 = 0;
    if (-1 < (int)param_3) {
      uVar10 = param_3;
    }
    if (uVar5 < uVar10) {
      uVar10 = uVar5;
    }
    param_4 = extraout_RDX;
    local_6c = 0;
    param_1_00 = local_48;
    if (uVar10 != 0) {
      ParagraphsModel::getText((undefined8 *)&local_78,plVar3[0x66] + 0x60);
      uVar5 = juce::String::operator[]((String *)&local_78,uVar10 - 1);
      local_78 = local_78 + -2;
      param_4 = extraout_RDX_00;
      param_1_00 = local_48;
      if (local_78 != (long *)&emptyString) {
        LOCK();
        lVar4 = *local_78;
        *(int *)local_78 = (int)*local_78 + -1;
        UNLOCK();
        if ((int)lVar4 == 0) {
          operator_delete__(local_78);
          param_4 = extraout_RDX_01;
          param_1_00 = local_48;
        }
      }
      local_6c = 0;
      if (uVar5 != 10) {
        local_48 = param_1_00;
        uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
        param_4 = extraout_RDX_02;
        local_6c = 1;
        param_1_00 = local_48;
        if (uVar10 != uVar5) {
          local_6c = uVar6;
        }
      }
    }
  }
  local_68 = 0;
  uVar10 = local_6c;
  local_78 = plVar3;
  local_70 = param_3;
  local_64 = uVar2;
  if (uVar6 != 0) {
    local_54 = local_6c;
    local_48 = param_1_00;
    uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
    uVar9 = 0;
    uVar10 = 0;
    if (-1 < (int)param_3) {
      uVar10 = param_3;
    }
    if (uVar5 < uVar10) {
      uVar10 = uVar5;
    }
    param_4 = extraout_RDX_03;
    param_1_00 = local_48;
    if (uVar10 != 0) {
      ParagraphsModel::getText((undefined8 *)&local_60,plVar3[0x66] + 0x60);
      uVar5 = juce::String::operator[]((String *)&local_60,uVar10 - 1);
      piVar8 = (int *)(local_60 + -0x10);
      param_4 = extraout_RDX_04;
      param_1_00 = local_48;
      if (piVar8 != &emptyString) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar8);
          param_4 = extraout_RDX_05;
          param_1_00 = local_48;
        }
      }
      if (uVar5 != 10) {
        local_48 = param_1_00;
        uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
        uVar9 = (uint)(uVar10 == uVar5);
        param_4 = extraout_RDX_06;
        param_1_00 = local_48;
      }
    }
    uVar10 = local_54;
    local_6c = uVar9;
  }
  this_00 = local_50;
  local_48 = param_1_00;
  uVar7 = getCursorEdge(local_50,(long)&local_78,param_4,param_5,param_6,param_7);
  fVar11 = hypotf((float)uVar7 - (float)local_48,(float)((ulong)uVar7 >> 0x20) - local_48._4_4_);
  local_68 = 1;
  uVar7 = extraout_RDX_07;
  local_78 = plVar3;
  local_70 = param_3;
  local_6c = uVar10;
  local_64 = uVar2;
  if (uVar6 != 1) {
    uVar6 = (**(code **)(*plVar3 + 0x50))(plVar3);
    uVar10 = 0;
    if ((int)param_3 < 0) {
      param_3 = uVar10;
    }
    if (uVar6 < param_3) {
      param_3 = uVar6;
    }
    uVar7 = extraout_RDX_08;
    if (param_3 != 0) {
      ParagraphsModel::getText((undefined8 *)&local_60,plVar3[0x66] + 0x60);
      uVar6 = juce::String::operator[]((String *)&local_60,param_3 - 1);
      piVar8 = (int *)(local_60 + -0x10);
      uVar7 = extraout_RDX_09;
      if (piVar8 != &emptyString) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar8);
          uVar7 = extraout_RDX_10;
        }
      }
      if (uVar6 != 10) {
        (**(code **)(*plVar3 + 0x50))(plVar3);
        uVar10 = 1;
        uVar7 = extraout_RDX_11;
      }
    }
    local_6c = uVar10;
  }
  uVar7 = getCursorEdge(this_00,(long)&local_78,uVar7,param_5,param_6,param_7);
  fVar12 = hypotf((float)uVar7 - (float)local_48,(float)((ulong)uVar7 >> 0x20) - local_48._4_4_);
  return fVar12 <= fVar11;
}


