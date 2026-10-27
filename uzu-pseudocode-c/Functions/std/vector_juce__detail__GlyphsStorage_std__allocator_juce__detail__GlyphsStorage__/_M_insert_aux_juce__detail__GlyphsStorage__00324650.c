// Function : _M_insert_aux<juce::detail::GlyphsStorage>
// Namespace: std:vector_juce__detail__GlyphsStorage_std__allocator_juce__detail__GlyphsStorage__
// Entry    : 00324650
// Prototype: void _M_insert_aux<juce::detail::GlyphsStorage>(vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> * this, undefined4 * param_1, undefined8 * param_2)
// Body     : 00324650 - 0032485c


/* void std::vector<juce::detail::GlyphsStorage, std::allocator<juce::detail::GlyphsStorage>
   >::_M_insert_aux<juce::detail::GlyphsStorage>(__gnu_cxx::__normal_iterator<juce::detail::GlyphsStorage*,
   std::vector<juce::detail::GlyphsStorage, std::allocator<juce::detail::GlyphsStorage> > >,
   juce::detail::GlyphsStorage&&) */

void __thiscall
std::vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>>::
_M_insert_aux<juce::detail::GlyphsStorage>
          (vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> *this,
          undefined4 *param_1,undefined8 *param_2)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  
  puVar4 = *(undefined8 **)(this + 8);
  *puVar4 = puVar4[-4];
  puVar4[1] = puVar4[-3];
  puVar4[-4] = 0;
  puVar4[-3] = 0;
  *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar4 + -2);
  puVar4[3] = puVar4[-1];
  puVar4[-1] = 0;
  lVar5 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar5 + 0x20;
  puVar14 = PTR___libc_single_threaded_00715c50;
  uVar16 = (lVar5 - (long)param_1) - 0x20;
  if (0 < (long)uVar16) {
    lVar17 = (uVar16 >> 5) + 1;
    plVar15 = (long *)(lVar5 + -8);
    do {
      lVar5 = plVar15[-7];
      lVar13 = plVar15[-6];
      plVar15[-7] = 0;
      plVar15[-6] = 0;
      p_Var6 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)plVar15[-2];
      *(int *)(plVar15 + -3) = (int)lVar5;
      *(undefined4 *)((long)plVar15 + -0x14) = *(undefined4 *)((long)plVar15 + -0x34);
      *(int *)(plVar15 + -2) = (int)lVar13;
      *(undefined4 *)((long)plVar15 + -0xc) = *(undefined4 *)((long)plVar15 + -0x2c);
      if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(p_Var6 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var6 + 8) = 0;
          (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
          (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
        }
        else {
          if (*puVar14 == '\0') {
            LOCK();
            p_Var2 = p_Var6 + 8;
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = (int)*(long *)(p_Var6 + 8);
            *(int *)(p_Var6 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
          }
        }
      }
      *(char *)(plVar15 + -1) = (char)plVar15[-5];
      lVar5 = plVar15[-4];
      plVar15[-4] = 0;
      plVar7 = (long *)*plVar15;
      *plVar15 = lVar5;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      lVar17 = lVar17 + -1;
      plVar15 = plVar15 + -4;
    } while (1 < lVar17);
  }
  uVar9 = *(undefined4 *)param_2;
  uVar10 = *(undefined4 *)((long)param_2 + 4);
  uVar11 = *(undefined4 *)(param_2 + 1);
  uVar12 = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 2);
  *param_1 = uVar9;
  param_1[1] = uVar10;
  param_1[2] = uVar11;
  param_1[3] = uVar12;
  if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var6 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var6 + 8) = 0;
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var2 = p_Var6 + 8;
        iVar3 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar3 = (int)*(long *)(p_Var6 + 8);
        *(int *)(p_Var6 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
      }
    }
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 2);
  uVar8 = param_2[3];
  param_2[3] = 0;
  plVar15 = *(long **)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = uVar8;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar7 = plVar15 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00324832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 8))();
      return;
    }
  }
  return;
}


