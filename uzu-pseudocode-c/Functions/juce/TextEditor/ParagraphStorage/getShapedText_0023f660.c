// Function : getShapedText
// Namespace: juce:TextEditor:ParagraphStorage
// Entry    : 0023f660
// Prototype: ParagraphStorage * getShapedText(ParagraphStorage * this)
// Body     : 0023f660 - 0023fab5


/* juce::TextEditor::ParagraphStorage::getShapedText() */

ParagraphStorage * __thiscall
juce::TextEditor::ParagraphStorage::getShapedText(ParagraphStorage *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  long *plVar3;
  int iVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ParagraphStorage *this_01;
  void *local_158;
  long lStack_150;
  undefined8 local_148;
  ParagraphStorage *local_138;
  ParagraphStorage *local_130;
  void *local_128 [2];
  undefined8 local_118;
  long *plStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  void *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *local_e8;
  long *plStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  this_01 = this + 0x38;
  if (this[0x48] == (ParagraphStorage)0x0) {
    local_138 = this + 8;
    if (this[0x10] == (ParagraphStorage)0x0) {
      local_138 = this;
    }
    plVar10 = *(long **)(this + 0x30);
    uVar9 = *(ulong *)(this + 0x20);
    local_158 = (void *)0x0;
    lStack_150 = 0;
    local_148 = 0;
    local_130 = this_01;
    detail::RangedValues<juce::Font>::getIntersectionsWith
              ((Ranges *)local_128,plVar10,uVar9,*(long *)(this + 0x28));
    if ((long)uVar9 < 0) {
      uVar9 = 0;
    }
                    /* try { // try from 0023f6d0 to 0023f6f5 has its CatchHandler @ 0023fb0c */
    detail::Ranges::erase((Ranges *)local_128,0,uVar9,&local_158);
    detail::Ranges::shift((Ranges *)local_128,uVar9,-uVar9,&local_158);
    pvVar7 = local_158;
    if (lStack_150 - (long)local_158 != 0) {
      uVar9 = SUB168(SEXT816(lStack_150 - (long)local_158) * SEXT816(0x2aaaaaaaaaaaaaab),8);
      lVar11 = 0;
      do {
                    /* try { // try from 0023f734 to 0023f73b has its CatchHandler @ 0023fb15 */
        detail::RangedValues<juce::Font>::applyOperation
                  ((RangedValues<juce::Font> *)local_128,(long *)((long)pvVar7 + lVar11));
        lVar11 = lVar11 + 0x30;
      } while (((uVar9 >> 3) - ((long)uVar9 >> 0x3f)) * 0x30 != lVar11);
    }
                    /* try { // try from 0023f745 to 0023f753 has its CatchHandler @ 0023fb0c */
    detail::RangedValues<juce::Font>::mergeEqualItems
              ((RangedValues<juce::Font> *)local_128,0,(long *)&local_158);
    this_01 = local_130;
    if (local_158 != (void *)0x0) {
      operator_delete(local_158);
    }
                    /* try { // try from 0023f76e to 0023f782 has its CatchHandler @ 0023faf7 */
    detail::ShapedTextOptions::withFonts
              (local_a8,plVar10 + 0x13,
               (vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *)local_128);
    for (plVar10 = plStack_110; plVar10 != (long *)CONCAT44(uStack_104,local_108);
        plVar10 = plVar10 + 1) {
      plVar5 = (long *)*plVar10;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    if (plStack_110 != (long *)0x0) {
      operator_delete(plStack_110);
    }
    if (local_128[0] != (void *)0x0) {
      operator_delete(local_128[0]);
    }
    if (this[0x48] != (ParagraphStorage)0x0) {
      this[0x48] = (ParagraphStorage)0x0;
      this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x40);
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar9 = *(ulong *)(this_00 + 8);
        if (uVar9 == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var2 = this_00 + 8;
            uVar9 = (ulong)*(uint *)p_Var2;
            *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
            UNLOCK();
          }
          else {
            *(int *)(this_00 + 8) = (int)uVar9 + -1;
          }
          if ((int)uVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
          }
        }
      }
    }
    local_158 = *(void **)local_138;
    piVar8 = (int *)((long)local_158 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    local_108 = local_88;
    local_118 = local_98;
    plStack_110 = (long *)uStack_90;
    local_128[0] = (void *)local_a8[0];
    local_128[1] = (void *)local_a8[1];
    local_100 = local_80;
    uStack_f8 = uStack_78;
    local_f0 = local_70;
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_70 = 0;
    local_e8 = local_68;
    plStack_e0 = plStack_60;
    local_d8 = local_58;
    local_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
    local_58 = 0;
    local_c0 = local_40;
    local_d0 = local_50;
    uStack_c8 = uStack_48;
    local_b8 = (long)local_38;
    local_38 = &DAT_0061ac58;
                    /* try { // try from 0023f940 to 0023f94f has its CatchHandler @ 0023fab6 */
    detail::ShapedText::ShapedText
              ((ShapedText *)this_01,(ulong *)&local_158,(undefined1 (*) [16])local_128);
    piVar8 = (int *)(local_b8 + -0x10);
    plVar10 = local_e8;
    plVar5 = plStack_e0;
    if (piVar8 != &emptyString) {
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        operator_delete__(piVar8);
        plVar10 = local_e8;
        plVar5 = plStack_e0;
      }
    }
    for (; plVar1 = plStack_e0, plVar10 != plStack_e0; plVar10 = plVar10 + 1) {
      plVar6 = (long *)*plVar10;
      plStack_e0 = plVar5;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      plVar5 = plStack_e0;
      plStack_e0 = plVar1;
    }
    plStack_e0 = plVar5;
    if (local_e8 != (long *)0x0) {
      operator_delete(local_e8);
    }
    if (local_100 != (void *)0x0) {
      operator_delete(local_100);
    }
    piVar8 = (int *)((long)local_158 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        operator_delete__(piVar8);
      }
    }
    this[0x48] = (ParagraphStorage)0x1;
    piVar8 = (int *)(local_38 + -0x10);
    plVar10 = local_68;
    plVar5 = plStack_60;
    if (piVar8 != &emptyString) {
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        operator_delete__(piVar8);
        plVar10 = local_68;
        plVar5 = plStack_60;
      }
    }
    for (; plVar1 = plStack_60, plVar10 != plStack_60; plVar10 = plVar10 + 1) {
      plVar6 = (long *)*plVar10;
      plStack_60 = plVar5;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      plVar5 = plStack_60;
      plStack_60 = plVar1;
    }
    plStack_60 = plVar5;
    if (local_68 != (long *)0x0) {
      operator_delete(local_68);
    }
    if (local_80 != (void *)0x0) {
      operator_delete(local_80);
    }
  }
  return this_01;
}


