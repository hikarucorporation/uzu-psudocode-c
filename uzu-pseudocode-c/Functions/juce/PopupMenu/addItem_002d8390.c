// Function : addItem
// Namespace: juce:PopupMenu
// Entry    : 002d8390
// Prototype: undefined addItem(PopupMenu * this, undefined8 * param_1, undefined1 param_2, undefined1 param_3, undefined8 * param_4)
// Body     : 002d8390 - 002d867e


/* juce::PopupMenu::addItem(juce::String, bool, bool, std::function<void ()>) */

void __thiscall
juce::PopupMenu::addItem
          (PopupMenu *this,undefined8 *param_1,undefined1 param_2,undefined1 param_3,
          undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  long local_e8;
  undefined1 local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  undefined1 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar2 = *param_1;
  *param_1 = &DAT_0061ac58;
  local_d0 = 0xffffffff;
  local_88 = 0;
  local_78 = 0;
  uStack_72 = 0;
  uStack_70 = 0;
  lVar3 = param_4[2];
  uStack_120 = param_4[3];
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (lVar3 != 0) {
    local_68 = *param_4;
    uStack_60 = param_4[1];
    param_4[2] = 0;
    param_4[3] = 0;
  }
  uStack_c0 = uStack_60;
  local_c8 = local_68;
  local_48 = local_68;
  uStack_40 = uStack_60;
  local_68 = 0;
  uStack_60 = 0;
  local_d8 = &DAT_0061ac58;
  local_140 = 0xffffffff;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_b8 = lVar3;
  uStack_b0 = uStack_120;
  if (lVar3 != 0) {
    local_138 = local_c8;
    uStack_130 = uStack_c0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_128 = lVar3;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = &DAT_0061ac58;
  local_80 = &DAT_0061ac58;
  local_e0 = 0;
  local_e8 = (ulong)CONCAT11(param_3,param_2) << 0x20;
  iVar4 = *(int *)(this + 0xc);
  uVar7 = 0xffffffff;
  local_148 = (undefined1 *)uVar2;
  uStack_74 = param_2;
  uStack_73 = param_3;
  if ((int)*(uint *)(this + 8) <= iVar4) {
    uVar6 = iVar4 + ((iVar4 - (iVar4 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    uVar7 = 0xffffffff;
    if (*(uint *)(this + 8) != uVar6) {
      if ((int)uVar6 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
        uVar7 = local_140;
      }
      else {
        ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
                  ((ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *)this,uVar6);
        local_148 = (undefined1 *)uVar2;
      }
    }
    *(uint *)(this + 8) = uVar6;
    iVar4 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar4 + 1;
  lVar3 = *(long *)this;
  lVar5 = (long)iVar4 * 0x70;
  *(undefined1 **)(lVar3 + lVar5) = local_148;
  local_148 = &DAT_0061ac58;
  *(undefined4 *)(lVar3 + 8 + lVar5) = uVar7;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar5) = uStack_120;
  if (local_128 != 0) {
    *(undefined8 *)(lVar3 + lVar5 + 0x10) = local_138;
    *(undefined8 *)(lVar3 + lVar5 + 0x18) = uStack_130;
    *(long *)(lVar3 + 0x20 + lVar5) = local_128;
    local_128 = 0;
    uStack_120 = 0;
  }
  *(undefined8 *)(lVar3 + 0x30 + lVar5) = local_118;
  local_118 = 0;
  *(undefined8 *)(lVar3 + 0x38 + lVar5) = uStack_110;
  uStack_110 = 0;
  *(undefined8 *)(lVar3 + 0x40 + lVar5) = local_108;
  local_108 = 0;
  *(undefined8 *)(lVar3 + 0x48 + lVar5) = local_100;
  local_100 = 0;
  *(undefined8 *)(lVar3 + 0x50 + lVar5) = uStack_f8;
  *(undefined1 **)(lVar3 + 0x58 + lVar5) = local_f0;
  local_f0 = &DAT_0061ac58;
  *(undefined1 *)(lVar3 + 0x68 + lVar5) = local_e0;
  *(long *)(lVar3 + 0x60 + lVar5) = local_e8;
  Item::~Item((Item *)&local_148);
  Item::~Item((Item *)&local_d8);
  return;
}


