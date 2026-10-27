// Function : find
// Namespace: std:_Hashtable_juce__String_std__pair_juce__String_const_juce__XWindowSystemUtilities__XSettin~045fc7b0
// Entry    : 001deb60
// Prototype: undefined8 * find(_Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> * this, byte * param_1)
// Body     : 001deb60 - 001dee9b


/* std::_Hashtable<juce::String, std::pair<juce::String const,
   juce::XWindowSystemUtilities::XSetting>, std::allocator<std::pair<juce::String const,
   juce::XWindowSystemUtilities::XSetting> >, std::__detail::_Select1st,
   std::equal_to<juce::String>, std::hash<juce::String>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::find(juce::String const&) const */

undefined8 * __thiscall
std::
_Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::find(_Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
       *this,byte *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 *puVar15;
  
  if (*(long *)(this + 0x18) == 0) {
    for (puVar10 = *(undefined8 **)(this + 0x10); puVar10 != (undefined8 *)0x0;
        puVar10 = (undefined8 *)*puVar10) {
      if ((byte *)puVar10[1] == param_1) {
        return puVar10;
      }
      uVar7 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (param_1,(byte *)puVar10[1]);
      if (uVar7 == 0) {
        return puVar10;
      }
    }
  }
  else {
    bVar9 = *param_1;
    uVar5 = 0;
    if (bVar9 != 0) {
      pbVar11 = param_1;
      do {
        pbVar12 = pbVar11 + 1;
        uVar7 = (uint)bVar9;
        if ((char)bVar9 < '\0') {
          if ((bVar9 & 0x40) == 0) {
            uVar7 = uVar7 & 0x7f;
            goto LAB_001deb8e;
          }
          if ((bVar9 & 0x20) == 0) {
            uVar8 = 0x3f;
            lVar14 = 0;
            bVar3 = false;
            bVar4 = false;
          }
          else {
            bVar3 = true;
            if ((bVar9 & 0x10) == 0) {
              uVar8 = 0x1f;
              lVar14 = 1;
              bVar4 = false;
            }
            else {
              uVar8 = 0xf;
              lVar14 = 2;
              bVar4 = true;
            }
          }
          uVar7 = uVar8 & uVar7;
          bVar9 = pbVar11[1];
          if ((bVar9 & 0xffffffc0) == 0x80) {
            pbVar13 = pbVar11 + lVar14 + 2;
            uVar7 = bVar9 & 0x3f | uVar7 << 6;
            pbVar12 = pbVar13;
            if (!bVar3) goto LAB_001deb8e;
            pbVar12 = pbVar11 + 2;
            bVar9 = *pbVar12;
            if ((bVar9 & 0xc0) == 0x80) {
              uVar7 = bVar9 & 0x3f | uVar7 << 6;
              pbVar12 = pbVar13;
              if (bVar4) {
                pbVar12 = pbVar11 + 3;
                bVar9 = *pbVar12;
                if ((bVar9 & 0xc0) != 0x80) goto LAB_001deb92;
                uVar7 = uVar7 << 6 | bVar9 & 0x3f;
                pbVar12 = pbVar13;
              }
              goto LAB_001deb8e;
            }
            goto LAB_001deb92;
          }
        }
        else {
LAB_001deb8e:
          bVar9 = *pbVar12;
LAB_001deb92:
        }
        pbVar11 = pbVar12;
        uVar5 = uVar5 * 0x65 + (ulong)uVar7;
      } while (bVar9 != 0);
    }
    uVar1 = *(ulong *)(this + 8);
    if ((uVar5 | uVar1) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) % (uVar1 & 0xffffffff);
      puVar10 = *(undefined8 **)(*(long *)this + uVar5 * 8);
    }
    else {
      uVar5 = uVar5 % uVar1;
      puVar10 = *(undefined8 **)(*(long *)this + uVar5 * 8);
    }
    if (puVar10 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)*puVar10;
      while (((byte *)puVar15[1] != param_1 &&
             (uVar7 = juce::CharacterFunctions::
                      compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                (param_1,(byte *)puVar15[1]), uVar7 != 0))) {
        puVar2 = (undefined8 *)*puVar15;
        if (puVar2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        bVar9 = *(byte *)puVar2[1];
        uVar6 = 0;
        pbVar11 = (byte *)puVar2[1];
        while (bVar9 != 0) {
          pbVar12 = pbVar11 + 1;
          uVar7 = (uint)bVar9;
          if ((char)bVar9 < '\0') {
            if ((bVar9 & 0x40) == 0) {
              uVar7 = uVar7 & 0x7f;
              goto LAB_001ded89;
            }
            if ((bVar9 & 0x20) == 0) {
              uVar8 = 0x3f;
              lVar14 = 0;
              bVar3 = false;
              bVar4 = false;
            }
            else {
              bVar3 = true;
              if ((bVar9 & 0x10) == 0) {
                uVar8 = 0x1f;
                lVar14 = 1;
                bVar4 = false;
              }
              else {
                uVar8 = 0xf;
                lVar14 = 2;
                bVar4 = true;
              }
            }
            uVar7 = uVar8 & uVar7;
            bVar9 = pbVar11[1];
            if ((bVar9 & 0xffffffc0) == 0x80) {
              pbVar13 = pbVar11 + lVar14 + 2;
              uVar7 = bVar9 & 0x3f | uVar7 << 6;
              pbVar12 = pbVar13;
              if (bVar3) {
                pbVar12 = pbVar11 + 2;
                bVar9 = *pbVar12;
                if ((bVar9 & 0xc0) != 0x80) goto LAB_001ded8e;
                uVar7 = bVar9 & 0x3f | uVar7 << 6;
                pbVar12 = pbVar13;
                if (bVar4) {
                  pbVar12 = pbVar11 + 3;
                  bVar9 = *pbVar12;
                  if ((bVar9 & 0xffffffc0) != 0x80) goto LAB_001ded8e;
                  uVar7 = uVar7 << 6 | bVar9 & 0x3f;
                  pbVar12 = pbVar13;
                }
              }
              goto LAB_001ded89;
            }
          }
          else {
LAB_001ded89:
            bVar9 = *pbVar12;
          }
LAB_001ded8e:
          uVar6 = uVar6 * 0x65 + (ulong)uVar7;
          pbVar11 = pbVar12;
        }
        puVar10 = puVar15;
        puVar15 = puVar2;
        if ((uVar6 | uVar1) >> 0x20 == 0) {
          if ((uVar6 & 0xffffffff) % (uVar1 & 0xffffffff) != uVar5) {
            return (undefined8 *)0x0;
          }
        }
        else if (uVar6 % uVar1 != uVar5) {
          return (undefined8 *)0x0;
        }
      }
      if (puVar10 != (undefined8 *)0x0) {
        return (undefined8 *)*puVar10;
      }
    }
  }
  return (undefined8 *)0x0;
}


