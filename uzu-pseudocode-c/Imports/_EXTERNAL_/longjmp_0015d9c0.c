// Function : longjmp
// Namespace: _EXTERNAL_
// Entry    : 0015d9c0
// Prototype: void longjmp(__jmp_buf_tag * __env, int __val)
// Body     : 0015d9c0 - 0015d9c5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_007174e0)();
  return;
}


