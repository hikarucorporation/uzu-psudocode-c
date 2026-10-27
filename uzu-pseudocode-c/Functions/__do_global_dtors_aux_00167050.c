// Function : __do_global_dtors_aux
// Namespace: 
// Entry    : 00167050
// Prototype: undefined __do_global_dtors_aux(void)
// Body     : 00167050 - 00167088


void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  if (PTR___cxa_finalize_00715570 != (undefined *)0x0) {
    __cxa_finalize(__dso_handle);
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}


