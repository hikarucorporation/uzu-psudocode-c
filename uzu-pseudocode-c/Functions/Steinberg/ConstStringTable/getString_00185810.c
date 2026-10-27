// Function : getString
// Namespace: Steinberg:ConstStringTable
// Entry    : 00185810
// Prototype: uint getString(undefined8 param_1_00, byte param_2)
// Body     : 00185810 - 0018588d


/* Steinberg::ConstStringTable::getString(char) const */

uint __thiscall Steinberg::ConstStringTable::getString(undefined8 param_1_00,byte param_2)

{
  map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
  *pmVar1;
  map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
  *pmVar2;
  map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
  *pmVar3;
  map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
  *pmVar4;
  uint local_c;
  
  pmVar4 = *(map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
             **)(charMap + 0x10);
  if (pmVar4 != (map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
                 *)0x0) {
    pmVar1 = charMap + 8;
    pmVar2 = pmVar1;
    do {
      pmVar3 = pmVar4 + 0x18;
      if ((char)param_2 <= (char)pmVar4[0x20]) {
        pmVar3 = pmVar4 + 0x10;
        pmVar2 = pmVar4;
      }
      pmVar4 = *(map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
                 **)pmVar3;
    } while (pmVar4 != (map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
                        *)0x0);
    if (pmVar2 != pmVar1) {
      if ((char)param_2 < (char)pmVar2[0x20]) {
        pmVar2 = pmVar1;
      }
      if (pmVar2 != pmVar1) {
        return (uint)*(ushort *)(pmVar2 + 0x22);
      }
    }
  }
  local_c = (uint)param_2 | (int)(char)param_2 << 0x10;
  std::map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
  ::insert<std::pair<char,char16_t>>(charMap,(_Rb_tree_node_base *)&local_c);
  return (int)(char)param_2;
}


