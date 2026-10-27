// Function : _setjmp
// Namespace: _EXTERNAL_
// Entry    : 0015b7f0
// Prototype: int _setjmp(__jmp_buf_tag * __env)
// Body     : 0015b7f0 - 0015b7f5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__setjmp_007163f8)();
  return iVar1;
}


