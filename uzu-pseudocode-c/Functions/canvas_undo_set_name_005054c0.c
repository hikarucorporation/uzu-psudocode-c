// Function : canvas_undo_set_name
// Namespace: 
// Entry    : 005054c0
// Prototype: undefined canvas_undo_set_name(undefined8 param_1)
// Body     : 005054c0 - 005054e3


void canvas_undo_set_name(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined8 *)(**(long **)(*plVar1 + 0x48) + 0x38) = param_1;
  return;
}


