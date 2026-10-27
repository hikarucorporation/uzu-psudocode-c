// Function : operator()
// Namespace: juce:RectangleList_int_:subtract_juce__Rectangle_int___juce__Array_juce__Rectangle_int__juce__DummyCriticalSection~0437f402:_lambda___1_
// Entry    : 00271b50
// Prototype: undefined operator()({lambda()#1} * this)
// Body     : 00271b50 - 00271e05


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RectangleList<int>::subtract<juce::Rectangle<int> >(juce::Array<juce::Rectangle<int>,
   juce::DummyCriticalSection, 0>&, juce::Rectangle<int>)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void __thiscall
juce::RectangleList<int>::
subtract<juce::Rectangle<int>>(juce::Array<juce::Rectangle<int>,juce::DummyCriticalSection,0>&,juce::Rectangle<int>)
::{lambda()#1}::operator()(_lambda___1_ *this)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  uint *local_50;
  int *local_48;
  long **local_40;
  long local_38;
  long alStack_30 [4];
  
  alStack_30[1] = _DAT_005efcf8;
  alStack_30[2] = _UNK_005efd00;
  local_38 = _DAT_005efce8;
  alStack_30[0] = _UNK_005efcf0;
  plVar2 = *(long **)this;
  local_50 = *(uint **)(this + 8);
  local_48 = *(int **)(this + 0x10);
  piVar3 = *(int **)(this + 0x18);
  local_60 = &local_38;
  local_40 = &local_60;
  iVar11 = *piVar3;
  local_58 = plVar2;
  if ((*local_48 < iVar11) && (iVar10 = local_48[2], iVar11 < iVar10)) {
    lVar14 = 0;
    lVar15 = 0;
LAB_00271c10:
    lVar14 = alStack_30[lVar14 * 2];
    if (((*(int *)((long)piVar3 + lVar14) <= *(int *)((long)local_48 + lVar14)) &&
        (*(int *)((long)local_48 + lVar14 + 8) <= *(int *)((long)piVar3 + lVar14 + 8))) &&
       (iVar10 <= *(int *)((long)piVar3 + lVar15 + 8))) {
      uVar4 = *(undefined8 *)local_48;
      local_68 = *(undefined8 *)(local_48 + 2);
      *(int *)((long)alStack_30 + lVar15 + -0x38) = iVar11;
      iVar11 = (int)uVar4 - (int)local_68;
      uVar5 = uVar4;
      if (iVar11 != 0 && (int)local_68 <= (int)uVar4) {
        uVar5 = local_68;
      }
      iVar10 = (int)((ulong)uVar4 >> 0x20);
      iVar13 = (int)((ulong)local_68 >> 0x20);
      iVar9 = iVar10 - iVar13;
      if (iVar9 != 0 && iVar13 <= iVar10) {
        iVar10 = iVar13;
      }
      iVar13 = -iVar11;
      if (-iVar11 < 0) {
        iVar13 = iVar11;
      }
      iVar11 = -iVar9;
      if (-iVar9 < 0) {
        iVar11 = iVar9;
      }
      puVar6 = *(undefined4 **)(this + 0x20);
      *puVar6 = (int)uVar5;
      puVar6[1] = iVar10;
      puVar6[2] = iVar13;
      puVar6[3] = iVar11;
      return;
    }
    local_68 = *(undefined8 *)local_48;
    *(int *)((long)alStack_30 + lVar15 + -0x38) = iVar11;
    uVar4 = *(undefined8 *)(local_48 + 2);
    iVar11 = (int)local_68 - (int)uVar4;
    uVar5 = local_68;
    if (iVar11 != 0 && (int)uVar4 <= (int)local_68) {
      uVar5 = uVar4;
    }
    iVar10 = (int)((ulong)local_68 >> 0x20);
    iVar13 = (int)((ulong)uVar4 >> 0x20);
    iVar9 = iVar10 - iVar13;
    if (iVar9 != 0 && iVar13 <= iVar10) {
      iVar10 = iVar13;
    }
    iVar13 = -iVar11;
    if (-iVar11 < 0) {
      iVar13 = iVar11;
    }
    iVar11 = -iVar9;
    if (-iVar9 < 0) {
      iVar11 = iVar9;
    }
    puVar6 = *(undefined4 **)(this + 0x20);
    *puVar6 = (int)uVar5;
    puVar6[1] = iVar10;
    puVar6[2] = iVar13;
    puVar6[3] = iVar11;
    lVar14 = *(long *)(this + 0x18);
  }
  else {
    iVar11 = piVar3[2];
    if ((*local_48 < iVar11) && (iVar11 < local_48[2])) {
      lVar14 = 0;
    }
    else {
      local_60 = alStack_30 + 1;
      iVar11 = piVar3[1];
      if ((local_48[1] < iVar11) && (iVar10 = local_48[3], iVar11 < iVar10)) {
        lVar15 = 4;
        lVar14 = 1;
        goto LAB_00271c10;
      }
      iVar11 = piVar3[3];
      if ((iVar11 <= local_48[1]) || (lVar14 = 4, local_48[3] <= iVar11)) {
        uVar1 = *local_50;
        if (*(uint *)((long)plVar2 + 0xc) <= uVar1) {
          return;
        }
        memmove((void *)(*plVar2 + (long)(int)uVar1 * 0x10),
                (void *)((long)(int)uVar1 * 0x10 + *plVar2 + 0x10),
                (long)(int)(*(uint *)((long)plVar2 + 0xc) + ~uVar1) << 4);
        iVar11 = *(int *)((long)plVar2 + 0xc);
        uVar1 = iVar11 - 1;
        *(uint *)((long)plVar2 + 0xc) = uVar1;
        iVar10 = iVar11 * 2 + -2;
        iVar11 = 0;
        if (-1 < iVar10) {
          iVar11 = iVar10;
        }
        if ((int)plVar2[1] <= iVar11) {
          return;
        }
        uVar12 = 4;
        if (4 < (int)uVar1) {
          uVar12 = uVar1;
        }
        if ((int)uVar12 < (int)plVar2[1]) {
          pvVar8 = realloc((void *)*plVar2,(ulong)uVar12 << 4);
          *plVar2 = (long)pvVar8;
          *(uint *)(plVar2 + 1) = uVar12;
          return;
        }
        return;
      }
    }
    local_68 = *(undefined8 *)local_48;
    *(int *)((long)alStack_30 + lVar14 + -0x38) = iVar11;
    uVar4 = *(undefined8 *)(local_48 + 2);
    iVar11 = (int)local_68 - (int)uVar4;
    uVar5 = local_68;
    if (iVar11 != 0 && (int)uVar4 <= (int)local_68) {
      uVar5 = uVar4;
    }
    iVar10 = (int)((ulong)local_68 >> 0x20);
    iVar13 = (int)((ulong)uVar4 >> 0x20);
    iVar9 = iVar10 - iVar13;
    if (iVar9 != 0 && iVar13 <= iVar10) {
      iVar10 = iVar13;
    }
    iVar13 = -iVar11;
    if (-iVar11 < 0) {
      iVar13 = iVar11;
    }
    iVar11 = -iVar9;
    if (-iVar9 < 0) {
      iVar11 = iVar9;
    }
    puVar6 = *(undefined4 **)(this + 0x20);
    *puVar6 = (int)uVar5;
    puVar6[1] = iVar10;
    puVar6[2] = iVar13;
    puVar6[3] = iVar11;
    lVar15 = *(long *)(this + 0x10);
    lVar14 = *(long *)(this + 0x18);
    lVar7 = local_60[1];
    if (((*(int *)(lVar14 + lVar7) <= *(int *)(lVar15 + lVar7)) &&
        (*(int *)(lVar15 + 8 + lVar7) <= *(int *)(lVar14 + 8 + lVar7))) &&
       (*(int *)(lVar14 + *local_60) <= *(int *)(lVar15 + *local_60))) {
      return;
    }
    lVar14 = lVar14 + 8;
  }
  const::{lambda(juce::Point<int>const&)#1}::operator()
            ((_lambda_juce__Point<int>const___1_ *)&local_58,lVar14);
  return;
}


