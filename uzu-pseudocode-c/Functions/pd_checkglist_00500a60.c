// Function : pd_checkglist
// Namespace: 
// Entry    : 00500a60
// Prototype: long * pd_checkglist(long * param_1)
// Body     : 00500a60 - 00500a81


long * pd_checkglist(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if (*param_1 == *(long *)PTR_array_define_class_00715eb0) {
    plVar1 = param_1;
  }
  if (*param_1 == *(long *)PTR_canvas_class_00715918) {
    plVar1 = param_1;
  }
  return plVar1;
}


