// Function : d_soundfile_setup
// Namespace: 
// Entry    : 0059b770
// Prototype: undefined d_soundfile_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0059b770 - 0059ba72


void d_soundfile_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                      ,char *param_13,undefined8 param_14)

{
  uint in_EAX;
  int *piVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint unaff_EBX;
  char *pcVar3;
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
  undefined8 uVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  uVar4 = soundfile_wave_setup
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13,param_14);
  uVar4 = soundfile_aiff_setup
                    (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                     extraout_RDX,param_12,param_13,param_14);
  uVar4 = soundfile_caf_setup(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10,extraout_RDX_00,param_12,param_13,param_14);
  soundfile_next_setup
            (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             extraout_RDX_01,param_12,param_13,param_14);
  piVar1 = (int *)gensym("soundfiler");
  uVar4 = 0;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x59ba80,0,0x40,(char *)0x0,0,in_EAX,unaff_EBX);
  soundfiler_class = plVar2;
  piVar1 = (int *)gensym("read");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59bae0,piVar1,10,(char *)0x0,uVar4,in_EAX);
  plVar2 = soundfiler_class;
  piVar1 = (int *)gensym("write");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59cde0,piVar1,10,(char *)0x0,uVar4,in_EAX);
  piVar1 = (int *)gensym("readsf~");
  pcVar3 = (char *)0x0;
  uVar4 = 6;
  readsf_class = class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_02),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar1,0x59cf20,readsf_free,0x388,
                           (char *)0x0,6,6,0);
  class_doaddfloat((long)readsf_class,readsf_float);
  plVar2 = readsf_class;
  piVar1 = (int *)gensym("start");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59d290,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = readsf_class;
  piVar1 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59d2c0,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = readsf_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59d310,piVar1,0xb,(char *)0x0,uVar4,in_EAX);
  plVar2 = readsf_class;
  piVar1 = (int *)gensym("open");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59d430,piVar1,10,(char *)0x0,uVar4,in_EAX);
  plVar2 = readsf_class;
  piVar1 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59d7f0,piVar1,0,pcVar3,uVar4,in_EAX);
  piVar1 = (int *)gensym("writesf~");
  pcVar3 = (char *)0x0;
  uVar4 = 6;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_08),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x59e950,writesf_free,0x388,(char *)0x0,
                     6,6,0);
  writesf_class = plVar2;
  piVar1 = (int *)gensym("start");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59ec10,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = writesf_class;
  piVar1 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59ec40,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = writesf_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59ec90,piVar1,0xb,(char *)0x0,uVar4,in_EAX);
  plVar2 = writesf_class;
  piVar1 = (int *)gensym("open");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x59edd0,piVar1,10,(char *)0x0,uVar4,in_EAX);
  plVar2 = writesf_class;
  piVar1 = (int *)gensym("print");
  uVar4 = class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar2,0x59f030,piVar1,0,pcVar3,uVar4,in_EAX);
  class_domainsignalin
            (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)writesf_class,0x2e0
            );
  return;
}


