// Function : operator[]
// Namespace: std:__detail:_Map_base_juce__LinuxComponentPeer__std__pair_juce__LinuxComponentPeer_const_juce__X11Drag~f9b46564
// Entry    : 002c9210
// Prototype: long * operator[](ulong * param_1)
// Body     : 002c9210 - 002c9545


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::__detail::_Map_base<juce::LinuxComponentPeer*, std::pair<juce::LinuxComponentPeer* const,
   juce::X11DragState>, std::allocator<std::pair<juce::LinuxComponentPeer* const,
   juce::X11DragState> >, std::__detail::_Select1st, std::equal_to<juce::LinuxComponentPeer*>,
   std::hash<juce::LinuxComponentPeer*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](juce::LinuxComponentPeer*
   const&) */

long * __cdecl
std::__detail::
_Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](ulong *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  uVar8 = *param_1;
  if ((uVar8 | DAT_0071c5f0) >> 0x20 == 0) {
    uVar6 = (uVar8 & 0xffffffff) % (DAT_0071c5f0 & 0xffffffff);
    puVar1 = *(undefined8 **)(juce::dragAndDropStateMap + uVar6 * 8);
  }
  else {
    uVar6 = uVar8 % DAT_0071c5f0;
    puVar1 = *(undefined8 **)(juce::dragAndDropStateMap + uVar6 * 8);
  }
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = (long *)*puVar1;
    auVar10._8_8_ = plVar3[1];
    do {
      if (uVar8 == auVar10._8_8_) goto LAB_002c952f;
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) break;
      auVar10._8_8_ = plVar3[1];
      if ((auVar10._8_8_ | DAT_0071c5f0) >> 0x20 == 0) {
        uVar7 = (auVar10._8_8_ & 0xffffffff) % (DAT_0071c5f0 & 0xffffffff);
      }
      else {
        uVar7 = auVar10._8_8_ % DAT_0071c5f0;
      }
    } while (uVar7 == uVar6);
  }
  plVar3 = operator_new(0xb8);
  *plVar3 = 0;
  plVar3[1] = *param_1;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[5] = 0xffffffff;
  *(undefined1 *)(plVar3 + 6) = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[0xe] = (long)&DAT_0061ac58;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = (long)&DAT_0061ac58;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
                    /* try { // try from 002c934d to 002c9356 has its CatchHandler @ 002c956c */
  auVar10 = std::__detail::_Prime_rehash_policy::_M_need_rehash(0x71c608,DAT_0071c5f0,DAT_0071c600);
  auVar10._8_8_ = auVar10._8_8_;
  if ((auVar10._0_8_ & 1) == 0) {
  }
  else {
    if (auVar10._8_8_ == 1) {
      _DAT_0071c618 = 0;
      puVar4 = &DAT_0071c618;
      plVar9 = DAT_0071c5f8;
    }
    else {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar10._8_8_;
      if (SUB168(auVar10 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002c9541 to 002c9545 has its CatchHandler @ 002c9546 */
        std::__throw_bad_array_new_length();
      }
                    /* try { // try from 002c9385 to 002c938c has its CatchHandler @ 002c9546 */
      puVar4 = operator_new(SUB168(auVar10 * ZEXT816(8),0));
      memset(puVar4,0,auVar10._8_8_ * 8);
      plVar9 = DAT_0071c5f8;
    }
    DAT_0071c5f8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      DAT_0071c5f8 = (long *)0x0;
      uVar6 = 0;
      do {
        plVar2 = (long *)*plVar9;
        uVar7 = plVar9[1];
        if ((uVar7 | auVar10._8_8_) >> 0x20 == 0) {
          uVar7 = (uVar7 & 0xffffffff) % (auVar10._8_8_ & 0xffffffff);
          plVar5 = *(long **)(puVar4 + uVar7 * 8);
          if (plVar5 != (long *)0x0) goto LAB_002c93de;
LAB_002c941d:
          *plVar9 = (long)DAT_0071c5f8;
          DAT_0071c5f8 = plVar9;
          *(long ***)(puVar4 + uVar7 * 8) = &DAT_0071c5f8;
          if (*plVar9 != 0) {
            *(long **)(puVar4 + uVar6 * 8) = plVar9;
          }
        }
        else {
          uVar7 = uVar7 % auVar10._8_8_;
          plVar5 = *(long **)(puVar4 + uVar7 * 8);
          if (plVar5 == (long *)0x0) goto LAB_002c941d;
LAB_002c93de:
          *plVar9 = *plVar5;
          **(undefined8 **)(puVar4 + uVar7 * 8) = plVar9;
          uVar7 = uVar6;
        }
        plVar9 = plVar2;
        uVar6 = uVar7;
      } while (plVar2 != (long *)0x0);
    }
    if (juce::dragAndDropStateMap != &DAT_0071c618) {
      operator_delete(juce::dragAndDropStateMap);
    }
    juce::dragAndDropStateMap = puVar4;
    DAT_0071c5f0 = auVar10._8_8_;
    if ((uVar8 | auVar10._8_8_) >> 0x20 == 0) {
      uVar6 = (uVar8 & 0xffffffff) % (auVar10._8_8_ & 0xffffffff);
    }
    else {
      uVar6 = uVar8 % auVar10._8_8_;
    }
  }
  puVar4 = juce::dragAndDropStateMap;
  if (*(long **)(juce::dragAndDropStateMap + uVar6 * 8) == (long *)0x0) {
    *plVar3 = (long)DAT_0071c5f8;
    plVar9 = plVar3;
    if (DAT_0071c5f8 != (long *)0x0) {
      uVar8 = DAT_0071c5f8[1];
      if ((uVar8 | DAT_0071c5f0) >> 0x20 == 0) {
        uVar8 = (uVar8 & 0xffffffff) % (DAT_0071c5f0 & 0xffffffff);
      }
      else {
        uVar8 = uVar8 % DAT_0071c5f0;
      }
      DAT_0071c5f8 = plVar3;
      *(long **)(puVar4 + uVar8 * 8) = plVar3;
      puVar4 = juce::dragAndDropStateMap;
      plVar9 = DAT_0071c5f8;
    }
    DAT_0071c5f8 = plVar9;
    *(long ***)(puVar4 + uVar6 * 8) = &DAT_0071c5f8;
  }
  else {
    *plVar3 = **(long **)(juce::dragAndDropStateMap + uVar6 * 8);
    **(undefined8 **)(puVar4 + uVar6 * 8) = plVar3;
  }
  DAT_0071c600 = DAT_0071c600 + 1;
LAB_002c952f:
  return plVar3 + 2;
}


