// Function : d_delay_setup
// Namespace: 
// Entry    : 005910d0
// Prototype: undefined d_delay_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005910d0 - 005912ea


void d_delay_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint unaff_EBX;
  char *pcVar4;
  undefined8 uVar5;
  uint unaff_R14D;
  uint unaff_R15D;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint uVar6;
  
  piVar1 = (int *)gensym("delwrite~");
  uVar5 = 7;
  sigdelwrite_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar1,0x5912f0,sigdelwrite_free,0x70,(char *)0x0,7,6,0);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)sigdelwrite_class,0x68);
  plVar3 = sigdelwrite_class;
  piVar1 = (int *)gensym("dsp");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5913b0,piVar1,0xb,(char *)0x0,uVar5,unaff_EBX);
  plVar3 = sigdelwrite_class;
  piVar1 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5914c0,piVar1,0,pcVar4,uVar5,unaff_EBX);
  plVar3 = sigdelwrite_class;
  puVar2 = gensym("delay-tilde-objects");
  class_sethelpsymbol((long)plVar3,puVar2);
  piVar1 = (int *)gensym("delread~");
  uVar5 = 7;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x5915c0,0,0x50,(char *)0x0,7,6,0);
  sigdelread_class = plVar3;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x591690,piVar1,0xb,(char *)0x0,uVar5,unaff_EBX);
  class_doaddfloat((long)sigdelread_class,sigdelread_float);
  plVar3 = sigdelread_class;
  puVar2 = gensym("delay-tilde-objects");
  class_sethelpsymbol((long)plVar3,puVar2);
  uVar6 = 0x59123b;
  piVar1 = (int *)gensym("delread4~");
  pcVar4 = (char *)0x0;
  uVar5 = 7;
  sigvd_class = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_05),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar1,0x591aa0,0,0x48,(char *)0x0,7,0,
                          uVar6);
  piVar1 = (int *)gensym("vd~");
  class_addcreator(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x591aa0,piVar1,7,0,pcVar4,uVar5,unaff_EBX,unaff_R14D,
                   unaff_R15D,unaff_retaddr,in_stack_00000008,in_stack_00000010);
  plVar3 = sigvd_class;
  piVar1 = (int *)gensym("dsp");
  uVar5 = class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar3,0x591b00,piVar1,0xb,(char *)0x0,uVar5,unaff_EBX);
  class_domainsignalin
            (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigvd_class,0x40);
  plVar3 = sigvd_class;
  puVar2 = gensym("delay-tilde-objects");
  class_sethelpsymbol((long)plVar3,puVar2);
  return;
}


