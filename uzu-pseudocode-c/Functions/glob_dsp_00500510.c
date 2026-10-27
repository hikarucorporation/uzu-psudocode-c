// Function : glob_dsp
// Namespace: 
// Entry    : 00500510
// Prototype: undefined glob_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00500510 - 00500623


void glob_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
             undefined8 param_14)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 *puVar4;
  undefined7 extraout_var_01;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 unaff_BL;
  undefined **ppuVar5;
  float fVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar7;
  
  if (param_11 == 0) {
    uVar7 = __tls_get_addr(&PTR_007159b0);
    post(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"dsp state %d");
    return;
  }
  fVar6 = (float)atom_getfloat(param_12);
  ppuVar5 = &PTR_007159b0;
  plVar3 = (long *)__tls_get_addr();
  iVar1 = *(int *)(*(long *)(*plVar3 + 0x48) + 0x38);
  if ((int)fVar6 == 0) {
    if (iVar1 != 0) {
      uVar7 = ugen_stop();
      pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x6541bb,"s",
                  &DAT_006541c7,param_12,param_13,param_14,unaff_BL);
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      *(undefined4 *)(*(long *)(*plVar3 + 0x48) + 0x38) = 0;
      *(undefined4 *)PTR_canvas_dspstate_00715d08 = 0;
      puVar4 = gensym("pd-dsp-stopped");
      if (puVar4[1] != 0) {
        puVar4 = gensym("pd-dsp-stopped");
        pd_bang((long *)puVar4[1]);
      }
      bVar2 = audio_shouldkeepopen();
      if ((int)CONCAT71(extraout_var_01,bVar2) == 0) {
        sys_close_audio();
        return;
      }
    }
  }
  else if (iVar1 == 0) {
    bVar2 = audio_shouldkeepopen();
    if ((int)CONCAT71(extraout_var,bVar2) != 0) {
      bVar2 = audio_isopen();
      if ((int)CONCAT71(extraout_var_00,bVar2) != 0) {
        canvas_start_dsp(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,ppuVar5,param_10,extraout_RDX,param_12,param_13,
                         param_14);
        return;
      }
    }
    uVar7 = sys_reopen_audio();
    canvas_start_dsp(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,ppuVar5,param_10,
                     extraout_RDX_00,param_12,param_13,param_14);
    return;
  }
  return;
}


