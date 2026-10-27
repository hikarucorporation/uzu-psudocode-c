// Function : canvas_getsignallength
// Namespace: 
// Entry    : 004f5c80
// Prototype: int canvas_getsignallength(long param_1)
// Body     : 004f5c80 - 004f5ccb


int canvas_getsignallength(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    do {
      for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
        if ((*plVar1 == *(long *)PTR_block_class_00715ae0) && ((int)plVar1[6] != 0)) {
          return (int)plVar1[6];
        }
      }
      param_1 = *(long *)(param_1 + 0x48);
    } while (param_1 != 0);
  }
  return 0x40;
}


