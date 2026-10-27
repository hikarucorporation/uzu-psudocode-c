// Function : expr_setup
// Namespace: 
// Entry    : 00583d40
// Prototype: undefined expr_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00583d40 - 005840b4


void expr_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Db_02;
  uint uVar8;
  int iVar9;
  
  piVar2 = (int *)gensym("expr");
  uVar8 = 0;
  expr_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,piVar2,0x5840c0,expr_ff,0x2908,(char *)0x0,10,0,
                         unaff_EBX);
  class_addlist((long)expr_class,expr_list);
  piVar2 = (int *)gensym("exprproxy");
  pcVar5 = (char *)0x1;
  uVar6 = 0;
  exprproxy_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0,0,0x20,(char *)0x1,0,uVar8,unaff_EBX);
  class_doaddfloat((long)exprproxy_class,PTR_exprproxy_float_00715dd0);
  plVar3 = expr_class;
  piVar2 = (int *)gensym("version");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5848a0,piVar2,0,pcVar5,uVar6,uVar8);
  piVar2 = (int *)gensym("expr~");
  iVar9 = 0;
  pcVar5 = (char *)0x0;
  uVar6 = 10;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_02),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar2,0x5840c0,expr_ff,0x2908,(char *)0x0,10,0
                     ,unaff_EBX);
  expr_tilde_class = plVar3;
  piVar2 = (int *)gensym("signal");
  puVar1 = PTR_nullfn_00715950;
  uVar7 = class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar3,(long)PTR_nullfn_00715950,piVar2,0,pcVar5,uVar6,iVar9);
  class_domainsignalin
            (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)expr_tilde_class,
             0x2900);
  plVar3 = expr_tilde_class;
  piVar2 = (int *)gensym("dsp");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5848c0,piVar2,0xb,(char *)0x0,uVar6,iVar9);
  plVar3 = expr_tilde_class;
  puVar4 = gensym("expr");
  class_sethelpsymbol((long)plVar3,puVar4);
  plVar3 = expr_tilde_class;
  piVar2 = (int *)gensym("version");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5848a0,piVar2,0,pcVar5,uVar6,iVar9);
  piVar2 = (int *)gensym("fexpr~");
  iVar9 = 0;
  pcVar5 = (char *)0x0;
  uVar6 = 10;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_06),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar2,0x5840c0,expr_ff,0x2908,(char *)0x0,10,0
                     ,unaff_EBX);
  fexpr_tilde_class = plVar3;
  piVar2 = (int *)gensym("signal");
  uVar7 = class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar3,(long)puVar1,piVar2,0,pcVar5,uVar6,iVar9);
  class_domainsignalin
            (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)fexpr_tilde_class,
             0x2900);
  plVar3 = fexpr_tilde_class;
  piVar2 = (int *)gensym("start");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x584b90,piVar2,0,pcVar5,uVar6,iVar9);
  plVar3 = fexpr_tilde_class;
  piVar2 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x584ba0,piVar2,0,pcVar5,uVar6,iVar9);
  plVar3 = fexpr_tilde_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5848c0,piVar2,0xb,(char *)0x0,uVar6,iVar9);
  plVar3 = fexpr_tilde_class;
  piVar2 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x584bb0,piVar2,10,(char *)0x0,uVar6,iVar9);
  plVar3 = fexpr_tilde_class;
  piVar2 = (int *)gensym("clear");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x584ef0,piVar2,10,(char *)0x0,uVar6,iVar9);
  plVar3 = fexpr_tilde_class;
  piVar2 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5850e0,piVar2,0,pcVar5,uVar6,iVar9);
  plVar3 = fexpr_tilde_class;
  piVar2 = (int *)gensym("version");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5848a0,piVar2,0,pcVar5,uVar6,iVar9);
  plVar3 = fexpr_tilde_class;
  puVar4 = gensym("expr");
  class_sethelpsymbol((long)plVar3,puVar4);
  return;
}


