// Function : canvas_getsr
// Namespace: 
// Entry    : 004f5c00
// Prototype: undefined canvas_getsr(long param_1)
// Body     : 004f5c00 - 004f5c71


void canvas_getsr(long param_1)

{
  long *plVar1;
  
  sys_getsr();
  if (param_1 == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x30);
  do {
    if (plVar1 != (long *)0x0) goto LAB_004f5c60;
    do {
      do {
        param_1 = *(long *)(param_1 + 0x48);
        if (param_1 == 0) {
          return;
        }
        plVar1 = *(long **)(param_1 + 0x30);
      } while (plVar1 == (long *)0x0);
LAB_004f5c60:
    } while (*plVar1 == *(long *)PTR_block_class_00715ae0);
    plVar1 = (long *)plVar1[1];
  } while( true );
}


