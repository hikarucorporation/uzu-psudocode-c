// Function : file_define_new
// Namespace: 
// Entry    : 0057ac40
// Prototype: long * file_define_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057ac40 - 0057acc6


long * file_define_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 *param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_file_define_class_00715550,param_10,param_11,param_12,param_13,
                  param_14);
  plVar1[7] = (long)(plVar1 + 6);
  *(undefined4 *)(plVar1 + 6) = 0xffffffff;
  lVar2 = canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                           );
  plVar1[10] = lVar2;
  plVar1[9] = 0x1b6;
  if (((int)param_10 == 1) && (*param_11 == 2)) {
    lVar2 = atom_getsymbol(param_11);
    plVar1[8] = lVar2;
    pd_bind(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,lVar2
            ,extraout_RDX,param_12,param_13,param_14);
  }
  else {
    pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar1,"%s requires an argument: handle name",*param_9,param_12,param_13,param_14
            );
  }
  return plVar1;
}


