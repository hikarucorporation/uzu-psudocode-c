// Function : g_canvas_freepdinstance
// Namespace: 
// Entry    : 00502550
// Prototype: undefined g_canvas_freepdinstance(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00502550 - 0050257c


void g_canvas_freepdinstance
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  
  g_editor_freepdinstance(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  g_template_freepdinstance();
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  freebytes(*(void **)(*plVar1 + 0x48));
  return;
}


