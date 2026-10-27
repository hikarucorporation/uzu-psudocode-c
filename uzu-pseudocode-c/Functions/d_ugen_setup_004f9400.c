// Function : d_ugen_setup
// Namespace: 
// Entry    : 004f9400
// Prototype: undefined d_ugen_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004f9400 - 004f9446


void d_ugen_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint in_EAX;
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  block_tilde_setup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar1 = (int *)gensym("samplerate~");
  samplerate_tilde_class =
       class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 0x4f9450,0,0x40,(char *)0x0,0,in_EAX,unaff_retaddr);
  class_addbang((long)samplerate_tilde_class,samplerate_tilde_bang);
  return;
}


