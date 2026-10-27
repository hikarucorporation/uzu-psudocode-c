// Function : default_setup
// Namespace: 
// Entry    : 005701b0
// Prototype: undefined default_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005701b0 - 0057024e


void default_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint unaff_retaddr;
  uint uVar2;
  
  piVar1 = (int *)gensym("default");
  uVar2 = 0;
  default_class =
       class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 0x570250,default_free,0x68,(char *)0x0,10,0,unaff_retaddr);
  class_addbang((long)default_class,default_output);
  class_addanything((long)default_class,default_any);
  piVar1 = (int *)gensym("default proxy");
  default_proxy_class =
       class_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 0,0,0x10,(char *)0x0,0,uVar2,unaff_retaddr);
  class_addanything((long)default_proxy_class,default_proxy_anything);
  return;
}


