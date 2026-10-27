// Function : instance
// Namespace: Steinberg:ConstStringTable
// Entry    : 00185650
// Prototype: undefined1 * instance(void)
// Body     : 00185650 - 001856a7


/* Steinberg::ConstStringTable::instance() */

undefined1 * Steinberg::ConstStringTable::instance(void)

{
  int iVar1;
  
  if (instance()::stringTable == '\0') {
    iVar1 = __cxa_guard_acquire(&instance()::stringTable);
    if (iVar1 != 0) {
                    /* try { // try from 00185674 to 00185678 has its CatchHandler @ 001856a8 */
      ConstStringTable();
      __cxa_atexit(~ConstStringTable,&instance()::stringTable,&__dso_handle);
      __cxa_guard_release(&instance()::stringTable);
      return &instance()::stringTable;
    }
  }
  return &instance()::stringTable;
}


