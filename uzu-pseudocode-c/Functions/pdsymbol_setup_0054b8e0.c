// Function : pdsymbol_setup
// Namespace: 
// Entry    : 0054b8e0
// Prototype: undefined pdsymbol_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054b8e0 - 0054b951


void pdsymbol_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("symbol");
  pdsymbol_class =
       class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 (long)PTR_pdsymbol_new_00715578,0,0x38,(char *)0x0,2,0,unaff_retaddr);
  class_addbang((long)pdsymbol_class,pdsymbol_bang);
  class_addsymbol((long)pdsymbol_class,pdsymbol_symbol);
  class_addanything((long)pdsymbol_class,pdsymbol_anything);
  return;
}


