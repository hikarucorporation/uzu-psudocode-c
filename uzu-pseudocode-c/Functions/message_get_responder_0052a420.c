// Function : message_get_responder
// Namespace: 
// Entry    : 0052a420
// Prototype: long * message_get_responder(long * param_1)
// Body     : 0052a420 - 0052a434


long * message_get_responder(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if (*param_1 == message_class) {
    plVar1 = param_1 + 6;
  }
  return plVar1;
}


