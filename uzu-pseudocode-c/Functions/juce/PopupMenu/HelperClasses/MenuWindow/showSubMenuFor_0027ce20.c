// Function : showSubMenuFor
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027ce20
// Prototype: undefined8 showSubMenuFor(MenuWindow * this, long param_1)
// Body     : 0027ce20 - 0027d4a2


/* juce::PopupMenu::HelperClasses::MenuWindow::showSubMenuFor(juce::PopupMenu::HelperClasses::ItemComponent*)
    */

undefined8 __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::showSubMenuFor(MenuWindow *this,long param_1)

{
  long *plVar1;
  MenuWindow *pMVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  MenuWindow *this_00;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  MenuWindow *local_140;
  undefined1 local_138 [16];
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_40;
  undefined1 *local_38;
  
  pMVar2 = *(MenuWindow **)(this + 400);
  *(undefined8 *)(this + 400) = 0;
  if (pMVar2 != (MenuWindow *)0x0) {
    ~MenuWindow(pMVar2);
    operator_delete(pMVar2);
  }
  if ((((param_1 == 0) || (*(char *)(param_1 + 0x154) == '\0')) ||
      (plVar3 = *(long **)(param_1 + 0x120), plVar3 == (long *)0x0)) ||
     (*(int *)((long)plVar3 + 0xc) < 1)) {
    uVar9 = 0;
  }
  else {
    local_140 = operator_new(0x1d0);
    local_158 = *(undefined1 (*) [16])(this + 0xf8);
    plVar4 = *(long **)(this + 0x108);
    if (plVar4 != (long *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar5 = *(long **)(this + 0x110);
    if (plVar5 != (long *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar6 = *(long **)(this + 0x118);
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar7 = *(long **)(this + 0x120);
    if (plVar7 != (long *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_178 = *(undefined1 (*) [16])(this + 0x128);
    local_168 = *(undefined8 *)(this + 0x138);
    uStack_160 = *(undefined4 *)(this + 0x140);
    uStack_15c = *(undefined4 *)(this + 0x144);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    local_e8 = local_158._0_8_;
    uStack_e0 = local_158._8_8_;
    local_d8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_d0 = plVar5;
    local_c8 = plVar6;
    local_c0 = plVar7;
    if (plVar7 == (long *)0x0) {
      local_a8 = local_168;
      uStack_a0 = uStack_160;
      uStack_9c = uStack_15c;
      local_b8 = local_178._0_4_;
      uStack_b4 = local_178._4_4_;
      uStack_b0 = local_178._8_4_;
      uStack_ac = local_178._12_4_;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_a8 = local_168;
      uStack_a0 = uStack_160;
      uStack_9c = uStack_15c;
      local_b8 = local_178._0_4_;
      uStack_b4 = local_178._4_4_;
      uStack_b0 = local_178._8_4_;
      uStack_ac = local_178._12_4_;
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulong *)(param_1 + 0x40);
    local_138 = auVar8 << 0x40;
    do {
      local_178 = local_138;
      local_40 = param_1;
      local_38 = local_178;
                    /* try { // try from 0027d042 to 0027d049 has its CatchHandler @ 0027d4bf */
      local_138 = detail::ComponentHelpers::
                  convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                  ::{lambda()#1}::operator()((_lambda___1_ *)&local_40);
      local_158 = local_138;
      if (*(float **)(param_1 + 0x50) != (float *)0x0) {
        local_138 = Rectangle<int>::transformedBy
                              ((Rectangle<int> *)local_158,*(float **)(param_1 + 0x50));
      }
      plVar6 = local_c8;
      plVar5 = local_d0;
      plVar4 = local_d8;
      pMVar2 = local_140;
      param_1 = *(long *)(param_1 + 0x30);
    } while (param_1 != 0);
    if (local_d8 != (long *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    if (local_d0 != (long *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    if (local_c8 != (long *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    if (local_c0 != (long *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    local_178._4_4_ = uStack_b4;
    local_178._0_4_ = local_b8;
    local_178._12_4_ = uStack_ac;
    local_178._8_4_ = uStack_b0;
    local_168 = local_a8;
    uStack_160 = uStack_a0;
    uStack_15c = uStack_9c;
    local_128 = local_d8;
    if (local_d8 != (long *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    local_120 = local_d0;
    if (local_d0 != (long *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    local_118 = local_c8;
    if (local_c8 != (long *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    local_110 = local_c0;
    if (local_c0 == (long *)0x0) {
      local_f8 = local_a8;
      uStack_f0 = uStack_a0;
      uStack_ec = uStack_9c;
      local_108 = local_b8;
      uStack_104 = uStack_b4;
      uStack_100 = uStack_b0;
      uStack_fc = uStack_ac;
    }
    else {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
      local_f8 = local_a8;
      uStack_f0 = uStack_a0;
      uStack_ec = uStack_9c;
      local_108 = local_b8;
      uStack_104 = uStack_b4;
      uStack_100 = uStack_b0;
      uStack_fc = uStack_ac;
      LOCK();
      plVar7 = local_c0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_c0 + 8))();
      }
    }
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    plVar6 = local_118;
    plVar5 = local_120;
    plVar4 = local_128;
    local_158 = local_138;
    if (local_128 != (long *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    if (local_120 != (long *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    if (local_118 != (long *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    if (local_110 != (long *)0x0) {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
    }
    local_178._4_4_ = uStack_fc;
    local_178._0_4_ = uStack_100;
    local_178._8_8_ = local_f8;
    auVar8 = local_178;
    local_168._0_4_ = uStack_f0;
    local_168._4_4_ = uStack_ec;
    local_98 = local_138._0_8_;
    uStack_90 = local_138._8_8_;
    local_88 = local_128;
    if (local_128 != (long *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    local_80 = local_120;
    if (local_120 != (long *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    local_78 = local_118;
    if (local_118 != (long *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    local_70 = local_110;
    local_178._8_4_ = SUB84(local_f8,0);
    local_178._12_4_ = SUB84((ulong)local_f8 >> 0x20,0);
    local_178 = auVar8;
    if (local_110 == (long *)0x0) {
      local_68 = local_108;
      local_64 = 0;
      local_60 = uStack_100;
      uStack_5c = uStack_fc;
      uStack_58 = local_178._8_4_;
      uStack_54 = local_178._12_4_;
      local_50 = uStack_f0;
      uStack_4c = uStack_ec;
    }
    else {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
      local_68 = local_108;
      local_64 = 0;
      local_60 = uStack_100;
      uStack_5c = uStack_fc;
      uStack_58 = local_178._8_4_;
      uStack_54 = local_178._12_4_;
      local_50 = uStack_f0;
      uStack_4c = uStack_ec;
      LOCK();
      plVar7 = local_110 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_110 + 8))();
      }
    }
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
                    /* try { // try from 0027d302 to 0027d31a has its CatchHandler @ 0027d4a3 */
    MenuWindow(*(undefined4 *)(this + 0x1c8),pMVar2,plVar3,(long)this,&local_98,0,
               *(undefined8 *)(this + 0x158));
    this_00 = *(MenuWindow **)(this + 400);
    *(MenuWindow **)(this + 400) = pMVar2;
    if (this_00 != (MenuWindow *)0x0) {
      ~MenuWindow(this_00);
      operator_delete(this_00);
    }
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar3 = local_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_70 + 8))();
      }
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar3 = local_78 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_78 + 8))();
      }
    }
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_80 + 8))();
      }
    }
    if (local_88 != (long *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_88 + 8))();
      }
    }
    if (local_110 != (long *)0x0) {
      LOCK();
      plVar3 = local_110 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_110 + 8))();
      }
    }
    if (local_118 != (long *)0x0) {
      LOCK();
      plVar3 = local_118 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_118 + 8))();
      }
    }
    if (local_120 != (long *)0x0) {
      LOCK();
      plVar3 = local_120 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_120 + 8))();
      }
    }
    if (local_128 != (long *)0x0) {
      LOCK();
      plVar3 = local_128 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_128 + 8))();
      }
    }
    if (local_c0 != (long *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_c0 + 8))();
      }
    }
    if (local_c8 != (long *)0x0) {
      LOCK();
      plVar3 = local_c8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_c8 + 8))();
      }
    }
    if (local_d0 != (long *)0x0) {
      LOCK();
      plVar3 = local_d0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_d0 + 8))();
      }
    }
    if (local_d8 != (long *)0x0) {
      LOCK();
      plVar3 = local_d8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_d8 + 8))();
      }
    }
    Component::setVisible(*(Component **)(this + 400),1);
    Component::enterModalState(*(Component **)(this + 400),(long *)0x0);
    uVar9 = Component::toFront(*(Component **)(this + 400),'\0');
    uVar9 = CONCAT71((int7)((ulong)uVar9 >> 8),1);
  }
  return uVar9;
}


