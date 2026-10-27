// Function : declare_new
// Namespace: 
// Entry    : 00502230
// Prototype: long * declare_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, char * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00502230 - 00502297


long * declare_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,char *param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,declare_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined4 *)(plVar1 + 7) = 1;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *(long *)PTR_canvas_class_00715918;
  plVar2 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *plVar2 + 0x120,lVar3);
  plVar1[6] = (long)plVar2;
  if ((*(byte *)(plVar2 + 0x1d) & 8) == 0) {
    canvas_declare(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)plVar2,lVar3,param_10 & 0xffffffff,param_11,param_13,param_14);
  }
  return plVar1;
}


