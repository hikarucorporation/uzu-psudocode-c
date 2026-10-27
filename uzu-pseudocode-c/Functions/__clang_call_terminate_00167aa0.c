// Function : __clang_call_terminate
// Namespace: 
// Entry    : 00167aa0
// Prototype: undefined __clang_call_terminate(void)
// Body     : 00167aa0 - 00167aaa


void __clang_call_terminate(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


