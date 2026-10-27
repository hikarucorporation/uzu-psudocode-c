// Function : _M_replace
// Namespace: std:__cxx11:u16string
// Entry    : 001bca40
// Prototype: u16string * _M_replace(u16string * this, long param_1, ulong param_2, u16string * param_3, ulong param_4)
// Body     : 001bca40 - 001bccc1


/* std::__cxx11::u16string::_M_replace(unsigned long, unsigned long, char16_t const*, unsigned long)
    */

u16string * __thiscall
std::__cxx11::u16string::_M_replace
          (u16string *this,long param_1,ulong param_2,u16string *param_3,ulong param_4)

{
  ulong uVar1;
  u16string *puVar2;
  ulong uVar3;
  size_t __n;
  long lVar4;
  u16string *puVar5;
  u16string *__dest;
  long lVar6;
  
  lVar4 = *(long *)(this + 8);
  if ((param_2 - lVar4) + 0x1fffffffffffffff < param_4) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_replace");
  }
  uVar1 = (param_4 - param_2) + lVar4;
  puVar2 = *(u16string **)this;
  uVar3 = 7;
  if (puVar2 != this + 0x10) {
    uVar3 = *(ulong *)(this + 0x10);
  }
  if (uVar3 < uVar1) {
    _M_mutate(this,param_1,param_2,(undefined2 *)param_3,param_4);
    goto LAB_001bcc8d;
  }
  __dest = puVar2 + param_1 * 2;
  lVar6 = lVar4 - (param_1 + param_2);
  puVar5 = __dest;
  uVar3 = param_4;
  if ((param_3 < puVar2) || (puVar2 + lVar4 * 2 < param_3)) {
    if ((param_4 != param_2) && (lVar6 != 0)) {
      if (lVar6 == 1) {
        *(undefined2 *)(__dest + param_4 * 2) = *(undefined2 *)(__dest + param_2 * 2);
      }
      else {
        memmove(__dest + param_4 * 2,__dest + param_2 * 2,lVar6 * 2);
      }
    }
    if (param_4 == 0) goto LAB_001bcc8d;
    if (param_4 == 1) goto LAB_001bcc20;
  }
  else {
    if (param_4 - 1 < param_2) {
      if (param_4 == 1) {
        *(undefined2 *)__dest = *(undefined2 *)param_3;
      }
      else {
        memmove(__dest,param_3,param_4 * 2);
      }
    }
    if ((param_4 != param_2) && (lVar6 != 0)) {
      if (lVar6 == 1) {
        *(undefined2 *)(__dest + param_4 * 2) = *(undefined2 *)(__dest + param_2 * 2);
      }
      else {
        memmove(__dest + param_4 * 2,__dest + param_2 * 2,lVar6 * 2);
      }
    }
    if (param_4 <= param_2) goto LAB_001bcc8d;
    puVar2 = __dest + param_2 * 2;
    if (param_3 + param_4 * 2 <= puVar2) {
      if (param_4 != 1) {
        memmove(__dest,param_3,param_4 * 2);
        goto LAB_001bcc8d;
      }
LAB_001bcc20:
      *(undefined2 *)__dest = *(undefined2 *)param_3;
      goto LAB_001bcc8d;
    }
    __n = (long)puVar2 - (long)param_3;
    if (puVar2 < param_3 || __n == 0) {
      param_3 = __dest + ((param_4 - param_2) + ((ulong)((long)param_3 - (long)__dest) >> 1)) * 2;
      if (param_4 == 1) {
        *(undefined2 *)__dest = *(undefined2 *)param_3;
        goto LAB_001bcc8d;
      }
    }
    else {
      lVar4 = (long)__n >> 1;
      if (lVar4 != 0) {
        if (lVar4 == 1) {
          *(undefined2 *)__dest = *(undefined2 *)param_3;
        }
        else {
          memmove(__dest,param_3,__n);
        }
      }
      uVar3 = param_4 - lVar4;
      if (uVar3 == 0) goto LAB_001bcc8d;
      puVar5 = __dest + lVar4 * 2;
      param_3 = __dest + param_4 * 2;
      if (uVar3 == 1) {
        *(undefined2 *)puVar5 = *(undefined2 *)param_3;
        goto LAB_001bcc8d;
      }
    }
  }
  memcpy(puVar5,param_3,uVar3 * 2);
LAB_001bcc8d:
  *(ulong *)(this + 8) = uVar1;
  *(undefined2 *)(*(long *)this + uVar1 * 2) = 0;
  return this;
}


