// Function : m_pd_setup
// Namespace: 
// Entry    : 0053a6e0
// Prototype: undefined m_pd_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053a6e0 - 0053a77e


void m_pd_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint in_EAX;
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("bindlist");
  bindlist_class =
       class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,0,0
                 ,0x10,(char *)0x1,0,in_EAX,unaff_retaddr);
  class_addbang((long)bindlist_class,bindlist_bang);
  class_doaddfloat((long)bindlist_class,bindlist_float);
  class_addsymbol((long)bindlist_class,bindlist_symbol);
  class_addpointer((long)bindlist_class,bindlist_pointer);
  class_addlist((long)bindlist_class,bindlist_list);
  class_addanything((long)bindlist_class,bindlist_anything);
  return;
}


