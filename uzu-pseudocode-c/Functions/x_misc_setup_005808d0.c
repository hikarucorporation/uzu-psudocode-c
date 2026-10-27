// Function : x_misc_setup
// Namespace: 
// Entry    : 005808d0
// Prototype: undefined x_misc_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005808d0 - 00580c01


void x_misc_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  uint uVar7;
  
  piVar2 = (int *)gensym("random");
  uVar7 = 0;
  uVar6 = 6;
  random_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,piVar2,0x580e20,0,0x38,(char *)0x0,6,0,
                           unaff_EBX);
  class_addbang((long)random_class,random_bang);
  plVar3 = random_class;
  piVar2 = (int *)gensym("seed");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x580ef0,piVar2,1,(char *)0x0,uVar6,uVar7);
  piVar2 = (int *)gensym("loadbang");
  uVar6 = 0;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar2,0x580f00,0,0x30,&DAT_00000008,0,uVar7,
                     unaff_EBX);
  loadbang_class = plVar3;
  piVar2 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x580f40,piVar2,6,(char *)0x0,uVar6,uVar7);
  piVar2 = (int *)gensym("namecanvas");
  uVar7 = 0;
  namecanvas_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x580f60,namecanvas_free,0x40,&DAT_00000008,7,0,
                 unaff_EBX);
  piVar2 = (int *)gensym("cputime");
  pcVar5 = (char *)0x0;
  uVar6 = 0;
  cputime_class =
       class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x580fd0,0,0x50,(char *)0x0,0,uVar7,unaff_EBX);
  class_addbang((long)cputime_class,cputime_bang);
  plVar3 = cputime_class;
  piVar2 = (int *)gensym("bang2");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x581050,piVar2,0,pcVar5,uVar6,uVar7);
  piVar2 = (int *)gensym("realtime");
  pcVar5 = (char *)0x0;
  uVar6 = 0;
  realtime_class =
       class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x5810c0,0,0x38,(char *)0x0,0,uVar7,unaff_EBX);
  class_addbang((long)realtime_class,realtime_bang);
  plVar3 = realtime_class;
  piVar2 = (int *)gensym("bang2");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x581140,piVar2,0,pcVar5,uVar6,uVar7);
  piVar2 = (int *)gensym("oscparse");
  uVar7 = 0;
  oscparse_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x57efb0,0,0x40,(char *)0x0,10,0,unaff_EBX);
  class_addlist((long)oscparse_class,oscparse_list);
  puVar1 = oscparse_class;
  puVar4 = gensym("osc-format-parse");
  uVar6 = class_sethelpsymbol((long)puVar1,puVar4);
  oscformat_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar2 = (int *)gensym("fudiparse");
  fudiparse_class =
       class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x580680,fudiparse_free,0x48,(char *)0x0,0,uVar7,
                 unaff_EBX);
  class_addlist((long)fudiparse_class,fudiparse_list);
  puVar1 = fudiparse_class;
  puVar4 = gensym("fudi-format-parse");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar2 = (int *)gensym("fudiformat");
  fudiformat_class =
       class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x581170,fudiformat_free,0x50,(char *)0x0,7,0,
                 unaff_EBX);
  class_addanything((long)fudiformat_class,fudiformat_any);
  puVar1 = fudiformat_class;
  puVar4 = gensym("fudi-format-parse");
  class_sethelpsymbol((long)puVar1,puVar4);
  return;
}


