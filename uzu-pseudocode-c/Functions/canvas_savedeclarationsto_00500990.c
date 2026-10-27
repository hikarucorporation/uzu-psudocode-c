// Function : canvas_savedeclarationsto
// Namespace: 
// Entry    : 00500990
// Prototype: undefined canvas_savedeclarationsto(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 00500990 - 00500a56


void canvas_savedeclarationsto
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,int *param_10,undefined8 param_11,ulong param_12,char *param_13,
               undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_RAX;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  
  puVar4 = PTR_array_define_class_00715eb0;
  puVar3 = PTR_canvas_class_00715918;
  for (plVar1 = *(long **)(param_9 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = *plVar1;
    if (lVar2 == declare_class) {
      puVar5 = gensym("#X");
      uVar6 = binbuf_addv(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_10,0x6552a4,puVar5,param_12,param_13,param_14,in_RAX);
      uVar6 = binbuf_addbinbuf(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_10,(uint *)plVar1[2],extraout_RDX,param_12,param_13,param_14);
      param_1 = binbuf_addv(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                            0x656033,extraout_RDX_00,param_12,param_13,param_14,in_RAX);
      param_11 = extraout_RDX_01;
    }
    else if (((lVar2 == *(long *)puVar3) || (lVar2 == *(long *)puVar4)) &&
            ((*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x2f || (plVar1[0x1c] == 0)))) {
      param_1 = canvas_savedeclarationsto
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar1,param_10,param_11,param_12,param_13,param_14);
      param_11 = extraout_RDX_02;
    }
  }
  return;
}


