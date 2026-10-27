// Function : d_dac_setup
// Namespace: 
// Entry    : 00590770
// Prototype: undefined d_dac_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00590770 - 00590903


void d_dac_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint unaff_EBX;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  int iVar5;
  
  piVar1 = (int *)gensym("dac~");
  iVar5 = 0;
  uVar4 = 10;
  dac_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,piVar1,0x590910,dac_free,0x48,(char *)0x10,10,0,
                        unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)dac_class,0x40);
  plVar3 = dac_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x590a30,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  plVar3 = dac_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x590b50,piVar1,10,(char *)0x0,uVar4,iVar5);
  plVar3 = dac_class;
  puVar2 = gensym("adc~_dac~");
  class_sethelpsymbol((long)plVar3,puVar2);
  piVar1 = (int *)gensym("adc~");
  iVar5 = 0;
  uVar4 = 10;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x590bb0,adc_free,0x48,(char *)0x0,10,0,
                     unaff_EBX);
  adc_class = plVar3;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x590da0,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  plVar3 = adc_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x590ef0,piVar1,10,(char *)0x0,uVar4,iVar5);
  plVar3 = adc_class;
  puVar2 = gensym("adc~_dac~");
  class_sethelpsymbol((long)plVar3,puVar2);
  return;
}


