// Function : addItem
// Namespace: juce:PopupMenu
// Entry    : 00281580
// Prototype: undefined addItem(PopupMenu * this, undefined4 param_1, undefined8 * param_2, undefined1 param_3, undefined1 param_4)
// Body     : 00281580 - 002817bf


/* juce::PopupMenu::addItem(int, juce::String, bool, bool) */

void __thiscall
juce::PopupMenu::addItem
          (PopupMenu *this,undefined4 param_1,undefined8 *param_2,undefined1 param_3,
          undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined1 local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  undefined1 uStack_30;
  
  uVar2 = *param_2;
  *param_2 = &DAT_0061ac58;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_38 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  local_98 = &DAT_0061ac58;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_58 = 0;
  local_c0 = 0;
  uStack_50 = 0;
  local_b8 = 0;
  local_b0 = &DAT_0061ac58;
  local_40 = &DAT_0061ac58;
  local_a0 = 0;
  local_a8 = (ulong)CONCAT11(param_4,param_3) << 0x20;
  iVar4 = *(int *)(this + 0xc);
  local_100 = param_1;
  local_90 = param_1;
  uStack_34 = param_3;
  uStack_33 = param_4;
  if ((int)*(uint *)(this + 8) <= iVar4) {
    uVar6 = iVar4 + ((iVar4 - (iVar4 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar6) {
      local_108 = (undefined1 *)uVar2;
      if ((int)uVar6 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
      }
      else {
        ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
                  ((ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *)this,uVar6);
      }
    }
    *(uint *)(this + 8) = uVar6;
    iVar4 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar4 + 1;
  lVar3 = *(long *)this;
  lVar5 = (long)iVar4 * 0x70;
  *(undefined8 *)(lVar3 + lVar5) = uVar2;
  local_108 = &DAT_0061ac58;
  *(undefined4 *)(lVar3 + 8 + lVar5) = param_1;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar5) = uStack_e0;
  if (local_e8 != 0) {
    *(undefined8 *)(lVar3 + lVar5 + 0x10) = local_f8;
    *(undefined8 *)(lVar3 + lVar5 + 0x18) = uStack_f0;
    *(long *)(lVar3 + 0x20 + lVar5) = local_e8;
    local_e8 = 0;
    uStack_e0 = 0;
  }
  *(undefined8 *)(lVar3 + 0x30 + lVar5) = local_d8;
  local_d8 = 0;
  *(undefined8 *)(lVar3 + 0x38 + lVar5) = uStack_d0;
  uStack_d0 = 0;
  *(undefined8 *)(lVar3 + 0x40 + lVar5) = local_c8;
  local_c8 = 0;
  *(undefined8 *)(lVar3 + 0x48 + lVar5) = local_c0;
  local_c0 = 0;
  *(undefined8 *)(lVar3 + 0x50 + lVar5) = local_b8;
  *(undefined1 **)(lVar3 + 0x58 + lVar5) = local_b0;
  local_b0 = &DAT_0061ac58;
  *(undefined1 *)(lVar3 + 0x68 + lVar5) = local_a0;
  *(long *)(lVar3 + 0x60 + lVar5) = local_a8;
  Item::~Item((Item *)&local_108);
  Item::~Item((Item *)&local_98);
  return;
}


