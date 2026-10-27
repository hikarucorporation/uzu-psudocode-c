// Function : ~codecvt_utf8_utf16
// Namespace: std:codecvt_utf8_utf16_char16_t_1114111ul__std__codecvt_mode_0_
// Entry    : 001a23a0
// Prototype: undefined ~codecvt_utf8_utf16(codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0> * this)
// Body     : 001a23a0 - 001a23b1


/* std::codecvt_utf8_utf16<char16_t, 1114111ul, (std::codecvt_mode)0>::~codecvt_utf8_utf16() */

void __thiscall
std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>::~codecvt_utf8_utf16
          (codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0> *this)

{
  std::__codecvt_utf8_utf16_base<char16_t>::~__codecvt_utf8_utf16_base
            ((__codecvt_utf8_utf16_base<char16_t> *)this);
  operator_delete(this);
  return;
}


