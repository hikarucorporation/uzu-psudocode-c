// Function : ~ConstStringTable
// Namespace: Steinberg:ConstStringTable
// Entry    : 00185900
// Prototype: undefined ~ConstStringTable(void)
// Body     : 00185900 - 00185992


/* Steinberg::ConstStringTable::~ConstStringTable() */

void __thiscall Steinberg::ConstStringTable::~ConstStringTable(void)

{
  _Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
  *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
  *this;
  
  p_Var2 = *(_Rb_tree_node_base **)(stringMap + 0x18);
  this = stringMap;
  if (p_Var2 != (_Rb_tree_node_base *)(stringMap + 8)) {
    do {
      if (*(void **)(p_Var2 + 0x28) != (void *)0x0) {
        operator_delete__(*(void **)(p_Var2 + 0x28));
        this = stringMap;
      }
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2);
    } while (p_Var2 != (_Rb_tree_node_base *)(this + 8));
    if (this == (_Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
                 *)0x0) goto LAB_00185964;
  }
                    /* try { // try from 00185954 to 0018595b has its CatchHandler @ 0018599b */
  std::
  _Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
  ::_M_erase(this,*(void **)(this + 0x10));
  operator_delete(this);
LAB_00185964:
  p_Var1 = charMap;
  if (charMap ==
      (_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
       *)0x0) {
    return;
  }
                    /* try { // try from 00185974 to 0018597b has its CatchHandler @ 00185993 */
  std::
  _Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>
  ::_M_erase(charMap,*(void **)(charMap + 0x10));
  operator_delete(p_Var1);
  return;
}


