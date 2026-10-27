// Function : glob_init
// Namespace: 
// Entry    : 00537a30
// Prototype: undefined glob_init(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00537a30 - 00538142


void glob_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  uint in_EAX;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint unaff_EBX;
  char *pcVar7;
  undefined8 uVar8;
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
  undefined4 extraout_XMM0_Da_30;
  undefined4 extraout_XMM0_Da_31;
  undefined4 extraout_XMM0_Da_32;
  undefined4 extraout_XMM0_Da_33;
  undefined4 extraout_XMM0_Da_34;
  undefined4 extraout_XMM0_Da_35;
  undefined4 extraout_XMM0_Da_36;
  undefined4 extraout_XMM0_Da_37;
  undefined4 extraout_XMM0_Da_38;
  undefined4 extraout_XMM0_Da_39;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  int iVar9;
  
  piVar3 = (int *)gensym("max");
  uVar6 = 8;
  pcVar7 = (char *)0x0;
  uVar8 = 0;
  maxclass = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,piVar3,0,0,8,(char *)0x0,0,in_EAX,unaff_EBX);
  puVar2 = PTR_max_default_007157b8;
  class_addanything((long)maxclass,PTR_max_default_007157b8);
  puVar4 = gensym("max");
  pd_bind(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,param_6,
          param_7,param_8,&maxclass,(long)puVar4,extraout_RDX,uVar6,pcVar7,uVar8);
  piVar3 = (int *)gensym("pd");
  uVar6 = 0;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0,0,8,(char *)0x0,0,in_EAX,unaff_EBX);
  puVar1 = PTR_glob_pdobject_007156d8;
  *(long **)PTR_glob_pdobject_007156d8 = plVar5;
  piVar3 = (int *)gensym("init");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_initfromgui_00715728,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("menunew");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_menunew_007154d0,piVar3,2,(char *)0x2,0,in_EAX);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("open");
  iVar9 = 0;
  uVar6 = 6;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_open_00715ac0,piVar3,2,(char *)0x2,6,0);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("quit");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_quit_00715e18,piVar3,6,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("exit");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_exit_00715798,piVar3,6,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("verifyquit");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_verifyquit_00715590,piVar3,6,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("foo");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_foo_00715eb8,piVar3,10,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_dsp_007157b0,piVar3,10,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("key");
  pcVar7 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_key_00715f60,piVar3,10,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("audiostatus");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_audiostatus_00715708,piVar3,0,pcVar7,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("finderror");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_finderror_00715528,piVar3,0,pcVar7,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("findinstance");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_findinstance_00715c08,piVar3,2,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("start-preference-dialog");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_start_preference_dialog_007158b8,piVar3,7,(char *)0x0,uVar6,iVar9)
  ;
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("audio-properties");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_audio_properties_00715d20,piVar3,6,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("audio-dialog");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_audio_dialog_00715dc0,piVar3,10,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("audio-setapi");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_audio_setapi_00715530,piVar3,1,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("midi-setapi");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_midi_setapi_00715468,piVar3,1,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("midi-properties");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_midi_properties_007156f0,piVar3,6,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("midi-dialog");
  pcVar7 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_midi_dialog_00715418,piVar3,10,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("start-path-dialog");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_start_path_dialog_00715a48,piVar3,0,pcVar7,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("path-dialog");
  class_addmethod(extraout_XMM0_Da_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_path_dialog_00715c68,piVar3,10,(char *)0x0,uVar6,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("add-to-path");
  pcVar7 = (char *)0x6;
  uVar8 = 0;
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_addtopath_00715bd0,piVar3,2,(char *)0x6,0,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("start-startup-dialog");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_start_startup_dialog_00715660,piVar3,0,pcVar7,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("startup-dialog");
  pcVar7 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_startup_dialog_00715518,piVar3,10,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("ping");
  class_addmethod(extraout_XMM0_Da_26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_ping_007157f0,piVar3,0,pcVar7,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("load-preferences");
  class_addmethod(extraout_XMM0_Da_27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_loadpreferences_00715ea0,piVar3,7,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("save-preferences");
  class_addmethod(extraout_XMM0_Da_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_savepreferences_00715a60,piVar3,7,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("forget-preferences");
  class_addmethod(extraout_XMM0_Da_29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_forgetpreferences_00715fe0,piVar3,7,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("zoom-open");
  class_addmethod(extraout_XMM0_Da_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_zoom_open_00715a08,piVar3,1,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("version");
  class_addmethod(extraout_XMM0_Da_31,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x538150,piVar3,1,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("perf");
  class_addmethod(extraout_XMM0_Da_32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x5381a0,piVar3,1,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("compatibility");
  class_addmethod(extraout_XMM0_Da_33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x5381c0,piVar3,1,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("plugin-dispatch");
  class_addmethod(extraout_XMM0_Da_34,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_plugindispatch_00715cb0,piVar3,10,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("help-intro");
  class_addmethod(extraout_XMM0_Da_35,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x538200,piVar3,10,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("fast-forward");
  class_addmethod(extraout_XMM0_Da_36,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_fastforward_00715f10,piVar3,1,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("set-tracing");
  pcVar7 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_37,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_settracing_00715b58,piVar3,1,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar1;
  piVar3 = (int *)gensym("watchdog");
  uVar6 = 0;
  class_addmethod(extraout_XMM0_Da_38,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,(long)PTR_glob_watchdog_00715648,piVar3,0,pcVar7,uVar8,iVar9);
  class_addanything(*(long *)puVar1,puVar2);
  puVar4 = gensym("pd");
  pd_bind(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_39),param_2,param_3,param_4,param_5,param_6,
          param_7,param_8,puVar1,(long)puVar4,extraout_RDX_00,uVar6,pcVar7,uVar8);
  return;
}


