// Function : canvas_getrootfor
// Namespace: 
// Entry    : 004fee60
// Prototype: undefined canvas_getrootfor(long param_1)
// Body     : 004fee60 - 004fee76


void canvas_getrootfor(long param_1)

{
  long *plVar1;
  
  do {
    if (*(long *)(param_1 + 0x48) == 0) {
      return;
    }
    plVar1 = (long *)(param_1 + 0xe0);
    param_1 = *(long *)(param_1 + 0x48);
  } while (*plVar1 == 0);
  return;
}


