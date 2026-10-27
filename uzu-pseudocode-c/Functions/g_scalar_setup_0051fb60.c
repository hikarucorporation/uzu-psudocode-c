// Function : g_scalar_setup
// Namespace: 
// Entry    : 0051fb60
// Prototype: undefined g_scalar_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0051fb60 - 0051fbc2


void g_scalar_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint unaff_EBX;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  piVar2 = (int *)gensym("scalar");
  puVar3 = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2
                     ,0,scalar_free,0,(char *)0x2,0,unaff_EBX,unaff_retaddr);
  puVar1 = PTR_scalar_class_00715810;
  *(undefined8 **)PTR_scalar_class_00715810 = puVar3;
  class_setwidget((long)puVar3,&scalar_widgetbehavior);
  class_setsavefn(*(long *)puVar1,scalar_save);
  class_setpropertiesfn(*(long *)puVar1,scalar_properties);
  return;
}


