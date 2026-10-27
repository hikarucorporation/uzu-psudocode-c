// Function : nl_langinfo
// Namespace: _EXTERNAL_
// Entry    : 0015da70
// Prototype: char * nl_langinfo(nl_item __item)
// Body     : 0015da70 - 0015da75


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_nl_langinfo_00717538)();
  return pcVar1;
}


