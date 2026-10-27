// Function : getInstance
// Namespace: PdWorker
// Entry    : 00167240
// Prototype: undefined1 * getInstance(void)
// Body     : 00167240 - 0016729e


/* PdWorker::getInstance() */

undefined1 * PdWorker::getInstance(void)

{
  int iVar1;
  
  if (getInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&getInstance()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 00167264 to 0016726f has its CatchHandler @ 0016729f */
      PdWorker((PdWorker *)getInstance()::instance);
      __cxa_atexit(~PdWorker,getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&getInstance()::instance);
      return getInstance()::instance;
    }
  }
  return getInstance()::instance;
}


