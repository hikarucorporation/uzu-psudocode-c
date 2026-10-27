// Function : addSeparator
// Namespace: juce:PopupMenu
// Entry    : 002817c0
// Prototype: undefined addSeparator(PopupMenu * this)
// Body     : 002817c0 - 00281a27


/* juce::PopupMenu::addSeparator() */

void __thiscall juce::PopupMenu::addSeparator(PopupMenu *this)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
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
  char cStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  
  if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 002817e7 to 002817f0 has its CatchHandler @ 00281a28 */
    Item::Item((Item *)&local_98,(long *)((ulong)(*(int *)(this + 0xc) - 1) * 0x70 + *(long *)this))
    ;
    Item::~Item((Item *)&local_98);
    if (cStack_32 == '\0') {
      local_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_48 = 0;
      local_38 = 0;
      uStack_34 = 1;
      uStack_33 = 0;
      cStack_32 = 1;
      uStack_31 = 0;
      uStack_30 = 0;
      local_108 = &DAT_0061ac58;
      local_98 = &DAT_0061ac58;
      local_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_b8 = 0;
      local_b0 = &DAT_0061ac58;
      local_40 = &DAT_0061ac58;
      local_a0 = 0;
      local_a8 = 0x1000100000000;
      iVar3 = *(int *)(this + 0xc);
      uVar7 = 0;
      if (iVar3 < (int)*(uint *)(this + 8)) {
        puVar6 = &DAT_0061ac58;
      }
      else {
        uVar5 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        puVar6 = &DAT_0061ac58;
        uVar7 = 0;
        if (*(uint *)(this + 8) != uVar5) {
          if ((int)uVar5 < 1) {
            free(*(void **)this);
            *(undefined8 *)this = 0;
            puVar6 = local_108;
            uVar7 = local_100;
          }
          else {
            ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
                      ((ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *)this,uVar5);
          }
        }
        *(uint *)(this + 8) = uVar5;
        iVar3 = *(int *)(this + 0xc);
      }
      *(int *)(this + 0xc) = iVar3 + 1;
      lVar2 = *(long *)this;
      lVar4 = (long)iVar3 * 0x70;
      *(undefined1 **)(lVar2 + lVar4) = puVar6;
      local_108 = &DAT_0061ac58;
      *(undefined4 *)(lVar2 + 8 + lVar4) = uVar7;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar2 + 0x20 + lVar4) = 0;
      *(undefined8 *)(lVar2 + 0x28 + lVar4) = uStack_e0;
      if (local_e8 != 0) {
        *(undefined8 *)(lVar2 + lVar4 + 0x10) = local_f8;
        *(undefined8 *)(lVar2 + lVar4 + 0x18) = uStack_f0;
        *(long *)(lVar2 + 0x20 + lVar4) = local_e8;
        local_e8 = 0;
        uStack_e0 = 0;
      }
      *(undefined8 *)(lVar2 + 0x30 + lVar4) = local_d8;
      local_d8 = 0;
      *(undefined8 *)(lVar2 + 0x38 + lVar4) = uStack_d0;
      uStack_d0 = 0;
      *(undefined8 *)(lVar2 + 0x40 + lVar4) = local_c8;
      local_c8 = 0;
      *(undefined8 *)(lVar2 + 0x48 + lVar4) = uStack_c0;
      uStack_c0 = 0;
      *(undefined8 *)(lVar2 + 0x50 + lVar4) = local_b8;
      *(undefined1 **)(lVar2 + 0x58 + lVar4) = local_b0;
      local_b0 = &DAT_0061ac58;
      *(undefined1 *)(lVar2 + 0x68 + lVar4) = local_a0;
      *(undefined8 *)(lVar2 + 0x60 + lVar4) = local_a8;
      Item::~Item((Item *)&local_108);
      Item::~Item((Item *)&local_98);
    }
  }
  return;
}


