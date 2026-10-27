// Function : canvas_isabstraction
// Namespace: 
// Entry    : 004fe7f0
// Prototype: bool canvas_isabstraction(long param_1)
// Body     : 004fe7f0 - 004fe7fd


bool canvas_isabstraction(long param_1)

{
  return *(long *)(param_1 + 0xe0) != 0;
}


