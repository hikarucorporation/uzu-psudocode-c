// Function : ~wstring_convert
// Namespace: std:__cxx11:wstring_convert_std__codecvt_utf8_utf16_char16_t_1114111ul__std__codecvt_mode_0__char16_t_~9fad7a19
// Entry    : 001a2430
// Prototype: undefined ~wstring_convert(wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>> * this)
// Body     : 001a2430 - 001a2468


/* std::__cxx11::wstring_convert<std::codecvt_utf8_utf16<char16_t, 1114111ul, (std::codecvt_mode)0>,
   char16_t, std::allocator<char16_t>, std::allocator<char> >::~wstring_convert() */

void __thiscall
std::__cxx11::
wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
::~wstring_convert(wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                   *this)

{
  if (*(wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
        **)(this + 0x28) != this + 0x38) {
    operator_delete(*(wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                      **)(this + 0x28));
  }
  if (*(wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
        **)(this + 8) != this + 0x18) {
    operator_delete(*(wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>
                      **)(this + 8));
  }
  if (*(long **)this == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001a2464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 8))();
  return;
}


