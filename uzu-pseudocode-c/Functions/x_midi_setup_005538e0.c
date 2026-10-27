// Function : x_midi_setup
// Namespace: 
// Entry    : 005538e0
// Prototype: undefined x_midi_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005538e0 - 005541a1


void x_midi_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
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
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined4 extraout_XMM0_Db_17;
  undefined4 extraout_XMM0_Db_18;
  int in_stack_00000008;
  uint in_stack_ffffffffffffffc8;
  uint in_stack_ffffffffffffffd0;
  uint uVar7;
  uint uVar8;
  
  piVar3 = (int *)gensym("midiin");
  midiin_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,piVar3,0x5542f0,midiin_free,0x40,
                           &DAT_00000008,0,in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0);
  class_addlist((long)midiin_class,midiin_list);
  puVar1 = midiin_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("sysexin");
  sysexin_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x5543f0,sysexin_free,0x40,&DAT_00000008,0,
                 in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0);
  class_addlist((long)sysexin_class,midiin_list);
  puVar1 = sysexin_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("midirealtimein");
  midirealtimein_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x554490,midirealtimein_free,0x40,&DAT_00000008,0,
                 in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0);
  class_addlist((long)midirealtimein_class,midirealtimein_list);
  puVar1 = midirealtimein_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("notein");
  notein_class = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar3,0x554590,notein_free,0x50,
                           &DAT_00000008,6,0,in_stack_ffffffffffffffd0);
  class_addlist((long)notein_class,notein_list);
  puVar1 = notein_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("ctlin");
  ctlin_class = class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar3,0x554720,ctlin_free,0x50,
                          &DAT_00000008,10,0,in_stack_ffffffffffffffd0);
  class_addlist((long)ctlin_class,ctlin_list);
  puVar1 = ctlin_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("pgmin");
  pgmin_class = class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar3,0x554920,pgmin_free,0x48,
                          &DAT_00000008,6,0,in_stack_ffffffffffffffd0);
  class_addlist((long)pgmin_class,pgmin_list);
  puVar1 = pgmin_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("bendin");
  bendin_class = class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar3,0x554a70,bendin_free,0x48,
                           &DAT_00000008,6,0,in_stack_ffffffffffffffd0);
  class_addlist((long)bendin_class,bendin_list);
  puVar1 = bendin_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("touchin");
  touchin_class =
       class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x554bc0,touchin_free,0x48,&DAT_00000008,6,0,
                 in_stack_ffffffffffffffd0);
  class_addlist((long)touchin_class,touchin_list);
  puVar1 = touchin_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("polytouchin");
  polytouchin_class =
       class_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x554d10,polytouchin_free,0x50,&DAT_00000008,6,0,
                 in_stack_ffffffffffffffd0);
  class_addlist((long)polytouchin_class,polytouchin_list);
  puVar1 = polytouchin_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("midiout");
  midiout_class =
       class_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x554ea0,0,0x38,(char *)0x0,6,0,
                 in_stack_ffffffffffffffd0);
  class_doaddfloat((long)midiout_class,midiout_float);
  class_addlist((long)midiout_class,midiout_list);
  puVar1 = midiout_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("noteout");
  noteout_class =
       class_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x554fa0,0,0x38,(char *)0x0,6,0,
                 in_stack_ffffffffffffffd0);
  class_doaddfloat((long)noteout_class,noteout_float);
  puVar1 = noteout_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("ctlout");
  uVar7 = 0;
  ctlout_class = class_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_10),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar3,0x555030,0,0x38,(char *)0x0,6,6,0
                          );
  class_doaddfloat((long)ctlout_class,ctlout_float);
  puVar1 = ctlout_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("pgmout");
  pgmout_class = class_new(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_11),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar3,0x5550e0,0,0x38,(char *)0x0,6,0,
                           uVar7);
  class_doaddfloat((long)pgmout_class,pgmout_float);
  puVar1 = pgmout_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("bendout");
  bendout_class =
       class_new(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_12),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x555190,0,0x38,(char *)0x0,6,0,uVar7);
  class_doaddfloat((long)bendout_class,bendout_float);
  puVar1 = bendout_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("touchout");
  touchout_class =
       class_new(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_13),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x555220,0,0x38,(char *)0x0,6,0,uVar7);
  class_doaddfloat((long)touchout_class,touchout_float);
  puVar1 = touchout_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("polytouchout");
  polytouchout_class =
       class_new(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_14),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x5552b0,0,0x38,(char *)0x0,6,0,uVar7);
  class_doaddfloat((long)polytouchout_class,polytouchout_float);
  puVar1 = polytouchout_class;
  puVar4 = gensym("midi");
  class_sethelpsymbol((long)puVar1,puVar4);
  piVar3 = (int *)gensym("makenote");
  uVar8 = 0;
  uVar7 = 6;
  pcVar5 = (char *)0x0;
  uVar6 = 6;
  makenote_class =
       class_new(CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_15),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x555350,makenote_clear,0x50,(char *)0x0,6,6,0);
  class_doaddfloat((long)makenote_class,makenote_float);
  plVar2 = makenote_class;
  piVar3 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5554d0,piVar3,0,pcVar5,uVar6,uVar7);
  plVar2 = makenote_class;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5553f0,piVar3,0,pcVar5,uVar6,uVar7);
  piVar3 = (int *)gensym("stripnote");
  stripnote_class =
       class_new(CONCAT44(extraout_XMM0_Db_16,extraout_XMM0_Da_18),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x5555a0,0,0x48,(char *)0x0,0,uVar7,uVar8);
  class_doaddfloat((long)stripnote_class,stripnote_float);
  piVar3 = (int *)gensym("poly");
  uVar8 = 0;
  uVar7 = 6;
  pcVar5 = (char *)0x0;
  uVar6 = 6;
  poly_class = class_new(CONCAT44(extraout_XMM0_Db_17,extraout_XMM0_Da_19),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar3,0x555660,poly_free,0x68,(char *)0x0,
                         6,6,0);
  class_doaddfloat((long)poly_class,poly_float);
  plVar2 = poly_class;
  piVar3 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x555ac0,piVar3,0,pcVar5,uVar6,uVar7);
  plVar2 = poly_class;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x555b50,piVar3,0,pcVar5,uVar6,uVar7);
  piVar3 = (int *)gensym("bag");
  pcVar5 = (char *)0x0;
  uVar6 = 0;
  bag_class = class_new(CONCAT44(extraout_XMM0_Db_18,extraout_XMM0_Da_22),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,piVar3,0x555c30,bag_clear,0x40,(char *)0x0,0
                        ,uVar7,uVar8);
  class_doaddfloat((long)bag_class,bag_float);
  plVar2 = bag_class;
  piVar3 = (int *)gensym("flush");
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x555d70,piVar3,0,pcVar5,uVar6,uVar7);
  plVar2 = bag_class;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x555c80,piVar3,0,pcVar5,uVar6,in_stack_00000008);
  return;
}


