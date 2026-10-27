// Function : d_array_setup
// Namespace: 
// Entry    : 0058bf20
// Prototype: undefined d_array_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0058bf20 - 0058c542


void d_array_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint unaff_EBX;
  char *pcVar4;
  undefined8 uVar5;
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
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Da_23;
  undefined4 extraout_XMM0_Da_24;
  undefined4 extraout_XMM0_Da_25;
  undefined4 extraout_XMM0_Da_26;
  undefined4 extraout_XMM0_Da_27;
  undefined4 extraout_XMM0_Da_28;
  undefined4 extraout_XMM0_Da_29;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  int in_stack_00000008;
  int iVar6;
  
  piVar1 = (int *)gensym("tabwrite~");
  iVar6 = 0;
  uVar5 = 10;
  tabwrite_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar1,0x58c550,tabwrite_tilde_free,0x48,(char *)0x10,10,0,
                 unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)tabwrite_tilde_class,0x40);
  plVar2 = tabwrite_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58c6c0,piVar1,0xb,(char *)0x0,uVar5,iVar6);
  plVar2 = tabwrite_tilde_class;
  piVar1 = (int *)gensym("set");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58c7b0,piVar1,10,(char *)0x0,uVar5,iVar6);
  plVar2 = tabwrite_tilde_class;
  piVar1 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58c7c0,piVar1,0,pcVar4,uVar5,iVar6);
  plVar2 = tabwrite_tilde_class;
  piVar1 = (int *)gensym("start");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58c850,piVar1,6,(char *)0x0,uVar5,iVar6);
  class_addbang((long)tabwrite_tilde_class,tabwrite_tilde_bang);
  piVar1 = (int *)gensym("tabplay~");
  iVar6 = 0;
  uVar5 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_05),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x58cd90,tabplay_tilde_free,0x58,
                     (char *)0x10,10,0,unaff_EBX);
  tabplay_tilde_class = plVar2;
  piVar1 = (int *)gensym("dsp");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58cf60,piVar1,0xb,(char *)0x0,uVar5,iVar6);
  plVar2 = tabplay_tilde_class;
  piVar1 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58d040,piVar1,0,pcVar4,uVar5,iVar6);
  plVar2 = tabplay_tilde_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58d0e0,piVar1,10,(char *)0x0,uVar5,iVar6);
  class_addlist((long)tabplay_tilde_class,tabplay_tilde_list);
  piVar1 = (int *)gensym("tabread~");
  iVar6 = 0;
  uVar5 = 10;
  tabread_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x58d560,tabread_tilde_free,0x48,(char *)0x10,10,0,
                 unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)tabread_tilde_class,0x40);
  plVar2 = tabread_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58d6e0,piVar1,0xb,(char *)0x0,uVar5,iVar6);
  plVar2 = tabread_tilde_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58d7e0,piVar1,10,(char *)0x0,uVar5,iVar6);
  piVar1 = (int *)gensym("tabread4~");
  iVar6 = 0;
  uVar5 = 10;
  tabread4_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_13),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x58d940,tabread4_tilde_free,0x48,(char *)0x10,10,0,
                 unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_14),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)tabread4_tilde_class,0x40);
  plVar2 = tabread4_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58dad0,piVar1,0xb,(char *)0x0,uVar5,iVar6);
  plVar2 = tabread4_tilde_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58dc10,piVar1,10,(char *)0x0,uVar5,iVar6);
  piVar1 = (int *)gensym("tabsend~");
  iVar6 = 0;
  uVar5 = 10;
  tabsend_class =
       class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_17),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x58ddb0,tabsend_free,0x48,(char *)0x10,10,0,
                 unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_18),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)tabsend_class,0x44);
  plVar2 = tabsend_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58df20,piVar1,0xb,(char *)0x0,uVar5,iVar6);
  plVar2 = tabsend_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58e030,piVar1,10,(char *)0x0,uVar5,iVar6);
  plVar2 = tabsend_class;
  puVar3 = gensym("tabsend-receive~");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("tabreceive~");
  iVar6 = 0;
  uVar5 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_21),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x58e1c0,tabreceive_free,0x40,
                     (char *)0x10,10,0,unaff_EBX);
  tabreceive_class = plVar2;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58e340,piVar1,0xb,(char *)0x0,uVar5,iVar6);
  plVar2 = tabreceive_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58e420,piVar1,10,(char *)0x0,uVar5,iVar6);
  plVar2 = tabreceive_class;
  puVar3 = gensym("tabsend-receive~");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("tabread");
  iVar6 = 0;
  uVar5 = 7;
  tabread_class =
       class_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_24),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x58e670,0,0x38,(char *)0x0,7,0,unaff_EBX);
  class_doaddfloat((long)tabread_class,tabread_float);
  plVar2 = tabread_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58e780,piVar1,2,(char *)0x0,uVar5,iVar6);
  piVar1 = (int *)gensym("tabread4");
  iVar6 = 0;
  uVar5 = 7;
  tabread4_class =
       class_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_26),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x58e790,0,0x38,(char *)0x0,7,0,unaff_EBX);
  class_doaddfloat((long)tabread4_class,tabread4_float);
  plVar2 = tabread4_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58e990,piVar1,2,(char *)0x0,uVar5,iVar6);
  piVar1 = (int *)gensym("tabwrite");
  uVar5 = 7;
  tabwrite_class =
       class_new(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_28),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x58be10,0,0x40,(char *)0x0,7,0,unaff_EBX);
  class_doaddfloat((long)tabwrite_class,tabwrite_float);
  plVar2 = tabwrite_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58bf10,piVar1,2,(char *)0x0,uVar5,in_stack_00000008);
  return;
}


